#include "dotH/globals.h"
#include "dotH/includes.h"
#include "dotH/prototypes.h"
#include "dotH/headers.h"
#include "die.h"


int sideTotal=6;

static int rotation=0;
int rotSpeed = 1;

void display(){
glEnable(GL_TEXTURE_2D);
rotation+=rotSpeed;

glClear (GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT );
glPushMatrix(); 
glPushMatrix();
glColor3f(1.0f, 1.0f, 1.0f);
glRotated(rotation,-1,1,0);

int xpoint[999];
int ypoint[999];

int x=0, y=0, z=0;
/*
glBegin(GL_LINES);

int negboth[3]{0,-1,-2};
for(int i=0;i<3;i++){
for(int j=0;j<3;j++)
for(int k=0;k<3;k++){
if(i!=j && i!=k && j!=k){
cout<<i<<" "<<j<<" "<<k<<endl;

 glVertex3f(  i/10.0,  j/10.0, k/10.0 );
glVertex3f(  negboth[i]/10.0,  negboth[j]/10.0, negboth[k]/10.0 );
 }
}
}*/

glScaled(0.5,0.5,0.5);
dieStructure();
glScaled(2,2,2);





glRotated(180,-1,0,0);

glRotated(rotation,1,-1,0);
glPopMatrix(); 

 GLfloat light_0_ambient[]={1,1,1,1.2};
    GLfloat light_0_diffuse[]={1,1,1,1.0};
    GLfloat light_0_specular[]={1,1,1,1.0};
GLfloat light_0_position[]={2, 3.0, 2.0, 1.0}; 
  glLightfv(GL_LIGHT0, GL_POSITION, light_0_position);
 glLightfv(GL_LIGHT0, GL_AMBIENT, light_0_ambient);
    glLightfv(GL_LIGHT0, GL_DIFFUSE, light_0_diffuse);
    glLightfv(GL_LIGHT0, GL_SPECULAR, light_0_specular);
if (rotation>=360)
rotation=0;

 
glPopMatrix();

glutSwapBuffers();
glDisable(GL_TEXTURE_2D);
glutPostRedisplay();

}
