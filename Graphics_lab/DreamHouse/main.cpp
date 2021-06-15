#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);  // p1

    glColor3ub(230, 230,0);
    glVertex3i (5, 5, 0);
    glVertex3i (85, 5, 0);
    glVertex3i (85, 30, 0);
    glVertex3i (5, 30, 0);

    glEnd();


    glBegin(GL_QUADS); // p2

    glColor3ub(153, 153, 153);
    glVertex3i (5, 5, 0);
    glVertex3i (30, 5, 0);
    glVertex3i (30, 30, 0);
    glVertex3i (5, 30, 0);

    glEnd();



    glBegin(GL_QUADS); // p3

    glColor3ub(194, 194, 163);
    glVertex3i (5, 32, 0);
    glVertex3i (30,32, 0);
    glVertex3i (30, 45, 0);
    glVertex3i (10, 45, 0);

    glEnd();


    glBegin(GL_QUADS); // p4

    glColor3ub(255, 64, 0);
    glVertex3i (5, 30, 0);
    glVertex3i (85, 30, 0);
    glVertex3i (85, 32, 0);
    glVertex3i (5, 32, 0);

    glEnd();


    glBegin(GL_QUADS); // p5

    glColor3ub(255, 255, 0);
    glVertex3i (30, 32, 0);
    glVertex3i (85, 32, 0);
    glVertex3i (85, 60, 0);
    glVertex3i (30, 60, 0);

    glEnd();



    glBegin(GL_TRIANGLES); // p6

    glColor3ub(194, 194, 163);
    glVertex3i (30, 60, 0);
    glVertex3i (60, 60, 0);
    glVertex3i (45, 85, 0);

    glEnd();


    glBegin(GL_QUADS); // p7

    glColor3ub(194, 194, 163);
    glVertex3i (55, 60, 0);
    glVertex3i (85, 60, 0);
    glVertex3i (80, 70, 0);
    glVertex3i (48, 70, 0);

    glEnd();


    glBegin(GL_TRIANGLES); // p8

    glColor3ub(0, 134, 179);
    glVertex3i (45, 55, 0);
    glVertex3i (70, 55, 0);
    glVertex3i (57, 80, 0);

    glEnd();


    glBegin(GL_QUADS); // p9

    glColor3ub(230, 230,0);
    glVertex3i (45, 32, 0);
    glVertex3i (70, 32, 0);
    glVertex3i (70, 55, 0);
    glVertex3i (45, 55, 0);

    glEnd();


    glBegin(GL_QUADS); // p10

    glColor3ub(102, 153,153);
    glVertex3i (50, 5, 0);
    glVertex3i (65, 5, 0);
    glVertex3i (65, 25, 0);
    glVertex3i (50, 25, 0);

    glEnd();



    glBegin(GL_QUADS); // p11

    glColor3ub(102, 153,153);
    glVertex3i (51, 32, 0);
    glVertex3i (64, 32, 0);
    glVertex3i (64, 48, 0);
    glVertex3i (51, 48, 0);

    glEnd();


    glBegin(GL_QUADS); // p12

    glColor3ub(102, 153,153);
    glVertex3i (34, 40, 0);
    glVertex3i (39, 40, 0);
    glVertex3i (39, 55, 0);
    glVertex3i (34, 55, 0);

    glEnd();


    glBegin(GL_QUADS); // p13

    glColor3ub(102, 153,153);
    glVertex3i (74, 40, 0);
    glVertex3i (79, 40, 0);
    glVertex3i (79, 55, 0);
    glVertex3i (74, 55, 0);

    glEnd();


    glBegin(GL_QUADS); // p14

    glColor3ub(102, 153,153);
    glVertex3i (34, 15, 0);
    glVertex3i (40, 15, 0);
    glVertex3i (40, 25, 0);
    glVertex3i (34, 25, 0);

    glEnd();


    glBegin(GL_QUADS); // p15

    glColor3ub(102, 153,153);
    glVertex3i (74, 15, 0);
    glVertex3i (80, 15, 0);
    glVertex3i (80, 25, 0);
    glVertex3i (74, 25, 0);

    glEnd();



    glBegin(GL_QUADS); // p16

    glColor3ub (153, 194, 255);
    glVertex3i (8, 5, 0);
    glVertex3i (27, 5, 0);
    glVertex3i (27, 15, 0);
    glVertex3i (8, 15, 0);

    glEnd();



    glBegin(GL_QUADS); // p17

    glColor3ub(102,102,0);
    glVertex3i (85, 5, 0);
    glVertex3i (90, 5, 0);
    glVertex3i (90, 90, 0);
    glVertex3i (85, 90, 0);

    glEnd();



    glBegin(GL_QUADS); // p18

    glColor3ub(77,77,0);
    glVertex3i (80, 70, 0);
    glVertex3i (85, 60, 0);
    glVertex3i (85, 90, 0);
    glVertex3i (80, 90, 0);

    glEnd();




    glFlush ();
}
void init (void)
{
    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0); //bg black color
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 100, 0, 100, -10.0, 10.0); // init the value of x and y axis value (0, 100)
}
/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1080, 720);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("181-15-1777");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}

