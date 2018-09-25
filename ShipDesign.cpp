#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>


void myDisplay(void)
{
glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(0.0,0.0,1.0);
 glPointSize(5.0);
float round;
 glBegin(GL_POLYGON);



 glVertex2i(300,200);
 glColor3f(0.0,0.0,0.0);
  glVertex2i(450,200);
    // glColor3f(1.0,0.0,1.0);
   glVertex2i(570,280);
     // glColor3f(0.0,1.0,1.0);
    glVertex2i(180,280);

    glEnd();

   glColor3f(1.0,0.0,1.0);



    glBegin(GL_POLYGON);

    glVertex2i(450,280);
    glVertex2i(450,350);
      glColor3f(1.0,0.0,1.0);
    glVertex2i(430,350);
    glVertex2i(430,280);

glEnd();


    glColor3f(1.0,1.0,0.0);

     glBegin(GL_POLYGON);

    glVertex2i(400,280);
    glVertex2i(400,400);
      glColor3f(1.0,0.0,1.0);
    glVertex2i(350,400);
    glVertex2i(350,280);

    glEnd();



 glBegin(GL_POLYGON);
    glVertex2i(320,280);
    glVertex2i(320,350);

    glColor3f(0.0,1.0,0.0);

    glVertex2i(300,350);
      glColor3f(1.0,0.0,1.0);
    glVertex2i(300,280);


glEnd();

//cloud ball over here

  glColor3f(0.0,0.0,0.0);

glBegin(GL_POLYGON);
 for(int i=0;i<360;i++)
{
    round=i*3.1416/180;


    glVertex2f(455+15*cos(round),380+8*sin(round));

}

glEnd();


  glBegin(GL_POLYGON);
 for(int i=0;i<360;i++)
{
    round=i*3.1416/180;


   // glVertex2f(455+10*cos(round),360+10*sin(round));

    glVertex2f(475+15*cos(round),400+8*sin(round));

   // glVertex2f(475+10*cos(round),360+10*sin(round));

}

glEnd();


glBegin(GL_POLYGON);
 for(int i=0;i<360;i++)
{
    round=i*3.1416/180;



   glVertex2f(515+15*cos(round),440+8*sin(round));

}

glEnd();


glBegin(GL_POLYGON);
 for(int i=0;i<360;i++)
{
    round=i*3.1416/180;



   glVertex2f(385+20*cos(round),420+10*sin(round));

}

glEnd();





glBegin(GL_POLYGON);
 for(int i=0;i<360;i++)
{
    round=i*3.1416/180;



   glVertex2f(400+20*cos(round),450+10*sin(round));

}

glEnd();


glBegin(GL_POLYGON);
 for(int i=0;i<360;i++)
{
    round=i*3.1416/180;



   glVertex2f(420+20*cos(round),470+10*sin(round));

}

glEnd();





glBegin(GL_POLYGON);
 for(int i=0;i<360;i++)
{
    round=i*3.1416/180;



   glVertex2f(310+12*cos(round),370+8*sin(round));

}

glEnd();



glBegin(GL_POLYGON);
 for(int i=0;i<360;i++)
{
    round=i*3.1416/180;



   glVertex2f(320+12*cos(round),390+8*sin(round));

}

glEnd();


glBegin(GL_POLYGON);
 for(int i=0;i<360;i++)
{
    round=i*3.1416/180;



   glVertex2f(330+12*cos(round),410+8*sin(round));

}

glEnd();




    glFlush();
}
void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}

int main(int argc, char** argv)
{
glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (640, 480);
glutInitWindowPosition (200, 150);
glutCreateWindow ("Hello World");
glutDisplayFunc(myDisplay);
myInit ();
glutMainLoop();
}


