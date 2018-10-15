
#include <stdio.h>
#include<GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (0.0, 0.0, 0.0);
glPointSize(10.0);
glBegin(GL_POLYGON);

glVertex2i(540, 230);
glVertex2i(540, 320);

glVertex2i(440, 400);
glVertex2i(240, 400);

glVertex2i(140, 320);
glVertex2i(140, 230);
glVertex2i(240, 140);
glVertex2i(440, 140);

glEnd();

glColor3f (1.0, 0.0, 0.0);
glBegin(GL_POLYGON);

glVertex2i(520, 230);
glVertex2i(520, 320);

glVertex2i(420, 380);
glVertex2i(260, 380);

glVertex2i(160, 320);
glVertex2i(160, 230);
glVertex2i(260, 160);
glVertex2i(420, 160);


glEnd();


glBegin(GL_POLYGON);



glColor3f (0.0, 0.0, 0.0);


    glVertex2i(420, 320);

    glVertex2i(260, 320);



    glVertex2i(260, 210);

    glVertex2i(420, 210);


//glVertex2i(380, 210);
//glVertex2i(420, 210);
//glVertex2i(400, 230);

glEnd();




glBegin(GL_POLYGON);



glColor3f (0.0, 0.0, 0.0);


    glVertex2i(320, 320);

    glVertex2i(360, 320);



     glVertex2i(360, 350);
    glVertex2i(320, 350);






glEnd();




glBegin(GL_POLYGON);



glColor3f (0.0, 0.0, 0.0);







    glVertex2i(320, 360);

    glVertex2i(320, 350);

glVertex2i(330, 350);

  glVertex2i(330, 360);

   /* glVertex2i(350, 320);

    glVertex2i(360, 320);



    glVertex2i(360, 340);

    glVertex2i(350, 340);*/







glEnd();





glBegin(GL_POLYGON);



glColor3f (0.0, 0.0, 0.0);







 glVertex2i(350, 360);

    glVertex2i(350, 350);

glVertex2i(360, 350);

  glVertex2i(360, 360);









glEnd();







glBegin(GL_TRIANGLES);



glColor3f (0.0, 0.0, 0.0);






    glVertex2i(410, 320);



    glVertex2i(330, 210);

glVertex2i(340, 190);


glEnd();





glBegin(GL_TRIANGLES);



glColor3f (0.0, 0.0, 0.0);




glVertex2i(420, 210);
  glVertex2i(380, 210);

glVertex2i(400, 180);


glEnd();





glBegin(GL_TRIANGLES);



glColor3f (0.0, 0.0, 0.0);





glVertex2i(260, 210);

glVertex2i(280, 180);
glVertex2i(300, 210);

glEnd();




glBegin(GL_TRIANGLES);



glColor3f (0.0, 0.0, 0.0);

//////////////////



glVertex2i(380, 320);

glVertex2i(400, 350);
glVertex2i(420, 320);

glEnd();





glBegin(GL_TRIANGLES);



glColor3f (0.0, 0.0, 0.0);

//////////////////


glVertex2i(260, 320);

glVertex2i(280, 350);
glVertex2i(300, 320);
glEnd();





glBegin(GL_POLYGON);



glColor3f (0.0, 0.0, 0.0);

//////////////////


glVertex2i(420,210);

glVertex2i(470,240);

glVertex2i(470,280);

glVertex2i(420,320);


glEnd();









glBegin(GL_POLYGON);



glColor3f (0.0, 0.0, 0.0);

//////////////////


glVertex2i(260,210);

glVertex2i(210,240);

glVertex2i(210,280);

glVertex2i(260,320);


glEnd();


glFlush ();
}
void myInit (void)
{
glClearColor(0.0, 1.0, 1.0, 0.0);
glColor3f(0.0f, 0.0f, 0.0f);
glPointSize(4.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
 main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (800, 600);
glutInitWindowPosition (100, 150);
glutCreateWindow ("I am BatMan");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}
