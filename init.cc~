#include "dotH/includes.h"
#include "dotH/SOIL.h"
#include "dotH/globals.h"

 GLuint falconTexture;
 GLuint One;
 GLuint Two;
 GLuint Three;
 GLuint Four;
 GLuint Five;


void init(){
  // glEnable(GL_LIGHTING);
   //glEnable(GL_LIGHT0);

//Vertices-edges+faces=2 Eulers formula

glEnable(GL_DEPTH_TEST);
glEnable(GL_TEXTURE_2D);

 falconTexture=SOIL_load_OGL_texture
	(
		"jpg/falcon.jpg",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
	SOIL_FLAG_TEXTURE_REPEATS | SOIL_FLAG_POWER_OF_TWO | SOIL_FLAG_COMPRESS_TO_DXT
	);

 One=SOIL_load_OGL_texture
	(
		"jpg/1.jpg",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
	SOIL_FLAG_TEXTURE_REPEATS | SOIL_FLAG_POWER_OF_TWO | SOIL_FLAG_COMPRESS_TO_DXT
	);

 Two=SOIL_load_OGL_texture
	(
		"jpg/2.jpg",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
	SOIL_FLAG_TEXTURE_REPEATS | SOIL_FLAG_POWER_OF_TWO | SOIL_FLAG_COMPRESS_TO_DXT
	);

 Three=SOIL_load_OGL_texture
	(
		"jpg/3.jpg",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
	SOIL_FLAG_TEXTURE_REPEATS | SOIL_FLAG_POWER_OF_TWO | SOIL_FLAG_COMPRESS_TO_DXT
	);

 Four=SOIL_load_OGL_texture
	(
		"jpg/4.jpg",
		SOIL_LOAD_AUTO,
		SOIL_CREATE_NEW_ID,
	SOIL_FLAG_TEXTURE_REPEATS | SOIL_FLAG_POWER_OF_TWO | SOIL_FLAG_COMPRESS_TO_DXT
	);

 Five=SOIL_load_OGL_texture
(
                "jpg/5.jpg",
                SOIL_LOAD_AUTO,
                SOIL_CREATE_NEW_ID,
        SOIL_FLAG_TEXTURE_REPEATS | SOIL_FLAG_POWER_OF_TWO | SOIL_FLAG_COMPRESS_TO_DXT
        );

gluLookAt(0,0,0,0,0,-1,0,1,0);

glClearColor (0.0, 0.0, 0.0, 1.0);
glViewport(0,0,1, 1);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
  glEnable(GL_LIGHTING);
   glEnable(GL_LIGHT0);
GLfloat light_0_position[]={0, -5, 0, 1}; 
glEnable( GL_NORMALIZE );
GLfloat global_ambient[]={0.5f,0.5f,0.5f,1.0f};
glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);
glShadeModel(GL_SMOOTH);
  glLightfv(GL_LIGHT0, GL_POSITION, light_0_position);


}
