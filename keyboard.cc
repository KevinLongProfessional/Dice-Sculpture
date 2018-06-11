#include "dotH/includes.h"
#include "dotH/globals.h"



void keyboard(unsigned char key, int x, int y)
{

if (key == 'q')
exit(0);

if (key == 's')
rotSpeed = 0;

if (key == '6')
sideTotal=6;

if (key == '2')
sideTotal=20;

}



void specialKeys(int key, int x, int y)
{
if (key == GLUT_KEY_UP)
rotSpeed++;

if (key == GLUT_KEY_DOWN)
rotSpeed--;



}
