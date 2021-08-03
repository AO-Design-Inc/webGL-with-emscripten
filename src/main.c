#include <emscripten/html5.h>
#include <GLES2/gl2.h>

int main(){
    EmscriptenWebGLContextAttributes attr;
	emscripten_webgl_init_context_attributes(&attr);

	EMSCRIPTEN_WEBGL_CONTEXT_HANDLE ctx = emscripten_webgl_create_context("#canvas", &attr);
	emscripten_webgl_make_context_current(ctx);

	glClearColor(100.0, 155.0, 0.0, 1.0);
	glClear(GL_COLOR_BUFFER_BIT);
	return 1;
}