#ifndef YOUR_GRAPHICS_LIBRARY_H
#define YOUR_GRAPHICS_LIBRARY_H

#include <GL/glut.h>
#include <GL/gl.h>

void timer(int value) {
    glutPostRedisplay();
    glutTimerFunc(10, timer, 0);
}

void startGraphics()
{
    int argc; 
    char** argv;
    glutInit(&argc,argv);
}

void background(float r,float g,float b,float alpha)
{
    glClearColor(r/255, g/255, b/255, alpha/255);
}
// Declare and define the functions as inline
inline void createWindow(int width, int height, const char* title, void (*display)())
{
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(width, height);
    glutCreateWindow(title);
    glutDisplayFunc(display);
    glutTimerFunc(10, timer, 0);
    glutMainLoop();
}

inline void pixelMode(int windowWidth, int windowHeight)
{
    glClear(GL_COLOR_BUFFER_BIT);

    // Set the projection to pixels
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, windowWidth, 0, windowHeight);

    // Set the modelview matrix
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

inline void rectangle(int x, int y, int w, int h)
{
    glBegin(GL_POLYGON);
    glVertex2i(x, y);
    glVertex2i(x + w, y);
    glVertex2i(x + w, y - h);
    glVertex2i(x, y - h);
    glEnd();
}

#endif // YOUR_GRAPHICS_LIBRARY_H
