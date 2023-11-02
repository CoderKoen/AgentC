#include "../lib/util.hpp"

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClear(GL_COLOR_BUFFER_BIT);

    // Set color (for example, red)
    glColor3f(1.0, 0.0, 0.0);

    // Set the projection to pixels
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, windowWidth, 0, windowHeight);

    // Set the modelview matrix
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    // Your OpenGL drawing code goes here...
    glColor3f(1.0, 0.0, 0.0);
    rectangle(400,300,120,120);
    glutSwapBuffers();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("AgentC");
    glutDisplayFunc(display);


    glutMainLoop();
    return 0;
}