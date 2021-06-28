#include <GL/gl.h>
#include <GL/glut.h>
#include<stdio.h>

float x, y, r, p, uX, uY, nX, nY;
int dx=0, dy=0;

void display(void)
{
    /* clear all pixels */
    glClear(GL_COLOR_BUFFER_BIT);
    /* draw white polygon (rectangle) with corners at
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
    */

    glBegin(GL_POINTS);
    glColor3ub(255, 0, 0);

    p = 1 - r;
    while(x<=y)
    {
        if(p<0)
        {
            x = x + 1;
            y = y;
            printf("x, y =  %f %f \n", x, y);
            p = p + (2*x) + 3;
            nX=x+uX;
            nY=y+uY;
        }
        else
        {
            x = x +1;
            y = y - 1;
            printf("x, y = %f %f \n", x, y);
            p = p + (2*x) - (2*y) + 5;
            nX=x+uX;
            nY=y+uY;
        }

        glVertex3f( nX, nY, 0);

        glVertex3f( nY, nX, 0);

        glVertex3f( (-nX), (-nY), 0);

        glVertex3f( (-nX), nY, 0);

        glVertex3f( nX,  (-nY), 0);

        glVertex3f( nY,  (-nX), 0);

        glVertex3f( (-nY),  (-nX), 0);

        glVertex3f( (-nY),  nX, 0);


    }





    glEnd();

    glFlush ();
}
void init (void)
{
    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);
    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-500, 500, -500, 500, -10.0, 10.0);
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

    printf("Enter Radius: ");
    scanf("%f", &r);

    printf("Enter x: ");
    scanf("%f", &uX);

    printf("Enter y: ");
    scanf("%f", &uY);

    y=r;

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

