// Requires the websocket module.
//

"use strict";

var http = require('http');
var WebSocketServer = require('websocket').server;

var connectionArray = [];

var server = http.createServer(function(request, response) {
    console.log((new Date()) + " Received request for " + request.url);
    response.writeHead(404);
    response.end();
});

server.listen(6502, function() {
    console.log((new Date()) + " Server is listening on port 6502");
});

// Create the WebSocket server

var wsServer = new WebSocketServer({
    httpServer: server,
    autoAcceptConnections: true // You should use false here!
});

wsServer.on('connect', function(connection) {
  
  console.log((new Date()) + " Connection accepted.");
  connectionArray.push(connection);
  
  connection.on('message', function(message) {
      if (message.type === 'utf8') {
          // console.log("Received Message: " + message.utf8Data);

          // Process messages

          var sendToClients = true;
          //msg = JSON.parse(message.utf8Data);


          // Convert the message back to JSON and send it out
          // to all clients.

          if (sendToClients) {
            var msgString = message.utf8Data
            var i;

            for (i=0; i<connectionArray.length; i++) {
              connectionArray[i].sendUTF(msgString);
            }
          }
      }
  });
  
  // Handle the WebSocket "close" event; this means a user has logged off
  // or has been disconnected.
  
  connection.on('close', function(connection) {
    connectionArray = connectionArray.filter(function(el, idx, ar) {
      return el.connected;
    });
    console.log((new Date()) + " One client"  + " disconnected.");
  });
});
