# WebGL in C with Emscripten
This repository demonstrates a minimum working example of using WebGL in C, compiled with Emscripten. 

## Gitpod Instructions
---

Upon opening this repository in Gitpod, the provided dockerfile and yml file will automatically install and set up Emscripten. 

In the terminal, run the following command to compile src/main.c:

    emcc src/main.c -o index.html

To open a port to view the html file, run the following command:
    
    python -m http.server

## Non-Gitpod Instructions
---

To compile and run this code, you must have Emscripten installed. For instructions on installing Emscripten, visit their [download page](https://emscripten.org/docs/getting_started/downloads.html).

Once you have verified that emscripten is installed, run the following command from the root directory

    emcc src/main.c -o index.html

The resulting html file can be opened and viewed in any browser.