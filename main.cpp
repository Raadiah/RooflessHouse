/*
 * Windmill
 *
 * Written by Soomanib Kamruzzaman, 2019
 *
 */

#include  <windows.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif


#include <stdlib.h>
#include <cmath>
#define PI 3.14159

#include "texture.cpp"

#include "declaration.cpp"



RGBpixmap pix[10];

void Init()
{
	glEnable(GL_TEXTURE_2D);

	pix[0].readBMPFile("D:\\Graphics-Lab\\simple GL environment - Linear\\grass2.bmp");
	pix[0].setTexture(1);

	pix[1].readBMPFile("D:\\Graphics-Lab\\simple GL environment - Linear\\brick.bmp");
	pix[1].setTexture(2);

	pix[2].readBMPFile("D:\\Graphics-Lab\\simple GL environment - Linear\\floor.bmp");
	pix[2].setTexture(3);

	pix[4].readBMPFile("D:\\Graphics-Lab\\simple GL environment - Linear\\bgnd.bmp");
	pix[4].setTexture(4);

	pix[4].readBMPFile("D:\\Graphics-Lab\\simple GL environment - Linear\\glass.bmp");
	pix[4].setTexture(5);

	pix[4].readBMPFile("D:\\Graphics-Lab\\simple GL environment - Linear\\table_top.bmp");
	pix[4].setTexture(6);

}

static void resize(int width, int height)
{
    const float ar = (float) width / (float) height;

    glViewport(0, 0, width, height);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-ar, ar, -1.0, 1.0, 2.0, 100.0);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity() ;
}


static void display(void)
{
    const double t = glutGet(GLUT_ELAPSED_TIME) / 1000.0;
    const double a = t*90.0;

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glLoadIdentity();
    camera();

    glPushMatrix();
    glTranslated(tx, ty, tz);
    glRotated(rx, 1, 0, 0);
    glRotated(ry, 0, 1, 0);
    glRotated(rz, 0, 0, 1);
    glScaled(sx, sy, sz);
    environment();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);

    glutSwapBuffers();
}



static void idle(void)
{
    glutPostRedisplay();
}




/* Program entry point */

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(1366,768);
    glutInitWindowPosition(0,0);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);

    glutCreateWindow("Windmill Project");

    glutReshapeFunc(resize);
    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);

    glClearColor(0,0,0,1);
    glEnable(GL_CULL_FACE);
    glCullFace(GL_BACK);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    //Enabling Light
    glEnable(GL_NORMALIZE);
    glEnable(GL_LIGHTING);

    //Texture
    Init();

    glutMainLoop();

    return EXIT_SUCCESS;
}
