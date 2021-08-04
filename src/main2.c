#include <emscripten/html5.h>
#include <GL/glew.h>
#include <GLES2/gl2.h>
#include <GL/glut.h>
#include <GL/gl.h>
 

void display() {  // Display function will draw the image.
 
    glClearColor( 0, 0, 0, 1 );  // (In fact, this is the default.)
    glClear( GL_COLOR_BUFFER_BIT );
    
    glBegin(GL_TRIANGLES);
    glColor3f( 1, 0, 0 ); // red
    glVertex2f( -0.8, -0.8 );
    glColor3f( 0, 1, 0 ); // green
    glVertex2f( 0.8, -0.8 );
    glColor3f( 0, 0, 1 ); // blue
    glVertex2f( 0, 0.9 );
    glEnd(); 
    
    glutSwapBuffers(); // Required to copy color buffer onto the screen.
 
}


int main( int argc, char** argv ) {  // Initialize GLUT and

    // setting up EmscriptenWebGLContextAttributes
	EmscriptenWebGLContextAttributes attr;
	emscripten_webgl_init_context_attributes(&attr);

	// target the canvas selector
	EMSCRIPTEN_WEBGL_CONTEXT_HANDLE ctx = emscripten_webgl_create_context("#phone", &attr);
	emscripten_webgl_make_context_current(ctx);

    //glClearColor(0.984, 0.4627, 0.502, 1.0);
	//glClear(GL_COLOR_BUFFER_BIT);

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);    // Use single color buffer and no depth buffer.
    glutInitWindowSize(500,500);         // Size of display area, in pixels.
    glutInitWindowPosition(100,100);     // Location of window in screen coordinates.
    glutCreateWindow("GL RGB Triangle"); // Parameter is window title.
    glutDisplayFunc(display);            // Called when the window needs to be redrawn.
    
    glutMainLoop(); // Run the event loop!  This function does not return.
                    // Program ends when user closes the window.
    return 1;

}

