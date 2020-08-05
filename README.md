# HoloSound

Introduction
---

We introduce a HoloLens based system to provide
three key features to DHH users: automatic speech transcription, sound localization, and
sound identity.

[[Paper PDF](https://makeabilitylab.cs.washington.edu/media/publications/Guo_HolosoundCombiningSpeechAndSoundIdentificationForDeafOrHardOfHearingUsersOnAHeadMountedDisplay_POSTERASSETS2020.pdf)]

![System_overview](Figures/System_overview.jpg)

## Table Of Contents ##

0. [Prerequesites](#Prerequesites)
1. [Setup](#Setup)
2. [Acknowledgement](#acknowledgement)
3. [Support](#support)

## Prerequesites ##
--------------
- Unity (2018.2.21f1)
- HoloLens 1

## Setup ##

Open `HoloSoundUnity` in Unity. Change build setting to UWP and use IL2CPP as backend.

Open `Assets/CaptionController.cs` and change variables `SERVER_URL` and `SERVER_PORT` to the corresponding values of the sound recognition server. Instructions for the sound recognition server can be found in folder `SoundRecognitionServer`


In progress...