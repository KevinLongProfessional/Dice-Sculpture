#include "dotH/includes.h"
#include "dotH/headers.h"
#include "dotH/globals.h"
#include "dotH/prototypes.h"

using namespace std; 

void idle(){}



int main(int argc, char** argv){
glutInit(&argc, argv);
glutInitDisplayMode ( GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH );
glutInitWindowSize (500, 500); 
glutInitWindowPosition (100, 100);

int mainWindow=glutCreateWindow("Dice Sculpture");
init();
glutDisplayFunc(editorDisplay); 
glutKeyboardFunc(keyboard);
glutCreateSubWindow( mainWindow, 300,  0, 200,  200);
init();
glutInitDisplayMode ( GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH );
glutDisplayFunc(display); 
glutKeyboardFunc(keyboard);
glutSpecialFunc(specialKeys);

//glutIdleFunc(idle);
glutMainLoop();
}

