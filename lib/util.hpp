#include <GL/glut.h>
#include <iostream>

int windowWidth = 800;
int windowHeight = 600;

void rectangle(int x, int y, int w, int h)
{
    glBegin(GL_POLYGON);
    glVertex2i(x,y);
    glVertex2i(x + w,y);
    glVertex2i(x + w,y);
    glVertex2i(x + w,y - h);
    glVertex2i(x,y - h);
    glEnd();
}