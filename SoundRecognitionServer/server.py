import struct
from keras.models import load_model
import tensorflow as tf
import numpy as np
from vggish_input import waveform_to_examples
import homesounds
from pathlib import Path
import time
import argparse
import wget
from helpers import dbFS
import socket

# contexts
context = homesounds.everything
active_context = homesounds.everything  # use this to change context -- see homesounds.py

# thresholds
PREDICTION_THRES = 0.5  # confidence
DBLEVEL_THRES = -30  # dB

# Variables
HOST = 'attu2.cs.washington.edu'
PORT = 23401
CHANNELS = 1
RATE = 16000
CHUNK = RATE * 2
MICROPHONES_DESCRIPTION = []
# FPS = 60.0

###########################
# Download model, if it doesn't exist
###########################
MODEL_URL = "https://www.dropbox.com/s/cq1d7uqg0l28211/example_model.hdf5?dl=1"
MODEL_PATH = "models/example_model.hdf5"
print("=====")
print("2 / 2: Checking model... ")
print("=====")
model_filename = "models/example_model.hdf5"
homesounds_model = Path(model_filename)
if (not homesounds_model.is_file()):
    print("Downloading example_model.hdf5 [867MB]: ")
    wget.download(MODEL_URL, MODEL_PATH)

##############################
# Load Deep Learning Model
##############################
print("Using deep learning model: %s" % (model_filename))
model = load_model(model_filename)
graph = tf.get_default_graph()

##############################
# Setup Audio Callback
##############################
def audio_samples(in_data):
    global graph
    print("======")
    np_wav = np.array(struct.unpack('h'*RATE, in_data)) / 32768.0  # Convert to [-1.0, +1.0]
    print(np_wav)
    print(len(np_wav))
    # Compute RMS and convert to dB
    rms = np.sqrt(np.mean(np_wav ** 2))
    db = dbFS(rms)

    # Make predictions
    x = waveform_to_examples(np_wav, RATE)
    predictions = []
    with graph.as_default():
        if x.shape[0] != 0:
            x = x.reshape(len(x), 96, 64, 1)
            pred = model.predict(x)
            predictions.append(pred)

        for prediction in predictions:
            context_prediction = np.take(prediction[0], [homesounds.labels[x] for x in active_context])
            m = np.argmax(context_prediction)
            if (context_prediction[m] > PREDICTION_THRES and db > DBLEVEL_THRES):
                print("Prediction: %s (%0.2f)" % (homesounds.to_human_labels[active_context[m]], context_prediction[m]))
                return homesounds.to_human_labels[active_context[m]]

with socket.socket() as server_socket:
    server_socket.bind((HOST, PORT))
    server_socket.listen(1)

    while(True):
        try:
            conn, address = server_socket.accept()
            print("Connection from " + address[0] + ":" + str(address[1]))

            data = conn.recv(CHUNK, socket.MSG_WAITALL)
            print("data received")
            while data != "":
                label = audio_samples(data)
                if (label != None):
                    conn.send(bytes(label, 'UTF-8'))
                data = conn.recv(CHUNK, socket.MSG_WAITALL)
                print("data received")
        except KeyboardInterrupt:
            conn.close()
            print("exiting")
            break
        except:
            conn.close()
            print("connection closed")
