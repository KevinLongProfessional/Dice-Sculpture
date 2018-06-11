#include "dotH/globals.h"
#include "dotH/includes.h"

void editorDisplay(){
glClearColor(1.0,1.0,1.0,1.0);
glClear (GL_COLOR_BUFFER_BIT);


glutSwapBuffers();
glutPostRedisplay();

}
