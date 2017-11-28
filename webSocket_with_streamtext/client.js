"use strict";
var connection = null;
var serverUrl = "ws://172.28.4.99:6502";
var charactersToSend = 250
connection = new WebSocket(serverUrl);

function sendMessage() {
    // if (client.readyState === client.OPEN) {
	var msg = document.getElementsByTagName("div")[0].textContent;
	msg = msg.substring(msg.length - charactersToSend, msg.length)
	connection.send(msg);
    setTimeout(sendMessage, 250);
    // }
}

connection.onopen = function() {
    console.log('WebSocket Client Connected');
    sendMessage();
};


/* 
 * 
 * Extra functions */

connection.onerror = function() {
    console.log('Connection Error');
};

connection.onclose = function() {
    console.log('Connection Closed');
};
 
connection.onmessage = function(e) {
    if (typeof e.data === 'string') {
        console.log("Received message: '" + e.data + "'");
    }
};
