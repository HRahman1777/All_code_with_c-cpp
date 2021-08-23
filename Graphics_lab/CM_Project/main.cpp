#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#define PI 3.14159265358979323846

/// ====    ANIMATION PART START  =========
static float	txCloud=0, txCar3=0, txCar2=0, txPlane=0;

void objMove()
{
    txCar3 -= 0.007;
    txCar2 -=0.005;
    txCloud +=0.0035;
    txPlane +=0.02;

    if(txCar3<=-155)
    {
        txCar3=25;
    }

    if(txCar2<=-50)
    {
        txCar2=140;
    }

    if(txPlane>=140)
    {
        txPlane=-55;
    }

    if(txCloud>=155)
    {
        txCloud=-130;
    }

    glutPostRedisplay();
}


void object_control(unsigned char key, int x, int y)
{
    //printf("%d", key);
    switch(key)
    {
    case 109:
        glutIdleFunc(objMove);
        break;
    case 115:
        glutIdleFunc(NULL);
        break;
    }
}

// ====    ANIMATION PART END  =========


void circleSolid(float x, float y, float radius) ///   for BUS's tier and flag's circle and flowers
{
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    glBegin(GL_TRIANGLE_FAN);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(x + (radius * cos(i *  twicePi / triangleAmount)), y + (radius * sin(i * twicePi / triangleAmount)));
    }
    glEnd();
}

void plane()
{
    glPushMatrix();
    glTranslatef(txPlane, 0, 0);

    glBegin(GL_QUADS);//main body
    glColor3ub(0,153,76);
    glVertex3i(8,109,0);
    glVertex3i(17,109,0);
    glVertex3i(17,114,0);
    glVertex3i(8,112,0);
    glEnd();

    glBegin(GL_LINES);//back flag line
    glColor3ub(0,0,0);
    glVertex3i(8,112,0);
    glVertex3i(3,115,0);
    glEnd();
    glBegin(GL_LINES);//back flag line 2
    glColor3ub(0,0,0);
    glVertex3i(8,109,0);
    glVertex3i(3,106,0);
    glEnd();
    glBegin(GL_QUADS);//back flag up
    glColor3ub(0,102,0);
    glVertex3i(3,115,0);
    glVertex3i(-9,115,0);
    glVertex3i(-8,109,0);
    glVertex3i(2,109,0);
    glEnd();

    glBegin(GL_QUADS);//back flag down
    glColor3ub(0,102,0);
    glVertex3i(2,109,0);
    glVertex3i(-8,109,0);
    glVertex3i(-9,106,0);
    glVertex3i(3,106,0);
    glEnd();

    glBegin(GL_TRIANGLES);//front tri
    glColor3ub(0,153,76);
    glVertex3i(17,109,0);
    glVertex3i(19,109,0);
    glVertex3i(17,114,0);
    glEnd();
    glBegin(GL_TRIANGLES);//front tri
    glColor3ub(255,255,72);
    glVertex3i(17,111,0);
    glVertex3i(18,111,0);
    glVertex3i(17,114,0);
    glEnd();


    glBegin(GL_LINES);//side line
    glColor3ub(158,175,202);
    glVertex3i(8,110,0);
    glVertex3i(19,110,0);
    glEnd();

    glBegin(GL_QUADS);//back wing
    glColor3ub(0,153,76);
    glVertex3i(8,112,0);
    glVertex3i(10,112,0);
    glVertex3i(6,110,0);
    glVertex3i(8,110,0);
    glEnd();

    glBegin(GL_QUADS);//back wing up
    glColor3ub(0,153,76);
    glVertex3i(6,115,0);
    glVertex3i(8,115,0);
    glVertex3i(8,112,0);
    glVertex3i(10,112,0);
    glEnd();

    //red circle

    glColor3ub(255,0,0);
    circleSolid(-3,111,2); // back wheels big circle
    circleSolid(-3,111,2);//front wheels big circle

    glPopMatrix();
}

void innovationLab()
{
    glBegin(GL_QUADS);//shade grey
    glColor3ub(96,96,96);
    glVertex3i(-21,40,0);
    glVertex3i(-6,40,0);
    glVertex3i(-6,46,0);
    glVertex3i(-21,46,0);
    glEnd();

    glBegin(GL_QUADS);//shade grey+green 1
    glColor3ub(0,204,0);
    glVertex3i(-23,40,0);
    glVertex3i(-21,40,0);
    glVertex3i(-21,46,0);
    glVertex3i(-23,46,0);
    glEnd();

    glBegin(GL_QUADS);//shade grey+green 2
    glColor3ub(0,204,0);
    glVertex3f(-6.5,40,0);
    glVertex3f(-4.5,40,0);
    glVertex3f(-4.5,46,0);
    glVertex3f(-6.5,46,0);
    glEnd();


    glBegin(GL_QUADS);//green rectangle 1
    glColor3ub(0,204,0);
    glVertex3i(-7,40,0);
    glVertex3i(-9,40,0);
    glVertex3i(-9,43,0);
    glVertex3i(-7,43,0);
    glEnd();

    glBegin(GL_QUADS);//green rectangle 2
    glColor3ub(0,204,0);
    glVertex3i(-11,46,0);
    glVertex3i(-9,46,0);
    glVertex3i(-9,43,0);
    glVertex3i(-11,43,0);
    glEnd();

    glBegin(GL_QUADS);//green rectangle 3
    glColor3ub(0,204,0);
    glVertex3i(-11,40,0);
    glVertex3i(-13,40,0);
    glVertex3i(-13,43,0);
    glVertex3i(-11,43,0);
    glEnd();

    glBegin(GL_QUADS);//green rectangle 4
    glColor3ub(0,204,0);
    glVertex3i(-15,46,0);
    glVertex3i(-13,46,0);
    glVertex3i(-13,43,0);
    glVertex3i(-15,43,0);
    glEnd();

    glBegin(GL_QUADS);//green rectangle 5
    glColor3ub(0,204,0);
    glVertex3i(-15,40,0);
    glVertex3i(-17,40,0);
    glVertex3i(-17,43,0);
    glVertex3i(-15,43,0);
    glEnd();

    glBegin(GL_QUADS);//green rectangle 6
    glColor3ub(0,204,0);
    glVertex3i(-19,46,0);
    glVertex3i(-17,46,0);
    glVertex3i(-17,43,0);
    glVertex3i(-19,43,0);
    glEnd();
    glBegin(GL_QUADS);//green rectangle 7
    glColor3ub(0,204,0);
    glVertex3i(-19,40,0);
    glVertex3i(-21,40,0);
    glVertex3i(-21,43,0);
    glVertex3i(-19,43,0);
    glEnd();



    glBegin(GL_LINES);//horizontal shade
    glColor3ub(0,0,0);
    glVertex3i(-23,43,0);
    glVertex3f(-4.5,43,0);
    glEnd();

    glBegin(GL_LINES);//horiz line 1
    glColor3ub(0,0,0);
    glVertex3i(-23,40,0);
    glVertex3f(-4.5,40,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 2
    glColor3ub(0,0,0);
    glVertex3i(-23,46,0);
    glVertex3f(-4.5,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 3
    glColor3ub(0,0,0);
    glVertex3i(-23,40,0);
    glVertex3i(-23,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 4
    glColor3ub(0,0,0);
    glVertex3i(-21,40,0);
    glVertex3i(-21,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 5
    glColor3ub(0,0,0);
    glVertex3i(-19,40,0);
    glVertex3i(-19,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 6
    glColor3ub(0,0,0);
    glVertex3i(-17,40,0);
    glVertex3i(-17,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 7
    glColor3ub(0,0,0);
    glVertex3i(-15,40,0);
    glVertex3i(-15,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 8
    glColor3ub(0,0,0);
    glVertex3i(-13,40,0);
    glVertex3i(-13,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 9
    glColor3ub(0,0,0);
    glVertex3i(-11,40,0);
    glVertex3i(-11,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 10
    glColor3ub(0,0,0);
    glVertex3i(-9,40,0);
    glVertex3i(-9,46,0);
    glEnd();

    glBegin(GL_LINES);//horizontal line 11
    glColor3ub(0,0,0);
    glVertex3i(-7,40,0);
    glVertex3i(-7,46,0);
    glEnd();


    glBegin(GL_LINES);//horizontal line 12
    glColor3ub(0,0,0);
    glVertex3i(-5,40,0);
    glVertex3i(-5,46,0);
    glEnd();



    glBegin(GL_QUADS);//body building up part
    glColor3ub(192,192,192);
    glVertex3i(-22,32,0);
    glVertex3f(-5.5,32,0);
    glVertex3f(-5.5,40,0);
    glVertex3i(-22,40,0);
    glEnd();

    glBegin(GL_LINES);//body building up part line 1
    glColor3ub(0,0,0);
    glVertex3i(-22,32,0);
    glVertex3i(-22,40,0);
    glEnd();

    glBegin(GL_LINES);//body building up part line 2
    glColor3ub(0,0,0);
    glVertex3f(-5.5,32,0);
    glVertex3f(-5.5,40,0);
    glEnd();

    glBegin(GL_LINES);//body building up part line 3
    glColor3ub(255,255,255);
    glVertex3f(-13.5,32,0);
    glVertex3f(-13.5,40,0);
    glEnd();

    glBegin(GL_LINES);//body building up part line 4
    glColor3ub(255,255,255);
    glVertex3f(-17.75,32,0);
    glVertex3f(-17.75,40,0);
    glEnd();

    glBegin(GL_LINES);//body building up part line 5
    glColor3ub(255,255,255);
    glVertex3f(-9.25,32,0);
    glVertex3f(-9.25,40,0);
    glEnd();




    glBegin(GL_QUADS);//body building 2
    glColor3ub(204,0,0);
    glVertex3f(-22.5,25,0);
    glVertex3i(-5,25,0);
    glVertex3i(-5,32,0);
    glVertex3f(-22.5,32,0);
    glEnd();
//left door//
    glBegin(GL_QUADS); //main door
    glColor3ub(0,153,153);
    glVertex3f(-19, 25, 0);
    glVertex3f(-16, 25, 0);
    glVertex3f(-16, 33, 0);
    glVertex3f(-19, 33, 0);
    glEnd();
    glBegin(GL_LINES); //main door line 1
    glColor3ub(0,0,0);
    glVertex3f(-19, 25, 0);
    glVertex3f(-16, 25, 0);
    glEnd();
    glBegin(GL_LINES); //main door line 2
    glColor3ub(0,0,0);
    glVertex3f(-16, 25, 0);
    glVertex3f(-16, 33, 0);
    glEnd();
    glBegin(GL_LINES); //main doorline 3
    glColor3ub(0,0,0);
    glVertex3f(-16, 33, 0);
    glVertex3f(-19, 33, 0);
    glEnd();
    glBegin(GL_LINES); //main doorline 4
    glColor3ub(0,0,0);
    glVertex3f(-19, 25, 0);
    glVertex3f(-19, 33, 0);
    glEnd();

    glBegin(GL_LINES); //main doorline 5
    glColor3ub(0,0,0);
    glVertex3f(-17.5, 25, 0);
    glVertex3f(-17.5, 33, 0);
    glEnd();

    //right door//

    glBegin(GL_QUADS); //main door
    glColor3ub(0,153,153);
    glVertex3f(-11, 25, 0);
    glVertex3f(-8, 25, 0);
    glVertex3f(-8, 33, 0);
    glVertex3f(-11, 33, 0);
    glEnd();
    glBegin(GL_LINES); //main door line 1
    glColor3ub(0,0,0);
    glVertex3f(-11, 25, 0);
    glVertex3f(-8, 25, 0);
    glEnd();
    glBegin(GL_LINES); //main door line 2
    glColor3ub(0,0,0);
    glVertex3f(-8, 25, 0);
    glVertex3f(-8, 33, 0);
    glEnd();
    glBegin(GL_LINES); //main doorline 3
    glColor3ub(0,0,0);
    glVertex3f(-8, 33, 0);
    glVertex3f(-11, 33, 0);
    glEnd();
    glBegin(GL_LINES); //main doorline 4
    glColor3ub(0,0,0);
    glVertex3f(-11, 25, 0);
    glVertex3f(-11, 33, 0);
    glEnd();

    glBegin(GL_LINES); //main doorline 5
    glColor3ub(0,0,0);
    glVertex3f(-9.5, 25, 0);
    glVertex3f(-9.5, 33, 0);
    glEnd();

}


void guardroom()
{
    glBegin(GL_QUADS); //guard room base
    glColor3ub(192,192,192);
    glVertex3i(38, 25, 0);
    glVertex3i(44, 25, 0);
    glVertex3i(44, 35, 0);
    glVertex3i(38, 35, 0);
    glEnd();

    glBegin(GL_QUADS); //guard room window base
    glColor3ub(0,0,0);
    glVertex3i(39, 32, 0);
    glVertex3i(43, 32, 0);
    glVertex3i(43, 34, 0);
    glVertex3i(39, 34, 0);
    glEnd();

    glBegin(GL_QUADS); //guard room window base 2
    glColor3ub(255,204,255);
    glVertex3i(40, 33, 0);
    glVertex3i(42, 33, 0);
    glVertex3i(42, 34, 0);
    glVertex3i(40, 34, 0);
    glEnd();

    glBegin(GL_QUADS); //guard room window base 3
    glColor3ub(0,153,153);
    glVertex3i(40, 27, 0);
    glVertex3i(42, 27, 0);
    glVertex3i(42, 31, 0);
    glVertex3i(40, 31, 0);
    glEnd();

    glBegin(GL_LINES); //window line 1
    glColor3ub(0,0,0);
    glVertex3i(40, 27, 0);
    glVertex3i(42, 27, 0);
    glEnd();
    glBegin(GL_LINES); //window line 2
    glColor3ub(0,0,0);
    glVertex3i(42, 27, 0);
    glVertex3i(42, 31, 0);
    glEnd();
    glBegin(GL_LINES); //window line 3
    glColor3ub(0,0,0);
    glVertex3i(42, 31, 0);
    glVertex3i(40, 31, 0);
    glEnd();
    glBegin(GL_LINES); //window line 4
    glColor3ub(0,0,0);
    glVertex3i(40, 31, 0);
    glVertex3i(40, 27, 0);
    glEnd();
    glBegin(GL_LINES); //window line 5
    glColor3ub(0,0,0);
    glVertex3i(41, 27, 0);
    glVertex3i(41, 31, 0);
    glEnd();

}


void human4()
{
    glBegin(GL_TRIANGLES);//1
    glColor3ub(0, 0, 0);
    glVertex3f (-5.5, 22, 0);
    glVertex3f (-5.5, 23, 0);
    glVertex3i (-5, 23, 0);
    glEnd();

    glBegin(GL_QUADS);//2
    glColor3ub(0, 0, 51);
    glVertex3i (-5, 23, 0);
    glVertex3f (-5.5, 23, 0);
    glVertex3f (-6.5, 24, 0);
    glVertex3i (-6, 24, 0);
    glEnd();

    glBegin(GL_QUADS);//3
    glColor3ub(0, 0, 51);
    glVertex3i (-6, 24, 0);
    glVertex3f (-6.5, 24, 0);
    glVertex3f (-6.5, 26.5, 0);
    glVertex3f (-6, 26.5, 0);
    glEnd();

    glBegin(GL_QUADS);//4
    glColor3ub(0, 0, 51);
    glVertex3f (-6.5, 26, 0);
    glVertex3f (-7, 26, 0);
    glVertex3f (-7, 27, 0);
    glVertex3f (-6.5, 27, 0);
    glEnd();

    glBegin(GL_QUADS);//5
    glColor3ub(0, 0, 51);
    glVertex3f (-7, 25, 0);
    glVertex3f (-7.5, 25, 0);
    glVertex3f (-6.9, 27, 0);
    glVertex3f (-6.5, 27, 0);
    glEnd();

    glBegin(GL_QUADS);//6
    glColor3ub(0, 0, 51);
    glVertex3f (-7, 22, 0);
    glVertex3f (-7.4, 23, 0);
    glVertex3f (-7.4, 25, 0);
    glVertex3f (-7, 25, 0);
    glEnd();

    glBegin(GL_TRIANGLES);//7
    glColor3ub(0, 0, 0);
    glVertex3i (-7, 22, 0);
    glVertex3i (-8, 22, 0);
    glVertex3i (-7.5, 23, 0);
    glEnd();

    glBegin(GL_QUADS);//8
    glColor3ub(0, 51, 51);
    glVertex3f (-5, 26, 0);
    glVertex3f (-5.5, 26, 0);
    glVertex3f (-6, 28, 0);
    glVertex3i (-6, 29, 0);
    glEnd();

    glBegin(GL_QUADS);//9
    glColor3ub(0, 51, 51);
    glVertex3i (-6, 26, 0);
    glVertex3f (-7, 26, 0);
    glVertex3f (-7, 29, 0);
    glVertex3i (-6, 30, 0);
    glEnd();

    glBegin(GL_QUADS);//10
    glColor3ub(0, 51, 51);
    glVertex3i (-7, 28, 0);
    glVertex3f (-7.5, 27, 0);
    glVertex3f (-7.5, 28, 0);
    glVertex3i (-7, 29, 0);
    glEnd();

    glBegin(GL_QUADS);//11
    glColor3ub(0, 51, 51);
    glVertex3f (-7.5, 27, 0);
    glVertex3f (-8, 28, 0);
    glVertex3f (-8, 29, 0);
    glVertex3f (-7.5, 28, 0);
    glEnd();

    glBegin(GL_POLYGON); //face
    glColor3ub(204, 204, 0);
    glVertex3f(-6.2, 30, 0);
    glVertex3f(-6.7, 30, 0);
    glVertex3f(-6.7, 30.5, 0);
    glVertex3f(-6.8, 31, 0);
    glVertex3f(-6.7, 31.7, 0);
    glVertex3f(-6.3, 32, 0);
    glVertex3f(-6, 31.8, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(204, 204, 0);
    glVertex3f(-6.4, 29, 0);
    glVertex3f(-6.4, 31, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(204, 204, 0);
    glVertex3f(-6.3, 29, 0);
    glVertex3f(-6.3, 31, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(204, 204, 0);
    glVertex3f(-6.5, 29, 0);
    glVertex3f(-6.5, 31, 0);
    glEnd();

}

void humanDy(float x, float y, int bA, int bB, int bC)
{
    glBegin(GL_TRIANGLES);//1
    glColor3ub(0, 0, 0);
    glVertex3f (x+.5, y, 0); // x = 55 ,,y =22 init
    glVertex3f (x+.5, y+1, 0);
    glVertex3i (x, y+1, 0);
    glEnd();

    glBegin(GL_QUADS);//2
    glColor3ub(0, 0, 51);
    glVertex3i (x, y+1, 0);
    glVertex3f (x+.5, y+1, 0);
    glVertex3f (x+1.5, y+2, 0);
    glVertex3i (x+1, y+2, 0);
    glEnd();

    glBegin(GL_QUADS);//3
    glColor3ub(0, 0, 51);
    glVertex3i (x+1, y+2, 0);
    glVertex3f (x+1.5, y+2, 0);
    glVertex3f (x+1.5, y+4.5, 0);
    glVertex3f (x+1, y+4.5, 0);
    glEnd();

    glBegin(GL_QUADS);//4
    glColor3ub(0, 0, 51);
    glVertex3f (x+1.5, y+4, 0);
    glVertex3f (x+2, y+4, 0);
    glVertex3f (x+2, y+5, 0);
    glVertex3f (x+1.5, y+5, 0);
    glEnd();

    glBegin(GL_QUADS);//5
    glColor3ub(0, 0, 51);
    glVertex3f (x+2, y+3, 0);
    glVertex3f (x+2.5, y+3, 0);
    glVertex3f (x+1.9, y+5, 0);
    glVertex3f (x+1.5, y+5, 0);
    glEnd();

    glBegin(GL_QUADS);//6
    glColor3ub(0, 0, 51);
    glVertex3f (x+2, y, 0);
    glVertex3f (x+2.4, y+1, 0);
    glVertex3f (x+2.4, y+3, 0);
    glVertex3f (x+2, y+3, 0);
    glEnd();

    glBegin(GL_TRIANGLES);//7
    glColor3ub(0, 0, 0);
    glVertex3i (x+2, y, 0);
    glVertex3i (x+3, y, 0);
    glVertex3i (x+2.5, y+1, 0);
    glEnd();

    glBegin(GL_QUADS);//8
    glColor3ub(bA, bB, bC);
    glVertex3f (x, y+4, 0);
    glVertex3f (x+.5, y+4, 0);
    glVertex3f (x+1, y+6, 0);
    glVertex3i (x+1, y+7, 0);
    glEnd();

    glBegin(GL_QUADS);//9
    glColor3ub(bA, bB, bC);
    glVertex3i (x+1, y+4, 0);
    glVertex3f (x+2, y+4, 0);
    glVertex3f (x+2, y+7, 0);
    glVertex3i (x+1, y+8, 0);
    glEnd();

    glBegin(GL_QUADS);//10
    glColor3ub(bA, bB, bC);
    glVertex3i (x+2, y+6, 0);
    glVertex3f (x+2.5, y+5, 0);
    glVertex3f (x+2.5, y+6, 0);
    glVertex3i (x+2, y+7, 0);
    glEnd();

    glBegin(GL_QUADS);//11
    glColor3ub(bA, bB, bC);
    glVertex3f (x+2.5, y+5, 0);
    glVertex3f (x+2, y+6, 0);
    glVertex3f (x+2, y+7, 0);
    glVertex3f (x+2.5, y+6, 0);
    glEnd();

    glBegin(GL_POLYGON); //face
    glColor3ub(255, 178, 102);
    glVertex3f(x+1.2, y+8, 0);
    glVertex3f(x+1.7, y+8, 0);
    glVertex3f(x+1.7, y+8.5, 0);
    glVertex3f(x+1.8, y+9, 0);
    glVertex3f(x+1.7, y+9.7, 0);
    glVertex3f(x+1.3, y+10, 0);
    glVertex3f(x+1, y+9.8, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 178, 102);
    glVertex3f(x+1.4, y+7, 0);
    glVertex3f(x+1.4, y+9, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 178, 102);
    glVertex3f(x+1.3, y+7, 0);
    glVertex3f(x+1.3, y+9, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 178, 102);
    glVertex3f(x+1.5, y+7, 0);
    glVertex3f(x+1.5, y+9, 0);
    glEnd();

}


void human()
{

    glBegin(GL_TRIANGLES);//1
    glColor3ub(0, 0, 0);
    glVertex3f (27.5, 22, 0);
    glVertex3f (27.5, 23, 0);
    glVertex3i (27, 23, 0);
    glEnd();

    glBegin(GL_QUADS);//2
    glColor3ub(0, 0, 51);
    glVertex3i (27, 23, 0);
    glVertex3f (27.5, 23, 0);
    glVertex3f (28.5, 24, 0);
    glVertex3i (28, 24, 0);
    glEnd();

    glBegin(GL_QUADS);//3
    glColor3ub(0, 0, 51);
    glVertex3i (28, 24, 0);
    glVertex3f (28.5, 24, 0);
    glVertex3f (28.5, 26.5, 0);
    glVertex3f (28, 26.5, 0);
    glEnd();

    glBegin(GL_QUADS);//4
    glColor3ub(0, 0, 51);
    glVertex3f (28.5, 26, 0);
    glVertex3f (29, 26, 0);
    glVertex3f (29, 27, 0);
    glVertex3f (28.5, 27, 0);
    glEnd();

    glBegin(GL_QUADS);//5
    glColor3ub(0, 0, 51);
    glVertex3f (29, 25, 0);
    glVertex3f (29.5, 25, 0);
    glVertex3f (28.9, 27, 0);
    glVertex3f (28.5, 27, 0);
    glEnd();

    glBegin(GL_QUADS);//6
    glColor3ub(0, 0, 51);
    glVertex3f (29, 22, 0);
    glVertex3f (29.4, 23, 0);
    glVertex3f (29.4, 25, 0);
    glVertex3f (29, 25, 0);
    glEnd();

    glBegin(GL_TRIANGLES);//7
    glColor3ub(0, 0, 0);
    glVertex3i (29, 22, 0);
    glVertex3i (30, 22, 0);
    glVertex3i (29.5, 23, 0);
    glEnd();

    glBegin(GL_QUADS);//8
    glColor3ub(0, 51, 51);
    glVertex3f (27, 26, 0);
    glVertex3f (27.5, 26, 0);
    glVertex3f (28, 28, 0);
    glVertex3i (28, 29, 0);
    glEnd();

    glBegin(GL_QUADS);//9
    glColor3ub(0, 51, 51);
    glVertex3i (28, 26, 0);
    glVertex3f (29, 26, 0);
    glVertex3f (29, 29, 0);
    glVertex3i (28, 30, 0);
    glEnd();

    glBegin(GL_QUADS);//10
    glColor3ub(0, 51, 51);
    glVertex3i (29, 28, 0);
    glVertex3f (29.5, 27, 0);
    glVertex3f (29.5, 28, 0);
    glVertex3i (29, 29, 0);
    glEnd();

    glBegin(GL_QUADS);//11
    glColor3ub(0, 51, 51);
    glVertex3f (29.5, 27, 0);
    glVertex3f (30, 28, 0);
    glVertex3f (30, 29, 0);
    glVertex3f (29.5, 28, 0);
    glEnd();

    glBegin(GL_POLYGON); //face
    glColor3ub(204, 204, 0);
    glVertex3f(28.2, 30, 0);
    glVertex3f(28.7, 30, 0);
    glVertex3f(28.7, 30.5, 0);
    glVertex3f(28.8, 31, 0);
    glVertex3f(28.7, 31.7, 0);
    glVertex3f(28.3, 32, 0);
    glVertex3f(28, 31.8, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(204, 204, 0);
    glVertex3f(28.4, 29, 0);
    glVertex3f(28.4, 31, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(204, 204, 0);
    glVertex3f(28.3, 29, 0);
    glVertex3f(28.3, 31, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(204, 204, 0);
    glVertex3f(28.5, 29, 0);
    glVertex3f(28.5, 31, 0);
    glEnd();

}


void mediumTree2()
{
    glBegin(GL_POLYGON); //
    glColor3ub(0, 102, 0);
    glVertex3i(109, 29, 0);//1
    glVertex3i(112, 29, 0);
    glVertex3i(110, 30, 0);
    glVertex3i(112, 31, 0);
    glVertex3i(114, 29, 0); //5
    glVertex3i(115, 31, 0);
    glVertex3i(116, 33, 0);
    glVertex3i(114, 33, 0);
    glVertex3i(113, 35, 0);
    glVertex3i(111, 34, 0); //10
    glVertex3i(108, 35, 0);
    glVertex3i(106, 34, 0);
    glVertex3i(103, 33, 0);
    glVertex3i(101, 30, 0);
    glVertex3i(103, 28, 0); //15
    glVertex3i(105, 29, 0);
    glVertex3i(108, 29, 0);
    glEnd();

    glBegin(GL_QUADS); //
    glColor3ub(51, 0, 0);
    glVertex3i (108, 25, 0);
    glVertex3f (108.5, 25, 0);
    glVertex3f (108.5, 30, 0);
    glVertex3i (108, 30, 0);
    glEnd();

    glBegin(GL_LINES); //
    glColor3ub(51, 0, 0);
    glVertex3f(108, 30, 0);
    glVertex3f(104, 32, 0);
    glEnd();

    glBegin(GL_LINES); //
    glColor3ub(51, 0, 0);
    glVertex3f(108, 30, 0);
    glVertex3f(113, 32, 0);
    glEnd();

    glBegin(GL_LINES); //
    glColor3ub(51, 0, 0);
    glVertex3f(108, 30, 0);
    glVertex3f(109, 33, 0);
    glEnd();

    glBegin(GL_LINES); //
    glColor3ub(51, 0, 0);
    glVertex3f(108, 30, 0);
    glVertex3f(107, 32, 0);
    glEnd();

}


void mediumTree()
{
    glBegin(GL_POLYGON); //
    glColor3ub(0, 153, 0);
    glVertex3i(45, 34, 0);//1
    glVertex3i(48, 34, 0);
    glVertex3i(46, 35, 0);
    glVertex3i(48, 36, 0);
    glVertex3i(50, 34, 0); //5
    glVertex3i(51, 36, 0);
    glVertex3i(52, 38, 0);
    glVertex3i(50, 38, 0);
    glVertex3i(49, 40, 0);
    glVertex3i(47, 39, 0); //10
    glVertex3i(44, 40, 0);
    glVertex3i(42, 39, 0);
    glVertex3i(39, 38, 0);
    glVertex3i(37, 35, 0);
    glVertex3i(39, 33, 0); //15
    glVertex3i(41, 34, 0);
    glVertex3i(44, 34, 0);
    glEnd();

    glBegin(GL_QUADS); //
    glColor3ub(51, 0, 0);
    glVertex3i (44, 32, 0);
    glVertex3f (44.5, 32, 0);
    glVertex3f (44.5, 35, 0);
    glVertex3i (44, 35, 0);
    glEnd();

    glBegin(GL_LINES); //
    glColor3ub(51, 0, 0);
    glVertex3f(44, 35, 0);
    glVertex3f(40, 37, 0);
    glEnd();

    glBegin(GL_LINES); //
    glColor3ub(51, 0, 0);
    glVertex3f(44, 35, 0);
    glVertex3f(49, 37, 0);
    glEnd();

    glBegin(GL_LINES); //
    glColor3ub(51, 0, 0);
    glVertex3f(44, 35, 0);
    glVertex3f(45, 38, 0);
    glEnd();

    glBegin(GL_LINES); //
    glColor3ub(51, 0, 0);
    glVertex3f(44, 35, 0);
    glVertex3f(43, 37, 0);
    glEnd();

    glColor3ub(255,0,0);
    circleSolid(42,38,0.25);
    circleSolid(41,37,0.25);
    circleSolid(40,38,0.25);
    circleSolid(39,36,0.25);
    circleSolid(40,36,0.25);
    circleSolid(42,36,0.25);
    circleSolid(43,36,0.25);
    circleSolid(43,38,0.25);
    circleSolid(44,39,0.25);
    circleSolid(45,39,0.25);
    circleSolid(44,38,0.25);
    circleSolid(44,36,0.25);
    circleSolid(44,35,0.25);
    circleSolid(46,35,0.25);
    circleSolid(47,35,0.25);
    circleSolid(48,36,0.25);
    circleSolid(49,35,0.25);
    circleSolid(50,36,0.25);
    circleSolid(51,37,0.25);
    circleSolid(49,37,0.25);
    circleSolid(48,38,0.25);
    circleSolid(47,38,0.25);
    circleSolid(49,39,0.25);
    circleSolid(44,38,0.25);
    circleSolid(45,36,0.25);
    circleSolid(44,35,0.25);
    circleSolid(47,35,0.25);
    circleSolid(46,38,0.25);



}

void bushGrass(int x, int y)
{
    glBegin(GL_POLYGON); //
    glColor3ub(0, 102, 0);
    glVertex3i(x, y, 0);//1  // init 66, 22 x, y
    glVertex3i(x+1, y-1, 0);
    glVertex3i(x+2, y+1, 0);
    glVertex3i(x+2, y+3, 0);
    glVertex3i(x+1, y+4, 0); //5
    glVertex3i(x+1, y+5, 0);
    glVertex3i(x-2, y+5, 0);
    glVertex3i(x-3, y+4, 0);
    glVertex3i(x-4, y+3, 0);
    glVertex3i(x-4, y+1, 0);//10
    glVertex3i(x-3, y-1, 0);
    glVertex3i(x-3, y, 0);
    glVertex3i(x-1, y+3, 0);
    glEnd();

    glBegin(GL_LINES);   // init 66, 22 x, y
    glColor3ub(51, 25, 0);
    glVertex3f(x-1, y-2, 0);
    glVertex3f(x-1, y+2, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(51, 25, 0);
    glVertex3f(x-1, y-2, 0);
    glVertex3f(x-3, y+1, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(51, 25, 0);
    glVertex3f(x-1, y-2, 0);
    glVertex3f(x+1, y+1, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(51, 25, 0);
    glVertex3f(x-1, y-2, 0);
    glVertex3f(x-2, y+1, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(51, 25, 0);
    glVertex3f(x-1, y-2, 0);
    glVertex3f(x, y+1, 0);
    glEnd();
}

void grass(float x, float y)
{
    glBegin(GL_LINES); //
    glColor3ub(0, 102, 0);
    glVertex3f(x, y, 0); // 5, 20  initial
    glVertex3f(x, y+3, 0);
    glEnd();

    glBegin(GL_LINES); //
    glColor3ub(0, 102, 0);
    glVertex3f(x, y, 0);
    glVertex3f(x-1.5, y+2, 0);
    glEnd();

    glBegin(GL_LINES); //
    glColor3ub(0, 102, 0);
    glVertex3f(x, y, 0);
    glVertex3f(x+1.5, y+2, 0);
    glEnd();

    glBegin(GL_LINES); //
    glColor3ub(0, 102, 0);
    glVertex3f(x, y, 0);
    glVertex3f(x-0.5, y+2, 0);
    glEnd();

    glBegin(GL_LINES); //
    glColor3ub(0, 102, 0);
    glVertex3f(x, y, 0);
    glVertex3f(x+0.5, y+2, 0);
    glEnd();
}

void bigTree()
{
    glBegin(GL_POLYGON); //
    glColor3ub(0, 102, 0);
    glVertex3i(37, 30, 0);//1
    glVertex3i(39, 31, 0);
    glVertex3i(40, 33, 0);
    glVertex3i(39, 33, 0);
    glVertex3i(41, 35, 0);//5
    glVertex3i(43, 33, 0);
    glVertex3i(43, 35, 0);
    glVertex3i(44, 35, 0);
    glVertex3i(42, 37, 0);
    glVertex3i(43, 41, 0);//10
    glVertex3i(41, 42, 0);
    glVertex3i(38, 41, 0);
    glVertex3i(37, 43, 0);
    glVertex3i(34, 42, 0);
    glVertex3i(31, 43, 0);//15
    glVertex3i(28, 37, 0);
    glVertex3i(28, 35, 0);
    glVertex3i(27, 36, 0);
    glVertex3i(28, 31, 0);
    glVertex3i(32, 33, 0);//20
    glVertex3i(33, 32, 0);
    glEnd();

    glBegin(GL_QUADS); // left
    glColor3ub(51, 0, 0);
    glVertex3i (30, 25, 0);
    glVertex3f (30.5, 25, 0);
    glVertex3f (30.5, 33, 0);
    glVertex3i (30, 33, 0);
    glEnd();

    glBegin(GL_QUADS); // middle
    glColor3ub(51, 0, 0);
    glVertex3i (34, 25, 0);
    glVertex3f (34.5, 25, 0);
    glVertex3f (34.5, 34, 0);
    glVertex3i (34, 34, 0);
    glEnd();

    glBegin(GL_QUADS); // right
    glColor3ub(51, 0, 0);
    glVertex3i (36, 25, 0);
    glVertex3f (36.5, 25, 0);
    glVertex3f (36.5, 34, 0);
    glVertex3i (36, 34, 0);
    glEnd();


    glBegin(GL_LINES); // left l
    glColor3ub(51, 0, 0);
    glVertex3f(36.5, 31, 0);
    glVertex3f(40, 34, 0);
    glEnd();

    glBegin(GL_LINES); // left l
    glColor3ub(51, 0, 0);
    glVertex3f(36, 31, 0);
    glVertex3f(35.5, 33, 0);
    glEnd();

    glBegin(GL_LINES); // middle l
    glColor3ub(51, 0, 0);
    glVertex3f(34.5, 33, 0);
    glVertex3f(36, 35.5, 0);
    glEnd();

    glBegin(GL_LINES); // middle l
    glColor3ub(51, 0, 0);
    glVertex3f(34, 32, 0);
    glVertex3f(33, 35, 0);
    glEnd();

    glBegin(GL_LINES); // right l
    glColor3ub(51, 0, 0);
    glVertex3f(30.5, 33, 0);
    glVertex3f(32, 34, 0);
    glEnd();

    glBegin(GL_LINES); // right l
    glColor3ub(51, 0, 0);
    glVertex3f(30, 33, 0);
    glVertex3f(29.5, 34.5, 0);
    glEnd();
}

void tree2(int x, int y, int a, int b, int c)
{
    glBegin(GL_QUADS);  //p1
    glColor3ub(51, 0, 0);
    glVertex3i (x, y-10, 0); // -10, 25
    glVertex3i (x+2, y-10, 0);
    glVertex3i (x+2, y+5, 0);
    glVertex3i (x, y+5, 0);
    glEnd();

    glBegin(GL_TRIANGLES); //p2
    glColor3ub(a, b, c);
    glVertex3i(x-5, y+5, 0);
    glVertex3i(x+7, y+5, 0);
    glVertex3i(x+1, y+12, 0);
    glEnd();

    glBegin(GL_TRIANGLES); //p3
    glColor3ub(a, b, c);
    glVertex3i(x-5, y+8, 0);
    glVertex3i(x+7, y+8, 0);
    glVertex3i(x+1, y+15, 0);
    glEnd();

    glBegin(GL_TRIANGLES); //p4
    glColor3ub(a, b, c);
    glVertex3i(x-5, y+11, 0);
    glVertex3i(x+7, y+11, 0);
    glVertex3i(x+1, y+18, 0);
    glEnd();
}

void tree(int x, int y)
{
    glBegin(GL_QUADS);  //p1
    glColor3ub(51, 0, 0);
    glVertex3i (x, y, 0); // -10, 25
    glVertex3i (x+2, y, 0);
    glVertex3i (x+2, y+5, 0);
    glVertex3i (x, y+5, 0);
    glEnd();

    glBegin(GL_TRIANGLES); //p2
    glColor3ub(0, 102, 0);
    glVertex3i(x-5, y+5, 0);
    glVertex3i(x+7, y+5, 0);
    glVertex3i(x+1, y+12, 0);
    glEnd();

    glBegin(GL_TRIANGLES); //p3
    glColor3ub(0, 102, 0);
    glVertex3i(x-5, y+8, 0);
    glVertex3i(x+7, y+8, 0);
    glVertex3i(x+1, y+15, 0);
    glEnd();

    glBegin(GL_TRIANGLES); //p4
    glColor3ub(0, 102, 0);
    glVertex3i(x-5, y+11, 0);
    glVertex3i(x+7, y+11, 0);
    glVertex3i(x+1, y+18, 0);
    glEnd();
}

///======= ======  play ground START  =========
void playGround()
{
    glBegin(GL_QUADS); // main field
    glColor3ub(0, 153, 0);
    glVertex3i (-25, -25, 0);
    glVertex3i (200, -25, 0);
    glVertex3i (200, 20, 0);
    glVertex3i (5, 20, 0);
    glEnd();

    glBegin(GL_LINES); // main field down side line
    glColor3ub(255, 255, 204);
    glVertex3i (-15, -20, 0);
    glVertex3i (117, -20, 0);
    glEnd();

    glBegin(GL_LINES);// main field up side line
    glColor3ub(255,255,204);
    glVertex3i (7, 15, 0);
    glVertex3i (125, 15, 0);
    glEnd();

    glBegin(GL_LINES);// main field left side line
    glColor3ub(255,255,204);
    glVertex3i (-15, -20, 0);
    glVertex3i (7, 15, 0);
    glEnd();


    glBegin(GL_LINES);// main field right side line
    glColor3ub(255,255,204);
    glVertex3i (117, -20, 0);
    glVertex3i (125, 15, 0);
    glEnd();


    glBegin(GL_LINES);// main field middle line
    glColor3ub(255,255,204);
    glVertex3i (51, -20, 0);
    glVertex3i (65, 15, 0);
    glEnd();

    glBegin(GL_LINES);// main field left side D box down line
    glColor3ub(255,255,204);
    glVertex3i (-12, -15, 0);
    glVertex3i (10, -15, 0);
    glEnd();

    glBegin(GL_LINES);// main field left side D box up line
    glColor3ub(255,255,204);
    glVertex3i (4, 10, 0);
    glVertex3i (25, 10, 0);
    glEnd();

    glBegin(GL_LINES);// main field left side D box right line
    glColor3ub(255,255,204);
    glVertex3i (10, -15, 0);
    glVertex3i (25, 10, 0);
    glEnd();

    glBegin(GL_LINES);// main field right side D box up line
    glColor3ub(255,255,204);
    glVertex3i (105, 10, 0);
    glVertex3i (124, 10, 0);
    glEnd();

    glBegin(GL_LINES);// main field right side D box down line
    glColor3ub(255,255,204);
    glVertex3i (97, -15, 0);
    glVertex3i (118, -15, 0);
    glEnd();

    glBegin(GL_LINES);// main field right side D box left line
    glColor3ub(255,255,204);
    glVertex3i (105, 10, 0);
    glVertex3i (97, -15, 0);
    glEnd();

    glBegin(GL_LINES);// main field left side down penalty line
    glColor3ub(255,255,204);
    glVertex3i (-7, -7, 0);
    glVertex3i (-2,-7 , 0);
    glEnd();

    glBegin(GL_LINES);// main field left side up penalty line
    glColor3ub(255,255,204);
    glVertex3i (-2, 1, 0);
    glVertex3i (3,1 , 0);
    glEnd();

    glBegin(GL_LINES);// main field left side right penalty line
    glColor3ub(255,255,204);
    glVertex3i (-2, -7, 0);
    glVertex3i (3,1 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side up penalty box down line
    glColor3ub(255,255,204);
    glVertex3i (116, 1, 0);
    glVertex3i (122, 1, 0);
    glEnd();

    glBegin(GL_LINES);// main field right side down penalty left line
    glColor3ub(255,255,204);
    glVertex3i (114, -7, 0);
    glVertex3i (120, -7, 0);
    glEnd();

    glBegin(GL_LINES);// main field right side left penalty line
    glColor3ub(255,255,204);
    glVertex3i (116, 1, 0);
    glVertex3i (114,-7 , 0);
    glEnd();

    glBegin(GL_LINES);// main field left side down goalpostline
    glColor3ub(255,255,204);
    glVertex3i (-7, -7, 0);
    glVertex3i (-7,-2 , 0);
    glEnd();

    glBegin(GL_LINES);// main field left side up goalpost line
    glColor3ub(255,255,204);
    glVertex3i (-2, 1, 0);
    glVertex3i (-2, 6 , 0);
    glEnd();

    glBegin(GL_LINES);// main field left side  goalpost bar line
    glColor3ub(255,255,204);
    glVertex3i (-7, -2, 0);
    glVertex3i (-2, 6 , 0);
    glEnd();


    glBegin(GL_LINES);// main field left side support goalpost bar line
    glColor3ub(255,255,204);
    glVertex3i (-7, -2, 0);
    glVertex3i (-9, -4 , 0);
    glEnd();


    glBegin(GL_LINES);// main field left side support 2 goalpost bar line
    glColor3ub(255,255,204);
    glVertex3i (-9, -4, 0);
    glVertex3i (-4, 4 , 0);
    glEnd();

    glBegin(GL_LINES);// main field left side support 3 goalpost bar line
    glColor3ub(255,255,204);
    glVertex3i (-4, 4, 0);
    glVertex3i (-2, 6 , 0);
    glEnd();

    glBegin(GL_LINES);// main field left side support 4 goalpost bar line
    glColor3ub(255,255,204);
    glVertex3i (-9, -4, 0);
    glVertex3i (-9, -8 , 0);
    glEnd();

    glBegin(GL_LINES);// main field left side support 5 goalpost bar line
    glColor3ub(255,255,204);
    glVertex3i (-9, -8, 0);
    glVertex3i (-7, -7 , 0);
    glEnd();

    glBegin(GL_LINES);// main field left side net 1 goalpost bar line
    glColor3ub(255,255,204);
    glVertex3i (-9, -7, 0);
    glVertex3i (-7, -6 , 0);
    glEnd();

    glBegin(GL_LINES);// main field left side net 2 goalpost bar line
    glColor3ub(255,255,204);
    glVertex3i (-9, -6, 0);
    glVertex3i (-7, -5 , 0);
    glEnd();

    glBegin(GL_LINES);// main field left side net 3 goalpost bar line
    glColor3ub(255,255,204);
    glVertex3i (-9, -5, 0);
    glVertex3i (-7, -4 , 0);
    glEnd();

    glBegin(GL_LINES);// main field left side net 4 goalpost bar line
    glColor3ub(255,255,204);
    glVertex3i (-9, -4, 0);
    glVertex3i (-7, -3 , 0);
    glEnd();
    glBegin(GL_LINES);// main field left side net 5 goalpost bar line
    glColor3ub(255,255,204);
    glVertex3i (-8, -7, 0);
    glVertex3i (-8, -3 , 0);
    glEnd();

    glBegin(GL_LINES);// main field left side net 6 goalpost bar line
    glColor3ub(255,255,204);
    glVertex3f (-8.5, -8, 0);
    glVertex3f (-8.5, -3 , 0);
    glEnd();

    glBegin(GL_LINES);// main field left side net 7 goalpost bar line
    glColor3ub(255,255,204);
    glVertex3f (-7.5, -7, 0);
    glVertex3f (-7.5, -3 , 0);
    glEnd();


    glBegin(GL_LINES);// main field right side up goalpost down line
    glColor3ub(255,255,204);
    glVertex3i (122, 6, 0);
    glVertex3i (122, 1, 0);
    glEnd();

    glBegin(GL_LINES);// main field right side down goalpost line
    glColor3ub(255,255,204);
    glVertex3i (120, -1, 0);
    glVertex3i (120, -7, 0);
    glEnd();

    glBegin(GL_LINES);// main field right side left goalpost line
    glColor3ub(255,255,204);
    glVertex3i (122, 6, 0);
    glVertex3i (120,-1 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side support 1 goalpost line
    glColor3ub(255,255,204);
    glVertex3i (120, -1, 0);
    glVertex3i (122,-2 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net 1 goalpost line
    glColor3ub(255,255,204);
    glVertex3i (120, 0, 0);
    glVertex3i (122,-1 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net 2 goalpost line
    glColor3ub(255,255,204);
    glVertex3i (120, 1, 0);
    glVertex3i (123,0 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net 3 goalpost line
    glColor3ub(255,255,204);
    glVertex3i (121, 2, 0);
    glVertex3i (123,1 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net 4 goalpost line
    glColor3ub(255,255,204);
    glVertex3i (121, 3, 0);
    glVertex3i (123,2, 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net 5 goalpost line
    glColor3ub(255,255,204);
    glVertex3f (121.5, 4, 0);
    glVertex3f (123.5,3 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net 6 goalpost line
    glColor3ub(255,255,204);
    glVertex3f (121.8, 5, 0);
    glVertex3f (123.8,4 , 0);
    glEnd();


    glBegin(GL_LINES);// main field right side support 2 goalpost line
    glColor3ub(255,255,204);
    glVertex3i (122, 6, 0);
    glVertex3i (124,5 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side support 3 goalpost line
    glColor3ub(255,255,204);
    glVertex3i (122, -2, 0);
    glVertex3i (124,5 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net 1 goalpost line
    glColor3ub(255,255,204);
    glVertex3i (122, -3, 0);
    glVertex3i (124,4 , 0);
    glEnd();



    glBegin(GL_LINES);// main field right side net 2 goalpost line
    glColor3ub(255,255,204);
    glVertex3i (122, -4, 0);
    glVertex3i (124,3 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net 3 goalpost line
    glColor3ub(255,255,204);
    glVertex3i (122, -5, 0);
    glVertex3i (124,2, 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net 4 goalpost line
    glColor3ub(255,255,204);
    glVertex3i (122, -6, 0);
    glVertex3i (124,1 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side support 4 goalpost line
    glColor3ub(255,255,204);
    glVertex3i (122,-2, 0);
    glVertex3i (122,-7 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side support 5 goalpost line
    glColor3ub(255,255,204);
    glVertex3i (124, 5 , 0);
    glVertex3i (124,0 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side support 6 goalpost line
    glColor3ub(255,255,204);
    glVertex3i (124, 0, 0);
    glVertex3i (122,-7 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side support 7 goalpost line
    glColor3ub(255,255,204);
    glVertex3i (122, -7, 0);
    glVertex3i (120,-7 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net goalpost line
    glColor3ub(255,255,204);
    glVertex3i (122, -6, 0);
    glVertex3i (120,-6 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net goalpost line
    glColor3ub(255,255,204);
    glVertex3i (122, -5, 0);
    glVertex3i (120,-5 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net goalpost line
    glColor3ub(255,255,204);
    glVertex3i (122, -4, 0);
    glVertex3i (120,-4 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net goalpost line
    glColor3ub(255,255,204);
    glVertex3i (122, -3, 0);
    glVertex3i (120,-3 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net goalpost line
    glColor3ub(255,255,204);
    glVertex3i (122, -3, 0);
    glVertex3i (120,-2 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net 2 goalpost line
    glColor3ub(255,255,204);
    glVertex3f (121.5, -7, 0);
    glVertex3f (121.5,-2 , 0);
    glEnd();
    glBegin(GL_LINES);// main field right side net 3 goalpost line
    glColor3ub(255,255,204);
    glVertex3f (120.5, -7, 0);
    glVertex3f (120.5,-2 , 0);
    glEnd();

    glBegin(GL_LINES);// main field right side net goalpost line
    glColor3ub(255,255,204);
    glVertex3i (121, -7, 0);
    glVertex3i (121,-2 , 0);
    glEnd();
}
void midCircle()
{
    float theta, x = 58.5, y = -2, r = 6;
    glBegin(GL_LINES);
    for(int i = 0; i < 360; i++)
    {
        theta = i * PI / 180;
        glVertex2f(x + r * cos(theta), y + r * sin(theta));

    }
    glEnd();
}

void LDboxCircle()
{
    float theta, x = 103, y = -2, r = 5;
    glBegin(GL_LINES);
    for(int i = 90; i < 230; i++)
    {
        theta = i * PI / 180;
        glVertex2f(x + r * cos(theta), y + r * sin(theta));

    }
    glEnd();
}

void RDboxCircle()
{
    float theta, x = 18, y = -2, r = 4;
    glBegin(GL_LINES);
    for(int i = -120; i < 65; i++)
    {
        theta = i * PI / 180;
        glVertex2f(x + r * cos(theta), y + r * sin(theta));
    }
    glEnd();
}

//======= ====== play ground END  ============

void drawFiledCircle(float cx, float cy, float r, int num_segments) /// for clouds
{
    glBegin(GL_POLYGON);
    glColor3ub(244, 244, 244);
    for (int ii = 1; ii <= num_segments; ii++)
    {
        float theta = 2.0f * PI * float(ii) / float(num_segments);//get the current angle
        float x = r * cosf(theta); //calculate the x component
        float y = r * sinf(theta); //calculate the y component
        glVertex2f(x + cx, y + cy); //output vertex
    }
    glEnd();
}

void cloud()
{
    glPushMatrix();
    glTranslatef(txCloud, 0, 0);

    //cloud 1
    drawFiledCircle(80, 110, 5, 22);
    drawFiledCircle(85, 110, 5, 22);
    drawFiledCircle(83, 115, 5, 22);

    //cloud2
    drawFiledCircle(100, 130, 5, 22);
    drawFiledCircle(105, 130, 5, 22);
    drawFiledCircle(103, 135, 5, 22);


    //cloud3
    drawFiledCircle(50, 130, 5, 22);
    drawFiledCircle(55, 130, 5, 22);
    drawFiledCircle(53, 135, 5, 22);

    //cloud4
    drawFiledCircle(10, 130, 5, 22);
    drawFiledCircle(15, 130, 5, 22);
    drawFiledCircle(13, 135, 5, 22);

    drawFiledCircle(4, 130, 5, 22);
    drawFiledCircle(9, 130, 5, 22);
    drawFiledCircle(7, 135, 5, 22);

    //cloud5
    drawFiledCircle(-10, 110, 5, 22);
    drawFiledCircle(-5, 110, 5, 22);
    drawFiledCircle(-7, 115, 5, 22);

    glPopMatrix();
}

void car()
{


    glBegin(GL_POLYGON); //bus body
    glColor3ub(0, 204, 0);
    glVertex3i (58, 23, 0);
    glVertex3i (58, 25, 0);
    glVertex3i (78, 23, 0);
    glVertex3i (78, 35, 0);
    glVertex3f (59.5, 35.0, 0);
    glEnd();

    glBegin(GL_POLYGON); //bus body design 1
    glColor3ub(0, 102, 0);
    glVertex3i (64, 25, 0);
    glVertex3i (63, 27, 0);
    glVertex3i (64, 29, 0);
    glVertex3i (66, 29, 0);
    glVertex3i (65, 27, 0);
    glVertex3i (66, 25, 0);
    glEnd();

    glBegin(GL_POLYGON); //bus body design 2
    glColor3ub(0, 102, 0);
    glVertex3i (69, 25, 0);
    glVertex3i (68, 27, 0);
    glVertex3i (69, 29, 0);
    glVertex3i (71, 29, 0);
    glVertex3i (70, 27, 0);
    glVertex3i (71, 25, 0);
    glEnd();

    glBegin(GL_POLYGON); //bus body design 3
    glColor3ub(0, 102, 0);
    glVertex3i (74, 25, 0);
    glVertex3i (73, 27, 0);
    glVertex3i (74, 29, 0);
    glVertex3i (76, 29, 0);
    glVertex3i (75, 27, 0);
    glVertex3i (76, 25, 0);
    glEnd();

    glBegin(GL_QUADS);//bus window
    glColor3ub(224, 224, 224);
    glVertex3i (63, 34, 0);
    glVertex3i (63, 30, 0);
    glVertex3i (77, 30, 0);
    glVertex3i (77, 34, 0);
    glEnd();


    glBegin(GL_QUADS);//front glass
    glColor3ub(224, 224, 224);
    glVertex3f (58.5, 28.0, 0);
    glVertex3i (59, 28, 0);
    glVertex3f (60, 34.5, 0);
    glVertex3f (59.5, 34.5, 0);
    glEnd();

    glBegin(GL_QUADS);//headlight yellow front
    glColor3ub(235, 206, 49);
    glVertex3f (58.2, 26.0, 0.0);
    glVertex3f (59.0, 26.0, 0.0);
    glVertex3i (59, 27, 0);
    glVertex3f (58.4, 27.0, 0);
    glEnd();

    glBegin(GL_QUADS);//headlight red front
    glColor3ub(255, 0, 0);
    glVertex3f (58.0, 25.0, 0.0);
    glVertex3f (59.0, 25.0, 0.0);
    glVertex3i (59, 26, 0);
    glVertex3f (58.4, 26, 0);
    glEnd();

    glBegin(GL_QUADS);//headlight white front
    glColor3ub(255, 255, 255);
    glVertex3f (58.0, 24.0, 0.0);
    glVertex3f (59.0, 24.0, 0.0);
    glVertex3i (59, 25, 0);
    glVertex3i (58, 25, 0);
    glEnd();

    //back
    glBegin(GL_QUADS);//headlight yellow back
    glColor3ub(235, 206, 49);
    glVertex3i (77, 26, 0);
    glVertex3i (78, 26, 0);
    glVertex3i (78, 27, 0);
    glVertex3i (77, 27, 0);
    glEnd();

    glBegin(GL_QUADS);//headlight red back
    glColor3ub(255, 0, 0);
    glVertex3i (77, 25, 0);
    glVertex3i (78, 25, 0);
    glVertex3i (78, 26, 0);
    glVertex3i (77, 26, 0);
    glEnd();

    glBegin(GL_QUADS);//headlight white back
    glColor3ub(255, 255, 255);
    glVertex3f (77, 24, 0);
    glVertex3f (78, 24, 0);
    glVertex3i (78, 25, 0);
    glVertex3i (77, 25, 0);
    glEnd();




    glBegin(GL_QUADS);//bus door
    glColor3ub(224, 224, 224);
    glVertex3i (60, 24, 0);
    glVertex3i (62, 24, 0);
    glVertex3i (62, 31, 0);
    glVertex3i (60, 31, 0);
    glEnd();

    glBegin(GL_LINES);//bus door partition 1
    glColor3ub(0, 0, 0);
    glVertex3i (60, 24, 0);
    glVertex3i (62, 24, 0);
    glEnd();


    glBegin(GL_LINES);//bus door partition 2
    glColor3ub(0, 0, 0);
    glVertex3i (62, 24, 0);
    glVertex3i (62, 31, 0);
    glEnd();

    glBegin(GL_LINES);//bus door partition 3
    glColor3ub(0, 0, 0);
    glVertex3i (62, 31, 0);
    glVertex3i (60, 31, 0);
    glEnd();


    glBegin(GL_LINES);//bus door partition 4
    glColor3ub(0, 0, 0);
    glVertex3i (60, 31, 0);
    glVertex3i (60, 24, 0);
    glEnd();



    glBegin(GL_LINES);//bus window partition 1
    glColor3ub(0, 0, 0);
    glVertex3i (63, 30, 0);
    glVertex3i (63, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus window partition 2
    glColor3ub(0, 0, 0);
    glVertex3i (65, 30, 0);
    glVertex3i (65, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus window partition 3
    glColor3ub(0, 0, 0);
    glVertex3i (67, 30, 0);
    glVertex3i (67, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus window partition 4
    glColor3ub(0, 0, 0);
    glVertex3i (69, 30, 0);
    glVertex3i (69, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus window partition 5
    glColor3ub(0, 0, 0);
    glVertex3i (71, 30, 0);
    glVertex3i (71, 34, 0);
    glEnd();


    glBegin(GL_LINES);//bus window partition 6
    glColor3ub(0, 0, 0);
    glVertex3i (73, 30, 0);
    glVertex3i (73, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus window partition 7
    glColor3ub(0, 0, 0);
    glVertex3i (75, 30, 0);
    glVertex3i (75, 34, 0);
    glEnd();


    glBegin(GL_LINES);//bus window partition  9
    glColor3ub(0, 0, 0);
    glVertex3i (77, 30, 0);
    glVertex3i (77, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus front line
    glColor3ub(0, 0, 0);
    glVertex3i (58, 23, 0);
    glVertex3i (58, 25, 0);
    glEnd();

    glBegin(GL_LINES);//bus front line
    glColor3ub(0, 0, 0);
    glVertex3i (58, 25, 0);
    glVertex3f (59.5, 35.0, 0);
    glEnd();

    //wheels

    glColor3ub(0,0,0);
    circleSolid(64,22,1.5); // back wheels big circle
    circleSolid(74,22,1.5);//front wheels big circle
    glColor3ub(255,255,255);
    circleSolid(64,22,0.75f);//back wheels small circle
    circleSolid(74,22,0.75f);//front wheels small circle

}

void car2()
{
    glPushMatrix();
    glTranslatef(txCar2, 0, 0);

    glBegin(GL_POLYGON); //bus body
    glColor3ub(0, 204, 0);
    glVertex3i (8, 23, 0);
    glVertex3i (8, 25, 0);
    glVertex3i (28, 23, 0);
    glVertex3i (28, 35, 0);
    glVertex3f (9.5, 35.0, 0);
    glEnd();

    glBegin(GL_POLYGON); //bus body design 1
    glColor3ub(0, 102, 0);
    glVertex3i (14, 25, 0);
    glVertex3i (13, 27, 0);
    glVertex3i (14, 29, 0);
    glVertex3i (16, 29, 0);
    glVertex3i (15, 27, 0);
    glVertex3i (16, 25, 0);
    glEnd();

    glBegin(GL_POLYGON); //bus body design 2
    glColor3ub(0, 102, 0);
    glVertex3i (19, 25, 0);
    glVertex3i (18, 27, 0);
    glVertex3i (19, 29, 0);
    glVertex3i (21, 29, 0);
    glVertex3i (20, 27, 0);
    glVertex3i (21, 25, 0);
    glEnd();

    glBegin(GL_POLYGON); //bus body design 3
    glColor3ub(0, 102, 0);
    glVertex3i (24, 25, 0);
    glVertex3i (23, 27, 0);
    glVertex3i (24, 29, 0);
    glVertex3i (26, 29, 0);
    glVertex3i (25, 27, 0);
    glVertex3i (26, 25, 0);
    glEnd();

    glBegin(GL_QUADS);//bus window
    glColor3ub(224, 224, 224);
    glVertex3i (13, 34, 0);
    glVertex3i (13, 30, 0);
    glVertex3i (27, 30, 0);
    glVertex3i (27, 34, 0);
    glEnd();


    glBegin(GL_QUADS);//front glass
    glColor3ub(224, 224, 224);
    glVertex3f (8.5, 28.0, 0);
    glVertex3i (9, 28, 0);
    glVertex3f (10, 34.5, 0);
    glVertex3f (9.5, 34.5, 0);
    glEnd();

    glBegin(GL_QUADS);//headlight yellow front
    glColor3ub(235, 206, 49);
    glVertex3f (8.2, 26.0, 0.0);
    glVertex3f (9.0, 26.0, 0.0);
    glVertex3i (9, 27, 0);
    glVertex3f (8.4, 27.0, 0);
    glEnd();

    glBegin(GL_QUADS);//headlight red front
    glColor3ub(255, 0, 0);
    glVertex3f (8.0, 25.0, 0.0);
    glVertex3f (9.0, 25.0, 0.0);
    glVertex3i (9, 26, 0);
    glVertex3f (8.4, 26, 0);
    glEnd();

    glBegin(GL_QUADS);//headlight white front
    glColor3ub(255, 255, 255);
    glVertex3f (8.0, 24.0, 0.0);
    glVertex3f (9.0, 24.0, 0.0);
    glVertex3i (9, 25, 0);
    glVertex3i (8, 25, 0);
    glEnd();

    //back
    glBegin(GL_QUADS);//headlight yellow back
    glColor3ub(235, 206, 49);
    glVertex3i (27, 26, 0);
    glVertex3i (28, 26, 0);
    glVertex3i (28, 27, 0);
    glVertex3i (27, 27, 0);
    glEnd();

    glBegin(GL_QUADS);//headlight red back
    glColor3ub(255, 0, 0);
    glVertex3i (27, 25, 0);
    glVertex3i (28, 25, 0);
    glVertex3i (28, 26, 0);
    glVertex3i (27, 26, 0);
    glEnd();

    glBegin(GL_QUADS);//headlight white back
    glColor3ub(255, 255, 255);
    glVertex3f (27, 24, 0);
    glVertex3f (28, 24, 0);
    glVertex3i (28, 25, 0);
    glVertex3i (27, 25, 0);
    glEnd();




    glBegin(GL_QUADS);//bus door
    glColor3ub(224, 224, 224);
    glVertex3i (10, 24, 0);
    glVertex3i (12, 24, 0);
    glVertex3i (12, 31, 0);
    glVertex3i (10, 31, 0);
    glEnd();

    glBegin(GL_LINES);//bus door partition 1
    glColor3ub(0, 0, 0);
    glVertex3i (10, 24, 0);
    glVertex3i (12, 24, 0);
    glEnd();


    glBegin(GL_LINES);//bus door partition 2
    glColor3ub(0, 0, 0);
    glVertex3i (12, 24, 0);
    glVertex3i (12, 31, 0);
    glEnd();

    glBegin(GL_LINES);//bus door partition 3
    glColor3ub(0, 0, 0);
    glVertex3i (12, 31, 0);
    glVertex3i (10, 31, 0);
    glEnd();


    glBegin(GL_LINES);//bus door partition 4
    glColor3ub(0, 0, 0);
    glVertex3i (10, 31, 0);
    glVertex3i (10, 24, 0);
    glEnd();



    glBegin(GL_LINES);//bus window partition 1
    glColor3ub(0, 0, 0);
    glVertex3i (13, 30, 0);
    glVertex3i (13, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus window partition 2
    glColor3ub(0, 0, 0);
    glVertex3i (15, 30, 0);
    glVertex3i (15, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus window partition 3
    glColor3ub(0, 0, 0);
    glVertex3i (17, 30, 0);
    glVertex3i (17, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus window partition 4
    glColor3ub(0, 0, 0);
    glVertex3i (19, 30, 0);
    glVertex3i (19, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus window partition 5
    glColor3ub(0, 0, 0);
    glVertex3i (21, 30, 0);
    glVertex3i (21, 34, 0);
    glEnd();


    glBegin(GL_LINES);//bus window partition 6
    glColor3ub(0, 0, 0);
    glVertex3i (23, 30, 0);
    glVertex3i (23, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus window partition 7
    glColor3ub(0, 0, 0);
    glVertex3i (25, 30, 0);
    glVertex3i (25, 34, 0);
    glEnd();


    glBegin(GL_LINES);//bus window partition  9
    glColor3ub(0, 0, 0);
    glVertex3i (27, 30, 0);
    glVertex3i (27, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus front line
    glColor3ub(0, 0, 0);
    glVertex3i (8, 23, 0);
    glVertex3i (8, 25, 0);
    glEnd();

    glBegin(GL_LINES);//bus front line
    glColor3ub(0, 0, 0);
    glVertex3i (8, 25, 0);
    glVertex3f (9.5, 35.0, 0);
    glEnd();

    //wheels

    glColor3ub(0,0,0);
    circleSolid(14,22,1.5); // back wheels big circle
    circleSolid(24,22,1.5);//front wheels big circle
    glColor3ub(255,255,255);
    circleSolid(14,22,0.75);//back wheels small circle
    circleSolid(24,22,0.75);//front wheels small circle


    glPopMatrix();
}

void car3()
{
    glPushMatrix();
    glTranslatef(txCar3, 0, 0);


    glBegin(GL_POLYGON); //bus body
    glColor3ub(0, 204, 0);
    glVertex3i (108, 23, 0);
    glVertex3i (108, 25, 0);
    glVertex3i (128, 23, 0);
    glVertex3i (128, 35, 0);
    glVertex3f (109.5, 35.0, 0);
    glEnd();

    glBegin(GL_POLYGON); //bus body design 1
    glColor3ub(0, 102, 0);
    glVertex3i (114, 25, 0);
    glVertex3i (113, 27, 0);
    glVertex3i (114, 29, 0);
    glVertex3i (116, 29, 0);
    glVertex3i (115, 27, 0);
    glVertex3i (116, 25, 0);
    glEnd();

    glBegin(GL_POLYGON); //bus body design 2
    glColor3ub(0, 102, 0);
    glVertex3i (119, 25, 0);
    glVertex3i (118, 27, 0);
    glVertex3i (119, 29, 0);
    glVertex3i (121, 29, 0);
    glVertex3i (120, 27, 0);
    glVertex3i (121, 25, 0);
    glEnd();

    glBegin(GL_POLYGON); //bus body design 3
    glColor3ub(0, 102, 0);
    glVertex3i (124, 25, 0);
    glVertex3i (123, 27, 0);
    glVertex3i (124, 29, 0);
    glVertex3i (126, 29, 0);
    glVertex3i (125, 27, 0);
    glVertex3i (126, 25, 0);
    glEnd();

    glBegin(GL_QUADS);//bus window
    glColor3ub(224, 224, 224);
    glVertex3i (113, 34, 0);
    glVertex3i (113, 30, 0);
    glVertex3i (127, 30, 0);
    glVertex3i (127, 34, 0);
    glEnd();


    glBegin(GL_QUADS);//front glass
    glColor3ub(224, 224, 224);
    glVertex3f (108.5, 28.0, 0);
    glVertex3i (109, 28, 0);
    glVertex3f (110, 34.5, 0);
    glVertex3f (109.5, 34.5, 0);
    glEnd();

    glBegin(GL_QUADS);//headlight yellow front
    glColor3ub(235, 206, 49);
    glVertex3f (108.2, 26.0, 0.0);
    glVertex3f (109.0, 26.0, 0.0);
    glVertex3i (109, 27, 0);
    glVertex3f (108.4, 27.0, 0);
    glEnd();

    glBegin(GL_QUADS);//headlight red front
    glColor3ub(255, 0, 0);
    glVertex3f (108.0, 25.0, 0.0);
    glVertex3f (109.0, 25.0, 0.0);
    glVertex3i (109, 26, 0);
    glVertex3f (108.4, 26, 0);
    glEnd();

    glBegin(GL_QUADS);//headlight white front
    glColor3ub(255, 255, 255);
    glVertex3f (108.0, 24.0, 0.0);
    glVertex3f (109.0, 24.0, 0.0);
    glVertex3i (109, 25, 0);
    glVertex3i (108, 25, 0);
    glEnd();

    //back
    glBegin(GL_QUADS);//headlight yellow back
    glColor3ub(235, 206, 49);
    glVertex3i (127, 26, 0);
    glVertex3i (128, 26, 0);
    glVertex3i (128, 27, 0);
    glVertex3i (127, 27, 0);
    glEnd();

    glBegin(GL_QUADS);//headlight red back
    glColor3ub(255, 0, 0);
    glVertex3i (127, 25, 0);
    glVertex3i (128, 25, 0);
    glVertex3i (128, 26, 0);
    glVertex3i (127, 26, 0);
    glEnd();

    glBegin(GL_QUADS);//headlight white back
    glColor3ub(255, 255, 255);
    glVertex3f (127, 24, 0);
    glVertex3f (128, 24, 0);
    glVertex3i (128, 25, 0);
    glVertex3i (127, 25, 0);
    glEnd();


    glBegin(GL_QUADS);//bus door
    glColor3ub(224, 224, 224);
    glVertex3i (110, 24, 0);
    glVertex3i (112, 24, 0);
    glVertex3i (112, 31, 0);
    glVertex3i (110, 31, 0);
    glEnd();

    glBegin(GL_LINES);//bus door partition 1
    glColor3ub(0, 0, 0);
    glVertex3i (110, 24, 0);
    glVertex3i (112, 24, 0);
    glEnd();


    glBegin(GL_LINES);//bus door partition 2
    glColor3ub(0, 0, 0);
    glVertex3i (112, 24, 0);
    glVertex3i (112, 31, 0);
    glEnd();

    glBegin(GL_LINES);//bus door partition 3
    glColor3ub(0, 0, 0);
    glVertex3i (112, 31, 0);
    glVertex3i (110, 31, 0);
    glEnd();


    glBegin(GL_LINES);//bus door partition 4
    glColor3ub(0, 0, 0);
    glVertex3i (110, 31, 0);
    glVertex3i (110, 24, 0);
    glEnd();



    glBegin(GL_LINES);//bus window partition 1
    glColor3ub(0, 0, 0);
    glVertex3i (113, 30, 0);
    glVertex3i (113, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus window partition 2
    glColor3ub(0, 0, 0);
    glVertex3i (115, 30, 0);
    glVertex3i (115, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus window partition 3
    glColor3ub(0, 0, 0);
    glVertex3i (117, 30, 0);
    glVertex3i (117, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus window partition 4
    glColor3ub(0, 0, 0);
    glVertex3i (119, 30, 0);
    glVertex3i (119, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus window partition 5
    glColor3ub(0, 0, 0);
    glVertex3i (121, 30, 0);
    glVertex3i (121, 34, 0);
    glEnd();


    glBegin(GL_LINES);//bus window partition 6
    glColor3ub(0, 0, 0);
    glVertex3i (123, 30, 0);
    glVertex3i (123, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus window partition 7
    glColor3ub(0, 0, 0);
    glVertex3i (125, 30, 0);
    glVertex3i (125, 34, 0);
    glEnd();


    glBegin(GL_LINES);//bus window partition  9
    glColor3ub(0, 0, 0);
    glVertex3i (127, 30, 0);
    glVertex3i (127, 34, 0);
    glEnd();

    glBegin(GL_LINES);//bus front line
    glColor3ub(0, 0, 0);
    glVertex3i (108, 23, 0);
    glVertex3i (108, 25, 0);
    glEnd();

    glBegin(GL_LINES);//bus front line
    glColor3ub(0, 0, 0);
    glVertex3i (108, 25, 0);
    glVertex3f (109.5, 35.0, 0);
    glEnd();

    //wheels

    glColor3ub(0,0,0);
    circleSolid(114,22,1.5); // back wheels big circle
    circleSolid(124,22,1.5);//front wheels big circle
    glColor3ub(255,255,255);
    circleSolid(114,22,0.75f);//back wheels small circle
    circleSolid(124,22,0.75f);//front wheels small circle

    glPopMatrix();
}


void road()
{
    glBegin(GL_QUADS); //r 1
    glColor3ub(255, 204, 153);
    glVertex3i (-25, 20, 0);
    glVertex3i (200, 20, 0);
    glVertex3i (200, 25, 0);
    glVertex3i (-25, 25, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i (-25, 20, 0);
    glVertex3i (200, 20, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i (200, 25, 0);
    glVertex3i (-25, 25, 0);
    glEnd();

    glBegin(GL_QUADS); //r 2
    glColor3ub(255, 204, 153);
    glVertex3i (10, 25, 0);
    glVertex3i (-25, -25, 0);
    glVertex3i (-25, -20, 0);
    glVertex3i (5, 25, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i (10, 25, 0);
    glVertex3i (-25, 25, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i (5, 25, 0);
    glVertex3i (-25, 25, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i (5, 20, 0);
    glVertex3i (10, 20, 0);
    glEnd();

}

void mosque()
{

    glBegin(GL_QUADS);//1 no
    glColor3ub(128,128,128);
    glVertex3i(86, 25, 0);
    glVertex3i(103, 25, 0);
    glVertex3i(108, 45, 0);
    glVertex3i(81, 45, 0);

    glEnd();
    glBegin(GL_QUADS);//3 no
    glColor3ub(100,10,0);
    glVertex3i(89, 25, 0);
    glVertex3i(100, 25, 0);
    glVertex3i(100, 39,0);
    glVertex3i(89, 39,0);
    glEnd();

    glBegin(GL_QUADS);//2 no
    glColor3ub(0,0,0);
    glVertex3f(88.5, 41, 0);
    glVertex3f(100.5, 41, 0);
    glVertex3f(100.5, 43, 0);
    glVertex3f(88.5, 43, 0);
    glEnd();

    glBegin(GL_QUADS);//4 no
    glColor3ub(255,255,224);
    glVertex3i(91, 25, 0);
    glVertex3i(98, 25, 0);
    glVertex3i(98, 35, 0);
    glVertex3i(91, 35, 0);
    glEnd();

    glBegin(GL_QUADS);//5 no
    glColor3ub(154,44,48);
    glVertex3i(84, 25, 0);
    glVertex3i(105, 25, 0);
    glVertex3i(105, 27, 0);
    glVertex3i(84, 27, 0);
    glEnd();

    glBegin(GL_QUADS);//10 no
    glColor3ub(192,192,192);
    glVertex3i(80, 45, 0);
    glVertex3i(109, 45, 0);
    glVertex3i(109, 48, 0);
    glVertex3i(80, 48, 0);
    glEnd();

    glBegin(GL_LINES);//10 no line 1
    glColor3ub(0,0,0);
    glVertex3i(80, 45, 0);
    glVertex3i(109, 45, 0);
    glEnd();
    glBegin(GL_LINES);//10 no line 2
    glColor3ub(0,0,0);
    glVertex3i(109, 45, 0);
    glVertex3i(109, 48, 0);
    glEnd();
    glBegin(GL_LINES);//10 no line 3
    glColor3ub(0,0,0);
    glVertex3i(109, 48, 0);
    glVertex3i(80, 48, 0);
    glEnd();

    glBegin(GL_LINES);//10 no line 4
    glColor3ub(0,0,0);
    glVertex3i(80, 45, 0);
    glVertex3i(80, 48, 0);
    glEnd();

    glBegin(GL_QUADS);//4(middle portion rectangle) no
    glColor3ub(0,128,128);
    glVertex3i(93, 27, 0);
    glVertex3i(96, 27, 0);
    glVertex3i(96, 30, 0);
    glVertex3i(93, 30, 0);
    glEnd();

    glBegin(GL_TRIANGLES);//4(middle portion triangle) no
    glColor3ub(0,128,128);
    glVertex3i(93, 30, 0);
    glVertex3i(96, 30, 0);
    glVertex3f(94.5, 33, 0);
    glEnd();

// ==================== Moszid  END =====================
}


void basicColors()
{

    glBegin(GL_QUADS);  // full backgroud
    glColor3f(0.7, 1.0, 1.0);
    glVertex3i (-25, 25, 0);
    glVertex3i (130, 25, 0);
    glColor3f(0.4, 0.6, 1.0);
    glVertex3i (130, 150, 0);
    glVertex3i (-25, 150, 0);
    glEnd();


    glBegin(GL_QUADS);  // between p16 and p18
    glColor3ub(153, 0, 0);
    glVertex3i (34, 31, 0);
    glVertex3i (54, 31, 0);
    glVertex3i (54, 58, 0);
    glVertex3i (34, 58, 0);
    glEnd();

    glBegin(GL_QUADS);  // between p16 and p29
    glColor3ub(153, 0, 0);
    glVertex3i (55, 31, 0);
    glVertex3i (70, 31, 0);
    glVertex3i (70, 45, 0);
    glVertex3i (55, 46, 0);
    glEnd();

    glBegin(GL_QUADS);  // between p30 and p31
    glColor3ub(153, 0, 0);
    glVertex3i (70, 31, 0);
    glVertex3i (75, 31, 0);
    glVertex3i (75, 35, 0);
    glVertex3i (70, 35, 0);
    glEnd();

    glBegin(GL_QUADS);  // between p6 and p18
    glColor3ub(51, 0, 0);
    glVertex3i (24, 30, 0);
    glVertex3i (34, 30, 0);
    glVertex3i (33, 59, 0);
    glVertex3i (24, 63, 0);
    glEnd();


    glBegin(GL_QUADS);  // between p6 and p26
    glColor3ub(153, 0, 0);
    glVertex3i (24, 30, 0);
    glVertex3i (30, 30, 0);
    glVertex3i (30, 55, 0);
    glVertex3i (24, 55, 0);
    glEnd();

    glBegin(GL_QUADS);  // between p25 and p26
    glColor3ub(0, 102, 102);
    glVertex3i (30, 30, 0);
    glVertex3i (31, 30, 0);
    glVertex3i (31, 54, 0);
    glVertex3i (30, 55, 0);
    glEnd();

    glBegin(GL_QUADS);  // between p16 extra and p28 extra
    glColor3ub(153, 0, 0);
    glVertex3i (55, 45, 0);
    glVertex3i (65, 45, 0);
    glVertex3i (65, 50, 0);
    glVertex3i (55, 50, 0);
    glEnd();

    glBegin(GL_QUADS);  // middle gate
    glColor3ub(255, 255, 204);
    glVertex3i (45, 25, 0);
    glVertex3i (54, 25, 0);
    glVertex3i (54, 30, 0);
    glVertex3i (45, 30, 0);
    glEnd();

    glBegin(GL_TRIANGLES);  // left side field of road
    glColor3ub(0, 204, 0);
    glVertex3i (2, 20, 0);
    glVertex3i (-25, 20, 0);
    glVertex3i (-25, -25, 0);
    glEnd();
}


/// ==================== AB-01  START =====================
void sideLines()
{
    glBegin(GL_LINES);  // 2nd floors >>>>
    glColor3ub(0,0,0);
    glVertex3f(70, 37, 0);
    glVertex3f(75, 37, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(70, 36, 0);
    glVertex3f(70, 37, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(71, 36, 0);
    glVertex3f(71, 37, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(72, 36, 0);
    glVertex3f(72, 37, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(73, 36, 0);
    glVertex3f(73, 37, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(74, 36, 0);
    glVertex3f(74, 37, 0);
    glEnd();

    glBegin(GL_LINES);  // 2nd floor's <<<<
    glColor3ub(0,0,0);
    glVertex3f(75, 36, 0);
    glVertex3f(75, 37, 0);
    glEnd();

    glBegin(GL_LINES); //1st floor >>>>
    glColor3ub(0,0,0);
    glVertex3f(76, 32, 0);
    glVertex3f(80, 32, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(76, 31, 0);
    glVertex3f(76, 32, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(77, 31, 0);
    glVertex3f(77, 32, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(78, 31, 0);
    glVertex3f(78, 32, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(79, 31, 0);
    glVertex3f(79, 32, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(80, 31, 0);
    glVertex3f(80, 32, 0);
    glEnd();
}

void windowLines()
{
    glBegin(GL_LINES); //p8's lines ======== >>>
    glColor3ub(0,0,0);
    glVertex3f(15.5, 31, 0);
    glVertex3f(15.5, 34, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i(16, 31, 0);
    glVertex3i(16, 34, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(16.5, 31, 0);
    glVertex3f(16.5, 34, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i(17, 31, 0);
    glVertex3i(17, 34, 0);
    glEnd();

    glBegin(GL_LINES); //p8's lines =========== <<<
    glColor3ub(0,0,0);
    glVertex3f(17.5, 31, 0);
    glVertex3f(17.5, 34, 0);
    glEnd();

    glBegin(GL_LINES); //p9's lines ======== >>>
    glColor3ub(0,0,0);
    glVertex3f(15.5, 37, 0);
    glVertex3f(15.5, 40, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i(16, 37, 0);
    glVertex3i(16, 40, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(16.5, 37, 0);
    glVertex3f(16.5, 40, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i(17, 37, 0);
    glVertex3i(17, 40, 0);
    glEnd();

    glBegin(GL_LINES); //p9's lines ===========  <<<
    glColor3ub(0,0,0);
    glVertex3f(17.5, 37, 0);
    glVertex3f(17.5, 40, 0);
    glEnd();

    glBegin(GL_LINES); //p10's lines ======== >>>
    glColor3ub(0,0,0);
    glVertex3f(15.5, 42, 0);
    glVertex3f(15.5, 45, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i(16, 42, 0);
    glVertex3i(16, 45, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(16.5, 42, 0);
    glVertex3f(16.5, 45, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i(17, 42, 0);
    glVertex3i(17, 45, 0);
    glEnd();

    glBegin(GL_LINES); //p10's lines ===========  <<<
    glColor3ub(0,0,0);
    glVertex3f(17.5, 42, 0);
    glVertex3f(17.5, 45, 0);
    glEnd();

    glBegin(GL_LINES); //p11's lines ======== >>>
    glColor3ub(0,0,0);
    glVertex3f(15.5, 47, 0);
    glVertex3f(15.5, 50.5, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i(16, 47, 0);
    glVertex3f(16, 50.5, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(16.5, 47, 0);
    glVertex3f(16.5, 50.5, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i(17, 47, 0);
    glVertex3f(17, 50.5, 0);
    glEnd();

    glBegin(GL_LINES); //p11's lines ===========  <<<
    glColor3ub(0,0,0);
    glVertex3f(17.5, 47, 0);
    glVertex3f(17.5, 50.5, 0);
    glEnd();

    glBegin(GL_LINES); //p12's lines ======== >>>
    glColor3ub(0,0,0);
    glVertex3f(15.5, 52, 0);
    glVertex3f(15.5, 55.5, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i(16, 52, 0);
    glVertex3f(16, 55.5, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(16.5, 52, 0);
    glVertex3f(16.5, 55.5, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i(17, 52, 0);
    glVertex3f(17, 55.5, 0);
    glEnd();

    glBegin(GL_LINES); //p12's lines ===========  <<<
    glColor3ub(0,0,0);
    glVertex3f(17.5, 52, 0);
    glVertex3f(17.5, 55.5, 0);
    glEnd();

    glBegin(GL_LINES); //p12's extra lines ======== >>>
    glColor3ub(0,0,0);
    glVertex3f(15.5, 57, 0);
    glVertex3f(15.5, 60.5, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i(16, 57, 0);
    glVertex3f(16, 60.5, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3f(16.5, 57, 0);
    glVertex3f(16.5, 60.5, 0);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex3i(17, 57, 0);
    glVertex3f(17, 60.5, 0);
    glEnd();

    glBegin(GL_LINES); //p12's extra lines ===========  <<<
    glColor3ub(0,0,0);
    glVertex3f(17.5, 57, 0);
    glVertex3f(17.5, 60.5, 0);
    glEnd();

}

void gateLines()
{
    glBegin(GL_LINES); //p1's upper line
    glColor3ub(0,0,0);
    glVertex3i(8, 30, 0);
    glVertex3i(44, 30, 0);
    glEnd();

    glBegin(GL_LINES); //p1's right line
    glColor3ub(0,0,0);
    glVertex3i(44, 24, 0);
    glVertex3i(44, 30, 0);
    glEnd();

    glBegin(GL_LINES); //p2's upper line
    glColor3ub(0,0,0);
    glVertex3i(55, 30, 0);
    glVertex3i(85, 30, 0);
    glEnd();

    glBegin(GL_LINES); //p2's left line
    glColor3ub(0,0,0);
    glVertex3i(55, 24, 0);
    glVertex3i(55, 30, 0);
    glEnd();


    glBegin(GL_LINES); //gate head line =========
    glColor3ub(0,0,0);
    glVertex3i(45, 25, 0);
    glVertex3i(45, 30, 0);
    glEnd();

    glBegin(GL_LINES); //gate head line 2
    glColor3ub(0,0,0);
    glVertex3i(45, 30, 0);
    glVertex3i(46, 31, 0);
    glEnd();

    glBegin(GL_LINES); //gate head line 3
    glColor3ub(0,0,0);
    glVertex3i(46, 31, 0);
    glVertex3i(45, 32, 0);
    glEnd();

    glBegin(GL_LINES); //gate head line 4
    glColor3ub(0,0,0);
    glVertex3i(45, 32, 0);
    glVertex3i(44, 32, 0);
    glEnd();

    glBegin(GL_LINES); //gate head line 5
    glColor3ub(0,0,0);
    glVertex3i(44, 32, 0);
    glVertex3i(43, 31, 0);
    glEnd();

    glBegin(GL_LINES); //gate head line 6
    glColor3ub(0,0,0);
    glVertex3i(43, 31, 0);
    glVertex3i(44, 30, 0);
    glEnd();

    glBegin(GL_LINES); //gate head line ========
    glColor3ub(0,0,0);
    glVertex3i(54, 25, 0);
    glVertex3i(54, 30, 0);
    glEnd();


    glBegin(GL_LINES); //gate 2 head line 2
    glColor3ub(0,0,0);
    glVertex3i(55, 30, 0);
    glVertex3i(56, 31, 0);
    glEnd();

    glBegin(GL_LINES); //gate 2 head line 3
    glColor3ub(0,0,0);
    glVertex3i(56, 31, 0);
    glVertex3i(55, 32, 0);
    glEnd();

    glBegin(GL_LINES); //gate 2 head line 4
    glColor3ub(0,0,0);
    glVertex3i(55, 32, 0);
    glVertex3i(54, 32, 0);
    glEnd();

    glBegin(GL_LINES); //gate 2 head line 5
    glColor3ub(0,0,0);
    glVertex3i(54, 32, 0);
    glVertex3i(53, 31, 0);
    glEnd();

    glBegin(GL_LINES); //gate 2 head line 6
    glColor3ub(0,0,0);
    glVertex3i(53, 31, 0);
    glVertex3i(54, 30, 0);
    glEnd();

    //====== middle part of Gate >>

    glBegin(GL_LINES); // hor
    glColor3ub(0,0,0);
    glVertex3i(45, 30, 0);
    glVertex3i(54, 30, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3f(45.5, 30, 0);
    glVertex3f(45.5, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3i(46, 30, 0);
    glVertex3i(46, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3f(46.5, 30, 0);
    glVertex3f(46.5, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3i(47, 30, 0);
    glVertex3i(47, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3f(47.5, 30, 0);
    glVertex3f(47.5, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3i(48, 30, 0);
    glVertex3i(48, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3f(48.5, 30, 0);
    glVertex3f(48.5, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3i(49, 30, 0);
    glVertex3i(49, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3f(49.5, 30, 0);
    glVertex3f(49.5, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3i(50, 30, 0);
    glVertex3i(50, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3f(50.5, 30, 0);
    glVertex3f(50.5, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3i(51, 30, 0);
    glVertex3i(51, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3f(51.5, 30, 0);
    glVertex3f(51.5, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3i(52, 30, 0);
    glVertex3i(52, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3f(52.5, 30, 0);
    glVertex3f(52.5, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3i(53, 30, 0);
    glVertex3i(53, 25, 0);
    glEnd();

    glBegin(GL_LINES); //ver
    glColor3ub(0,0,0);
    glVertex3f(53.5, 30, 0);
    glVertex3f(53.5, 25, 0);
    glEnd();

    glBegin(GL_LINES); //dia
    glColor3ub(0,0,0);
    glVertex3i(45, 30, 0);
    glVertex3i(54, 25, 0);
    glEnd();

    glBegin(GL_LINES); //dia
    glColor3ub(0,0,0);
    glVertex3i(45, 25, 0);
    glVertex3i(54, 30, 0);
    glEnd();
}

void abOne()
{

    glBegin(GL_QUADS);  // p3
    glColor3ub(51, 0, 0);
    glVertex3i (10, 30, 0);
    glVertex3i (20, 30, 0);
    glVertex3i (20, 64, 0);
    glVertex3i (10, 64, 0);
    glEnd();

    glBegin(GL_QUADS);  // p4
    glColor3ub(224, 224, 224);
    glVertex3i (10, 30, 0);
    glVertex3i (11, 30, 0);
    glVertex3i (11, 64, 0);
    glVertex3i (10, 64, 0);
    glEnd();

    glBegin(GL_LINES); //line of p4
    glColor3ub(0, 0, 0);
    glVertex3f(10, 30, 0);
    glVertex3f(10, 65, 0);
    glEnd();

    glBegin(GL_QUADS);  // p5
    glColor3ub(224, 224, 224);
    glVertex3i (20, 30, 0);
    glVertex3i (22, 30, 0);
    glVertex3i (22, 64, 0);
    glVertex3i (20, 64, 0);
    glEnd();

    glBegin(GL_QUADS);  // p6
    glColor3ub(192, 192, 192);
    glVertex3i (22, 30, 0);
    glVertex3i (24, 30, 0);
    glVertex3i (24, 61, 0);
    glVertex3i (22, 65, 0);
    glEnd();


    glBegin(GL_QUADS);  // p7
    glColor3ub(224, 224, 224);
    glVertex3i (10, 64, 0);
    glVertex3i (22, 64, 0);
    glVertex3i (22, 65, 0);
    glVertex3i (10, 65, 0);
    glEnd();


    glBegin(GL_LINES); //line of p7
    glColor3ub(0, 0, 0);
    glVertex3f(10, 65, 0);
    glVertex3f(22, 65, 0);
    glEnd();

    glBegin(GL_QUADS);  // p8
    glColor3ub(192, 192, 192);
    glVertex3i (15, 31, 0);
    glVertex3i (18, 31, 0);
    glVertex3i (18, 34, 0);
    glVertex3i (15, 34, 0);
    glEnd();

    glBegin(GL_QUADS);  // p9
    glColor3ub(192, 192, 192);
    glVertex3i (15, 37, 0);
    glVertex3i (18, 37, 0);
    glVertex3i (18, 40, 0);
    glVertex3i (15, 40, 0);
    glEnd();

    glBegin(GL_QUADS);  // p10
    glColor3ub(192, 192, 192);
    glVertex3i (15, 42, 0);
    glVertex3i (18, 42, 0);
    glVertex3i (18, 45, 0);
    glVertex3i (15, 45, 0);
    glEnd();

    glBegin(GL_QUADS);  // p11
    glColor3ub(192, 192, 192);
    glVertex3i (15, 47, 0);
    glVertex3i (18, 47, 0);
    glVertex3i (18, 50, 0);
    glVertex3i (15, 50, 0);
    glEnd();

    glBegin(GL_QUADS);  // p12
    glColor3ub(192, 192, 192);
    glVertex3i (15, 52, 0);
    glVertex3i (18, 52, 0);
    glVertex3i (18, 55, 0);
    glVertex3i (15, 55, 0);
    glEnd();

    glBegin(GL_QUADS);  // p12 extra
    glColor3ub(192, 192, 192);
    glVertex3i (15, 57, 0);
    glVertex3i (18, 57, 0);
    glVertex3i (18, 60, 0);
    glVertex3i (15, 60, 0);
    glEnd();


    glBegin(GL_QUADS);  // p13
    glColor3ub(192, 192, 192);
    glVertex3i (24, 61, 0);
    glVertex3i (34, 58, 0);
    glVertex3i (33, 61, 0);
    glVertex3i (22, 65, 0);
    glEnd();

    glBegin(GL_LINES); //line of p13
    glColor3ub(0, 0, 0);
    glVertex3f(33, 61, 0);
    glVertex3f(22, 65, 0);
    glEnd();

    glBegin(GL_LINES); //line of p5 and 6
    glColor3ub(0, 0, 0);
    glVertex3f(22, 30, 0);
    glVertex3f(22, 65, 0);
    glEnd();


    glBegin(GL_QUADS);  // p14
    glColor3ub(224, 224, 224);
    glVertex3i (34, 58, 0);
    glVertex3i (55, 58, 0);
    glVertex3i (55, 61, 0);
    glVertex3i (33, 61, 0);
    glEnd();

    glBegin(GL_LINES); //line of p14
    glColor3ub(0, 0, 0);
    glVertex3f(33, 61, 0);
    glVertex3f(55, 61, 0);
    glEnd();


    glBegin(GL_QUADS);  // p15
    glColor3ub(192, 192, 192);
    glVertex3i (55, 50, 0);
    glVertex3i (61, 50, 0);
    glVertex3i (61, 58, 0);
    glVertex3i (55, 61, 0);
    glEnd();

    glBegin(GL_LINES); //line of p15
    glColor3ub(0, 0, 0);
    glVertex3f(55, 61, 0);
    glVertex3f(61, 58, 0);
    glEnd();

    glBegin(GL_LINES); //line of p15
    glColor3ub(0, 0, 0);
    glVertex3f(61, 58, 0);
    glVertex3f(61, 50, 0);
    glEnd();

    glBegin(GL_QUADS);  // p16
    glColor3ub(224, 224, 224);
    glVertex3i (54, 30, 0);
    glVertex3i (55, 30, 0);
    glVertex3i (55, 58, 0);
    glVertex3i (54, 58, 0);
    glEnd();


    glBegin(GL_QUADS);  // p17
    glColor3ub(224, 224, 224);
    glVertex3i (44, 30, 0);
    glVertex3i (45, 30, 0);
    glVertex3i (45, 58, 0);
    glVertex3i (44, 58, 0);
    glEnd();

    glBegin(GL_QUADS);  // p18
    glColor3ub(224, 224, 224);
    glVertex3i (33, 30, 0);
    glVertex3i (34, 30, 0);
    glVertex3i (34, 58, 0);
    glVertex3i (33, 61, 0);
    glEnd();

    glBegin(GL_QUADS);  // p19
    glColor3ub(224, 224, 224);
    glVertex3i (24, 45, 0);
    glVertex3i (54, 45, 0);
    glVertex3i (54, 46, 0);
    glVertex3i (24, 46, 0);
    glEnd();

    glBegin(GL_QUADS);  // p19 extra
    glColor3ub(224, 224, 224);
    glVertex3i (24, 50, 0);
    glVertex3i (54, 50, 0);
    glVertex3i (54, 51, 0);
    glVertex3i (24, 51, 0);
    glEnd();

    glBegin(GL_QUADS);  // p20
    glColor3ub(224, 224, 224);
    glVertex3i (24, 40, 0);
    glVertex3i (70, 40, 0);
    glVertex3i (70, 41, 0);
    glVertex3i (24, 41, 0);
    glEnd();

    glBegin(GL_QUADS);  // p21
    glColor3ub(224, 224, 224);
    glVertex3i (24, 35, 0);
    glVertex3i (81, 35, 0);
    glVertex3i (80, 36, 0);
    glVertex3i (24, 36, 0);
    glEnd();

    glBegin(GL_QUADS);  // p22
    glColor3ub(224, 224, 224);
    glVertex3i (24, 30, 0);
    glVertex3i (85, 30, 0);
    glVertex3i (85, 31, 0);
    glVertex3i (24, 31, 0);
    glEnd();

    glBegin(GL_QUADS);  // p23
    glColor3ub(224, 224, 224);
    glVertex3i (24, 55, 0);
    glVertex3i (30, 55, 0);
    glVertex3i (30, 56, 0);
    glVertex3i (24, 56, 0);
    glEnd();

    glBegin(GL_QUADS);  // p24
    glColor3ub(192, 192, 192);
    glVertex3i (30, 55, 0);
    glVertex3i (31, 54, 0);
    glVertex3f (31.5, 54, 0);
    glVertex3i (30, 56, 0);
    glEnd();

    glBegin(GL_QUADS);  // p25
    glColor3ub(224, 224, 224);
    glVertex3i (31, 30, 0);
    glVertex3f(31.5, 30, 0);
    glVertex3f(31.5, 54, 0);
    glVertex3i (31, 54, 0);
    glEnd();

    glBegin(GL_QUADS);  // p26
    glColor3ub(224, 224, 224);
    glVertex3i (29, 30, 0);
    glVertex3i (30, 30, 0);
    glVertex3i (30, 55, 0);
    glVertex3i (29, 55, 0);
    glEnd();


    glBegin(GL_QUADS);  // p28
    glColor3ub(224, 224, 224);
    glVertex3i (51, 45, 0);
    glVertex3i (70, 45, 0);
    glVertex3i (69, 46, 0);
    glVertex3i (51, 46, 0);
    glEnd();

    glBegin(GL_QUADS);  // p28 extra
    glColor3ub(224, 224, 224);
    glVertex3i (61, 50, 0);
    glVertex3i (66, 50, 0);
    glVertex3i (65, 51, 0);
    glVertex3i (61, 51, 0);
    glEnd();

    glBegin(GL_QUADS);  // p29
    glColor3ub(160, 160, 160);
    glVertex3i (69, 36, 0);
    glVertex3i (70, 36, 0);
    glVertex3i (70, 45, 0);
    glVertex3i (69, 45, 0);
    glEnd();

    glBegin(GL_QUADS);  // p29 extra
    glColor3ub(160, 160, 160);
    glVertex3i (65, 46, 0);
    glVertex3i (66, 46, 0);
    glVertex3i (66, 50, 0);
    glVertex3i (65, 50, 0);
    glEnd();

    glBegin(GL_QUADS);  // p30
    glColor3ub(160, 160, 160);
    glVertex3i (75, 31, 0);
    glVertex3i (76, 31, 0);
    glVertex3i (76, 39, 0);
    glVertex3i (75, 39, 0);
    glEnd();

    glBegin(GL_QUADS);  // p31
    glColor3ub(160, 160, 160);
    glVertex3i (80, 31, 0);
    glVertex3i (81, 31, 0);
    glVertex3i (81, 35, 0);
    glVertex3i (80, 35, 0);
    glEnd();

    glBegin(GL_QUADS);  // p32
    glColor3ub(224, 224, 224);
    glVertex3i (70, 39, 0);
    glVertex3i (76, 39, 0);
    glVertex3i (75, 40, 0);
    glVertex3i (70, 40, 0);
    glEnd();

    glBegin(GL_QUADS);  // gate pl 1
    glColor3ub(96, 96, 96);
    glVertex3i (44, 25, 0);
    glVertex3i (45, 25, 0);
    glVertex3i (45, 30, 0);
    glVertex3i (44, 30, 0);
    glEnd();

    glBegin(GL_QUADS);  // gate pl 1
    glColor3ub(96, 96, 96);
    glVertex3i (54, 25, 0);
    glVertex3i (55, 25, 0);
    glVertex3i (55, 30, 0);
    glVertex3i (54, 30, 0);
    glEnd();

    glBegin(GL_POLYGON); //gate's head 1
    glColor3ub(96, 96, 96);
    glVertex3i(44, 30, 0);
    glVertex3i(45, 30, 0);
    glVertex3i(46, 31, 0);
    glVertex3i(45, 32, 0);
    glVertex3i(44, 32, 0);
    glVertex3i(43, 31, 0);
    glEnd();

    glBegin(GL_POLYGON); //gate's head 2
    glColor3ub(96, 96, 96);
    glVertex3i(54, 30, 0);
    glVertex3i(55, 30, 0);
    glVertex3i(56, 31, 0);
    glVertex3i(55, 32, 0);
    glVertex3i(54, 32, 0);
    glVertex3i(53, 31, 0);
    glEnd();


    bigTree();
    mediumTree();


    glBegin(GL_QUADS);  // p1
    glColor3ub(102, 102,0);
    glVertex3i (8, 25, 0);
    glVertex3i (45, 25, 0);
    glVertex3i (45, 30, 0);
    glVertex3i (8, 30, 0);
    glEnd();

    glBegin(GL_QUADS);  // p2
    glColor3ub(102, 102,0);
    glVertex3i (54, 25, 0);
    glVertex3i (87, 25, 0);
    glVertex3i (87, 30, 0);
    glVertex3i (54, 30, 0);
    glEnd();


// ==================== AB-01  END =====================

}

//==================== AB-01  END =====================

void display(void)
{
    basicColors();
    abOne();
    windowLines();
    sideLines();
    gateLines();
    mosque();
    guardroom();
    innovationLab();
    road();
    playGround();
    midCircle();
    LDboxCircle();
    RDboxCircle();

    plane();
    cloud();


    grass(-20, 15);
    grass(-15, 13);
    grass(-10, 14);
    grass(-19, 8);
    grass(-24, 7);
    grass(-13, 7);
    grass(-17, 3);
    grass(-14, -1);
    grass(-20, -4);
    grass(-5, 15);
    grass(-7, 9);
    grass(-22, 1);
    grass(-22, -9);

    mediumTree2();


    tree(0, 25);
    tree2(3, 35, 0, 51, 0);
    tree(6, 25);

    tree(125, 25);
    tree2(118, 35, 0, 102, 0);
    tree(114, 25);

    human();
    human4();

    humanDy(55, 22, 0, 51, 51);
    humanDy(53, 22, 0, 51, 51);
    humanDy(51, 22, 51, 125, 0);
    humanDy(50, 22, 0, 25, 51);

    bushGrass(-23, 27);

    car();
    car2();
    car3();

    humanDy(35, 20, 0, 25, 51);
    humanDy(33, 20, 102, 51, 0);

    tree2(-3, 30, 0, 51, 0);


    bushGrass(-10, 5);
    bushGrass(-3, 15);
    bushGrass(-17, -5);
    tree(-25, 0);

    bushGrass(-10, 19);
    bushGrass(-20, 19);
    bushGrass(10, 19);
    bushGrass(20, 19);
    bushGrass(30, 19);
    bushGrass(40, 19);
    bushGrass(50, 19);
    bushGrass(60, 19);
    bushGrass(70, 19);
    bushGrass(80, 19);
    bushGrass(90, 19);
    bushGrass(100, 19);
    bushGrass(110, 19);
    bushGrass(120, 19);
    bushGrass(128, 19);

    glFlush();
}
void init (void)
{
    /* select clearing (background) color */
    glClearColor (0, 0, 0, 0); //bg black color
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-25, 130, -25, 150, -10.0, 10.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1080, 720);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Computer Graphics - Project with GLUT | DIU Campus Demostration");
    init ();

    glutDisplayFunc(display);
    glutKeyboardFunc(object_control);

    glutMainLoop();
    return 0;
}
