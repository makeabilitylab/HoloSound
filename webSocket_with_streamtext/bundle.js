(function e(t,n,r){function s(o,u){if(!n[o]){if(!t[o]){var a=typeof require=="function"&&require;if(!u&&a)return a(o,!0);if(i)return i(o,!0);var f=new Error("Cannot find module '"+o+"'");throw f.code="MODULE_NOT_FOUND",f}var l=n[o]={exports:{}};t[o][0].call(l.exports,function(e){var n=t[o][1][e];return s(n?n:e)},l,l.exports,e,t,n,r)}return n[o].exports}var i=typeof require=="function"&&require;for(var o=0;o<r.length;o++)s(r[o]);return s})({1:[function(require,module,exports){
"use strict";
var connection = null;
var serverUrl = "ws://128.208.49.41:6502";
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

},{}]},{},[1]);
