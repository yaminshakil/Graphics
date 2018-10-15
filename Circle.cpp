#include<iostream>
using namespace std;
#include <stdio.h>
#include<conio.h>

#include<stdlib.h>
#include<GL/gl.h>
#include <GL/glut.h>

int a=2,b=-3,r=200;

void draw(int x,int y)
{


glColor3f (1.0, 0.0, 1.0);

    glBegin(GL_POINTS);

    glVertex2i(x+a,y+b);
     glVertex2i(x+a,-y+b);
      glVertex2i(-x+a,y+b);
        glVertex2i(-x+a,-y+b);
          glVertex2i(y+a,x+b);
            glVertex2i(y+a,-x+b);
              glVertex2i(-y+a,x+b);
               glVertex2i(-y+a,-x+b);
    glEnd();

}


void myDisplay(void)

{





glClear (GL_COLOR_BUFFER_BIT);

glColor3f (1.0, 0.0, 0.0);

glPointSize(10.0);

int x=0,y=r;
float d=1-r;
while(x<=y)

{


 draw(x,y);
    if(d<0)
    {
        d=d+(2*x)+3;
        x++;

    }


    else{


        d=d+2*(x-y)+5;
        x++;
        y--;
    }
}






glFlush ();

}

void myInit (void)

{



glClearColor(0.0, 0.0, 1.0, 0.0);

glMatrixMode(GL_PROJECTION);

glLoadIdentity();

gluOrtho2D(-400, 400, -400, 400);

}




int main(int argc, char** argv)

{

    system("COLOR FA");







glutInit(&argc, argv);

glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

glutInitWindowSize (500, 500);
glutInitWindowPosition (0, 0);

glutCreateWindow ("Hello World");

glutDisplayFunc(myDisplay);

myInit ();

glutMainLoop();



}

