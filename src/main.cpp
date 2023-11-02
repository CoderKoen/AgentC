#include <iostream>
#include "../lib/graphics.h"

int windowWidth = 800;
int windowHeight = 600;
int y = 300;
int animationSpeed = 10;

void display() {
    background(72, 71, 77,1);
    pixelMode(windowWidth,windowHeight);
    // Your OpenGL drawing code goes here...
    glColor3f(1.0, 0.0, 0.0);
    rectangle(400,y,120,120);
    y++;
    

    glutSwapBuffers();
}

int main(int argc, char** argv) {
    startGraphics();
    createWindow(windowWidth,windowHeight,"AgentC",display);
    return 0;
}