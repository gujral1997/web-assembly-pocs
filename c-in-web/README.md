# C-in-Web

A simple app to run c program (to increment number) inside the browser using web assembly 

## Steps to install

1. Run `emcc wasm/increment.c -s WASM=1 -o wasm/increment.html` to compile the C code to web assembly.
2. Run `npm install` to install the dependencies.
2. Run `npm start` to start the server.
