#include <iostream>
using namespace std;
//#include<conio.h>
#include <cstdlib>
#include <cmath>
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>


int a,x2,y2,x3,y3,dx,dy,b,x,xend,y,yend,incrE,incrNE,d;
float m,xf,yf;

void myDisplay(void)
{
glClear (GL_COLOR_BUFFER_BIT);
glColor3f (1.0, 0.0, 0.0);
glPointSize(10.0);

dx=x3-x2;
dy=y3-y2;
m=dy/dx;
// line    For bresenham we can see the gap between points







//DDA       using point we can make something that look like a  line ---------> DDA
if(a==2)
{
    d=(2*dy)-dx;
    incrE=2*dy;
    incrNE=2*(dy-dx);

        glBegin(GL_POINTS);
        glVertex2i(x2,y2);
        glEnd();

    while(x2<x3)
    {
        if(d<=0)
        {
            d=d+incrE;
        }
        else
        {
            d=d+incrNE;
            y2+=20;
        }
        x2+=20;
        glBegin(GL_POINTS);
        glVertex2i(x2,y2);
        glEnd();
    }


}


if(a==1)
{
    if(abs(m)<=1)
    {
        if(dx>0)
        {
            x=x2;
            y=yf=y2;
            xend=x3;
        }
        else
        {
            x=x3;
            y=yf=y3;
            xend=x2;
        }
        while(x<=xend)
        {
            glBegin(GL_POINTS);
            glVertex2i(x,y);
            glEnd();
            yf=yf+m;
            x++;
            y=round(yf);
        }
    }
    else if(abs(m)>1)
    {
        if(dy>0)
        {
            y=y2;
            x=xf=x2;
            yend=y2;
        }
        else
        {
            y=y2;
            x=xf=x3;
            yend=y2;
        }
        while(y<=yend)
        {
            glBegin(GL_POINTS);
            glVertex2i(x,y);
            glEnd();
            xf=xf+(1/m);
            y++;
            x=round(xf);

        }

    }
}





glFlush ();
}
void myInit (void)
{
glClearColor(1.0, 1.0, 1.0, 0.0);
glMatrixMode(GL_MODELVIEW);
glLoadIdentity();
gluOrtho2D(0.0, 1024.0, 0.0, 768.0);
}
int main(int argc, char** argv)
{
 system("COLOR FA");

    cout<<"1.DDA"<<endl;
    cout<<"2.Breshenham"<<endl;
    cout<<"3.Exit"<<endl;
    cout<<"Choose a option: ";
    cin>>a;

    if(a==1 || a==2)
    {


        system("COLOR FA");
        cout<<"Enter x1:"<<endl;
         system("COLOR FB");
        cin>>x2;
         system("COLOR F1");
        cout<<"Enter y1:"<<endl;
         system("COLOR F0");
        cin>>y2;
         system("COLOR F3");
        cout<<"Enter x3:"<<endl;
         system("COLOR F4");
        cin>>x3;
         system("COLOR F5");
        cout<<"Enter y3:"<<endl;
         system("COLOR F6");
        cin>>y3;
        glutInit(&argc, argv);
        glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
        glutInitWindowSize (1024, 768);
        glutInitWindowPosition (0, 0);
        glutCreateWindow ("Hello World");
        glutDisplayFunc(myDisplay);
        myInit ();
        glutMainLoop();
    }
    else if(a==3)
    {
       exit (EXIT_FAILURE);
    }
    else
    {
        cout<<"Invalid Number"<<endl;
    }


}

