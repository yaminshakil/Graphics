#include<iostream>
using namespace std;
#include <stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<GL/gl.h>
#include <GL/glut.h>



int x,y,x2,y2,x3,y3,x4,y4,angle;





int Scale()

{



glPointSize(10.0);
if (angle==2)
{


glBegin(GL_LINE_LOOP);


glVertex2i(x/2, y/2);
glVertex2i(x3/2, y3/2);
glVertex2i(x2/2,y2/2);
glVertex2i(x4/2,y4/2);
glEnd();

}

if (angle==1)
{


glBegin(GL_LINE_LOOP);


glVertex2i(x*2, y*2);
glVertex2i(x3*2, y3*2);
glVertex2i(x2*2,y2*2);
glVertex2i(x4*2,y4*2);
glEnd();

}

}





void myDisplay(void)

{

glClear (GL_COLOR_BUFFER_BIT);

glColor3f (1.0, 0.0, 0.0);

glPointSize(10.0);

glBegin(GL_LINE_LOOP);


glVertex2i(x, y);
glVertex2i(x3, y3);
glVertex2i(x2, y2);
glVertex2i(x4, y4);
glEnd();


Scale();




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






cout<<"Enter the cordinate value"<<endl;
cout<<"Enter the  value for x1,y1"<<endl;
    system("COLOR FB");
cin>>x;
    system("COLOR FC");
cin>>y;
        system("COLOR FD");
cout<<"Enter the  value for x2,y2"<<endl;
    system("COLOR FE");
cin>>x3;
    system("COLOR F0");
cin>>y3;
    system("COLOR F1");


cout<<"Enter the  value for x3,y3"<<endl;
    system("COLOR F2");
cin>>x2;
    system("COLOR F3");
cin>>y2;
    system("COLOR F4");



    cout<<"Enter the  value for x4,y4"<<endl;
    system("COLOR FB");
cin>>x4;
    system("COLOR FC");
cin>>y4;


cout<<"Enter 1 for BIG  "<<endl;
cout<<"Enter 2 for Small  "<<endl;

    system("COLOR F5");
cin>>angle;
glutInit(&argc, argv);

glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);

glutInitWindowSize (500, 500);
glutInitWindowPosition (0, 0);

glutCreateWindow ("Hello World");

glutDisplayFunc(myDisplay);

myInit ();

glutMainLoop();



}
