#ifdef _APPLE_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <math.h>
#include <stdlib.h>
#define nFlowers 100
#define orthoX 200
#define orthoY 150
int random(int mn, int mx){return ((rand()%(mx-mn+1)) + mn);}

static float movementY=0;

void drawFiledCircle(float cx, float cy, float r, int num_segments, int red, int green, int blue)
{
    glBegin(GL_POLYGON);
    glColor3ub(red,green,blue);
    for (int ii = 0; ii < num_segments; ii++)
    {
        float theta = 2.0f * 3.1415926f * float(ii) / float(num_segments);
        float x = r * cosf(theta);
        float y = r * sinf(theta);
        glVertex2f(x + cx, y + cy);
    }
    glEnd();
}

void sunFlower()
{
    glPushMatrix();
    glTranslated(0,0,0);
    glRotated(10,0,0,1);
    glRotated(sinf(movementY)*10.0,0,0,1);
    glBegin(GL_POLYGON);
    glColor3ub(0,140,0);
    glVertex2d(-1,0);
    glVertex2d(-1,40);
    glVertex2d(1,40);
    glVertex2d(1,0);
    glEnd();
    glTranslated(0,50,0);
    glColor3ub(250,250,0);
    glBegin(GL_POLYGON);
    glVertex2d(0,0);
    glVertex2d(-5,15);
    glVertex2d(0,20);
    glVertex2d(+5,15);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(0,0);
    glVertex2d(-5,-15);
    glVertex2d(0,-20);
    glVertex2d(+5,-15);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(0,0);
    glVertex2d(-15,-5);
    glVertex2d(-20,0);
    glVertex2d(-15,5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(0,0);
    glVertex2d(15,-5);
    glVertex2d(20,0);
    glVertex2d(15,5);
    glEnd();

    glPushMatrix();
    glRotated(45,0,0,1);
    glColor3ub(255,150,100);
    glBegin(GL_POLYGON);
    glVertex2d(0,0);
    glVertex2d(-5,15);
    glVertex2d(0,20);
    glVertex2d(+5,15);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(0,0);
    glVertex2d(-5,-15);
    glVertex2d(0,-20);
    glVertex2d(+5,-15);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(0,0);
    glVertex2d(-15,-5);
    glVertex2d(-20,0);
    glVertex2d(-15,5);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2d(0,0);
    glVertex2d(15,-5);
    glVertex2d(20,0);
    glVertex2d(15,5);
    glEnd();
    glPopMatrix();
    drawFiledCircle(0,0,4,50,255,255,255);
    glPopMatrix();
}

void backGround()
{
    glBegin(GL_POLYGON);
    glColor3ub(100,200,255);
    glVertex2d(0,20);
    glVertex2d(0,orthoY);
    glVertex2d(orthoX,orthoY);
    glVertex2d(orthoX,20);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(50,200,50);
    glVertex2d(0,0);
    glVertex2d(0,20);
    glVertex2d(orthoX,20);
    glVertex2d(orthoX,0);
    glEnd();
}

void humanWalk()
{
    glPushMatrix();
    glTranslated(movementY,cos(2*movementY)/5.0+12,0);
    glScaled(.8,.8,0);
    //hand1
    glPushMatrix();
    glTranslated(-1,11.5,0);
    glRotated(-sin(movementY)*10,0,0,1);
    glBegin(GL_POLYGON);
    glColor3ub(70,0,70);
    glVertex3f(0,-12,0);
    glVertex3f(-1,0,0);
    glVertex3f(-.5,1,0);
    glVertex3f(.5,1,0);
    glVertex3f(1,0,0);
    glVertex3f(.5,-12,0);
    glEnd();
    glPopMatrix();
    //leg1
    glPushMatrix();
    glTranslated(0,cos(movementY)+3,0);
    glRotated(sin(movementY)*10,0,0,1);
    glBegin(GL_POLYGON);
    glColor3ub(70,0,70);
    glVertex3f(-1,-14,0);
    glVertex3f(-1,0,0);
    glVertex3f(-.5,0,0);
    glVertex3f(1,-14,0);
    glEnd();
    glPopMatrix();
    //leg2
    glPushMatrix();
    glTranslated(0,-cos(movementY)+3,0);
    glRotated(-sin(movementY)*10,0,0,1);
    glBegin(GL_POLYGON);
    glColor3ub(190,0,190);
    glVertex3f(-1,-14,0);
    glVertex3f(-1,0,0);
    glVertex3f(-.5,0,0);
    glVertex3f(1,-14,0);
    glEnd();
    glPopMatrix();
    //neck
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(200,0,200);
    glVertex3f(-2,13,0);
    glVertex3f(-1.5,13.5,0);
    glVertex3f(0,12,0);
    glVertex3f(1,10,0);
    glEnd();
    glPopMatrix();
    //body
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(110,0,110);
    glVertex3f(-1,2,0);
    glVertex3f(-2,13,0);
    glVertex3f(1,10,0);
    glVertex3f(0,2,0);
    glEnd();
    glPopMatrix();
    //hand2
    glPushMatrix();
    glTranslated(-1,11.5,0);
    glRotated(sin(movementY)*10,0,0,1);
    glBegin(GL_POLYGON);
    glColor3ub(200,0,200);
    glVertex3f(0,-12,0);
    glVertex3f(-1,0,0);
    glVertex3f(-.5,1,0);
    glVertex3f(.5,1,0);
    glVertex3f(1,0,0);
    glVertex3f(.5,-12,0);
    glEnd();
    glPopMatrix();
    //Head
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(255,255,155);
    glVertex3f(-1.5,13,0);
    glVertex3f(-2,16,0);
    glVertex3f(0,16,0);
    glVertex3f(-.3,12,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(200,200,100);
    glVertex3f(-1.5,13,0);
    glColor3ub(100,100,50);
    glVertex3f(-1.5,14,0);
    glVertex3f(-.2,13,0);
    glColor3ub(200,200,100);
    glVertex3f(-.3,12,0);
    glEnd();
    glPopMatrix();
    //hair
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(10,25,15);
    glVertex3f(-1.5,13,0);
    glVertex3f(-2,16,0);
    glVertex3f(-1,16,0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(10,25,15);
    glVertex3f(-2.5,16,0);
    glVertex3f(-2,17,0);
    glVertex3f(0,17,0);
    glVertex3f(0,16,0);
    glEnd();
    glPopMatrix();

    glPopMatrix();
}

static void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    backGround();
    glPushMatrix();
    glScaled(3,3,0);
    humanWalk();
    glPopMatrix();

    glutPostRedisplay();
    glutSwapBuffers();
}

static void key(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 1:
        break;
    }

    glutPostRedisplay();
}

static void idle(void)
{
    if(movementY>orthoX/3+10)
        movementY=0;
    movementY+=.005;
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize (orthoX*5, orthoY*4);
    glutInitWindowPosition(10,10);
    glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Sun Flowers");

    glutDisplayFunc(display);
    glutKeyboardFunc(key);
    glutIdleFunc(idle);

    glClearColor(1,1,1,1);
    glOrtho(0, orthoX, 0, orthoY, -10.0, 10.0);
    glutMainLoop();

    return EXIT_SUCCESS;
}
