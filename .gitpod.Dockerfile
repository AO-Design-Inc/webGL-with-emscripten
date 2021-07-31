FROM gitpod/workspace-full

RUN git clone "https://github.com/emscripten-core/emsdk.git" $HOME/.emsdk \
    && cd $HOME/.emsdk \
    && ./emsdk install latest \
    && ./emsdk activate latest 

RUN cd $HOME/.bashrc.d \
    && touch emsdk \
    && echo ". ~/.emsdk/emsdk_env.sh" >> emsdk