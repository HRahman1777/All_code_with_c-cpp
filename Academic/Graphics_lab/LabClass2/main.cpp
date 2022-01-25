#include <GL/gl.h>
#include <GL/glut.h>
void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);

    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)

    primitives
    1. GL_QUADS
    2. GL_TRIANGLES
    3. GL_POLYGONS

*/
    glBegin(GL_QUADS); // started tripoid

    glColor3ub(255, 255, 0); //shape color...unsigned byte = ub
    glVertex3i (5, 5, 0); //3i means int... 3d means double
    glVertex3i (30, 5, 0);
    glVertex3i (25, 30, 0);
    glVertex3i (10, 30, 0);

    glEnd();// end


glBegin(GL_QUADS); // started ----------------- rectungle

    glColor3ub(255, 255, 0); //shape color...unsigned byte = ub
    glVertex3i (40, 5, 0); //3i means int... 3d means double
    glVertex3i (80, 5, 0);
    glVertex3i (80, 30, 0);
    glVertex3i (40, 30, 0);

    glEnd();// end -------------

    glBegin(GL_TRIANGLES); // started ----------------- trangle

    glColor3ub(255, 255, 0);
    glVertex3i (40, 30, 0);
    glVertex3i (80, 30, 0);
    glVertex3i (60, 40, 0);

    glEnd();// end -------------



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
    glutInitWindowSize (600, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("181-15-1777");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0; /* ISO C requires main to return int. */
}

