#include<iostream>
#include <windows.h>
#include <GL/glut.h>
#include<math.h>>
# define PI 3.14159265358979323846
using namespace std;

void Idle()
{
    glutPostRedisplay();//// marks the current window as needing to be redisplayed
}
GLfloat position = 0.0f,position2 = 0.0f,position3 = 0.0f,position4 = 0.0f,position5=0;
GLfloat speed = 0.01f,speed2 = 0.03f,speed3=.003,ar=0,speed4=0.05,speed5=.001;

void update(int value) {
    if(position >=1.8)
        position = -1.5f;

    position += speed; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);

}

void update2(int value)
//Plane speed
{
    if(position2 <-2)
        position2 = 1.5f;

    position2 -= speed2; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update2, 0);

}

void update3(int value)
// speed
{
    if(position3 >=0.4){
        position3 = .4;
        }

    position3 += speed3; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update3, 0);

}
void update4(int value) {
    if(position4 <0 )
       {

        position4 = .1;
       }
    position4 -= speed4; //position=position-speed;1-.1=.9
	glutPostRedisplay();
	glutTimerFunc(100, update4, 0);

}
void update5(int value)
//sun speed
{
    if(position5 >=0.6){
        position5 = .9;
        }

    position5 -= speed5; //position=position-speed;1-.1=.9

	glutPostRedisplay();


	glutTimerFunc(100, update5, 0);

}




///Morning Start



void Morningtree1()
{
    glScalef(.2,.2,1);
    glTranslatef(-3.0,-1.7,0);
        glLineWidth(3.5);
    glBegin(GL_TRIANGLES);
    glColor3f(0,.5,0);
    glVertex2f(.13,0);
    glVertex2f(0,-.15);
    glVertex2f(-.13,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(99, 73, 38);
    glVertex2f(.01,-.14);
    glVertex2f(-.01,-.14);
    glVertex2f(-.01,-.19);
    glVertex2f(.01,-.19);

    glEnd();

int lineAmount = 100;
GLfloat twicePi = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3f(0,.5,0);
GLfloat x1=.0f; GLfloat y1=.19f; GLfloat radius =.23f;

int triangleAmount = 20; //# of triangles used to draw circle

glVertex2f(x1, y1); // center of circle

for(int i = 0; i <= triangleAmount;i++) {

glVertex2f(

    x1 + (radius * cos(i *  twicePi / triangleAmount)),

    y1 + (radius * sin(i * twicePi / triangleAmount))
);

}

glEnd();
glLoadIdentity();
}

void Morningtree2()
{
    glScalef(.2,.2,1);
    glTranslatef(-2.5,-1.7,0);
        glLineWidth(3.5);
    glBegin(GL_TRIANGLES);
    glColor3f(0,.5,0);
    glVertex2f(.13,0);
    glVertex2f(0,-.15);
    glVertex2f(-.13,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(99, 73, 38);
    glVertex2f(.01,-.14);
    glVertex2f(-.01,-.14);
    glVertex2f(-.01,-.19);
    glVertex2f(.01,-.19);

    glEnd();

int lineAmount = 100;
GLfloat twicePi = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3f(0,.5,0);
GLfloat x1=.0f; GLfloat y1=.19f; GLfloat radius =.23f;

int triangleAmount = 20; //# of triangles used to draw circle

glVertex2f(x1, y1); // center of circle

for(int i = 0; i <= triangleAmount;i++) {

glVertex2f(

    x1 + (radius * cos(i *  twicePi / triangleAmount)),

    y1 + (radius * sin(i * twicePi / triangleAmount))
);

}

glEnd();
glLoadIdentity();
}

void Morningtree3()
{
    glScalef(.2,.2,1);
    glTranslatef(-2.0,-1.7,0);
        glLineWidth(3.5);
    glBegin(GL_TRIANGLES);
    glColor3f(0,.5,0);
    glVertex2f(.13,0);
    glVertex2f(0,-.15);
    glVertex2f(-.13,0);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(99, 73, 38);
    glVertex2f(.01,-.14);
    glVertex2f(-.01,-.14);
    glVertex2f(-.01,-.19);
    glVertex2f(.01,-.19);

    glEnd();

int lineAmount = 100;
GLfloat twicePi = 2.0f * PI;
glBegin(GL_TRIANGLE_FAN);
glColor3f(0,.5,0);
GLfloat x1=.0f; GLfloat y1=.19f; GLfloat radius =.23f;

int triangleAmount = 20; //# of triangles used to draw circle

glVertex2f(x1, y1); // center of circle

for(int i = 0; i <= triangleAmount;i++) {

glVertex2f(

    x1 + (radius * cos(i *  twicePi / triangleAmount)),

    y1 + (radius * sin(i * twicePi / triangleAmount))
);

}

glEnd();
glLoadIdentity();
}


void MorningRightTree()
{
glRotatef(180,0,1,0);
glPushMatrix();

Morningtree1();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();
Morningtree2();

glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();
Morningtree3();

glPopMatrix();
glLoadIdentity();
}

void MorningSun()
{

double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    //glColor3ub(0,200,0);
    glColor3ub(255, 166, 0);
    theta=i*3.1416/180;
    glVertex2f(0.68+(.05*cos(theta)),(0.4+.075*sin(theta)));
}
glEnd();
}

void MorningSun_Shine()
{
    glPushMatrix();
    glTranslatef(0,position3,0);
    MorningSun();
    glPopMatrix();
    glLoadIdentity();
}

void MorningSky2()
{
//sky
    glBegin(GL_QUADS);
    glColor3ub(184, 201, 212);
    glVertex2f(-1.00f, -0.19f);
glVertex2f(-1.00f, 1.00f);
glVertex2f(1.00f, 1.00f);
glVertex2f(1.00f, -0.19f);
glEnd();
MorningSun_Shine();

//ground
glBegin(GL_QUADS);
 glColor3ub(73,145,92);
  glVertex2f(-1.00f, -0.19f);
    glVertex2f(-1, -1);
     glVertex2f(1, -1);
     glVertex2f(1.00f, -0.19f);


    glEnd();


    glRotatef(180,0,1,0);
glPushMatrix();

//Left Middle part
    glBegin(GL_QUADS);
glColor3ub(227, 152, 138);

glVertex2f(-0.90f, 0.18f);
glVertex2f(-0.90f, -0.1f);
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, 0.18f);

glEnd();

glPopMatrix();
glLoadIdentity();


}

void MorningWhiteDiamond()
{

        glBegin(GL_QUADS);
    glColor3ub(184, 201, 212);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

}

void MRight_Down()
{
    glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_QUADS);
    glColor3ub(120, 87, 79);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.91f, -0.38f);
glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.65f, -0.36f);
glEnd();




  glBegin(GL_QUADS);
  glColor3ub(227, 152, 138);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.22,0,0);
  glBegin(GL_QUADS);
  glColor3ub(227, 152, 138);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glLineWidth(2);

glRotatef(180,0,1,0);
glPushMatrix();
//Left Down Border start
glBegin(GL_LINES);

glColor3ub(120, 87, 79);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

//Left Down Border End
glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);

glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);

glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

glVertex2f(-0.65f, -0.11f);
glVertex2f(-0.65f, -0.09f);

glEnd();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.22,0,0);
glBegin(GL_LINES);

glColor3ub(120, 87, 79);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);


//
glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);
glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();




glRotatef(180,0,1,0);
glPushMatrix();
  glBegin(GL_QUADS);
  glColor3ub(227, 152, 138);

glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

//leftDown middle
glVertex2f(-0.87f, -0.112f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.69f, -0.36f);
glVertex2f(-0.69f, -0.112f);

glEnd();


//left down piller start

glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.78f, -0.35f);

glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.77f, -0.35f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.77f, -0.12f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.78f, -0.12f);



glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.785f, -0.36f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.765f, -0.36f);


glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.785f, -0.11f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.765f, -0.11f);

glEnd();
//left down piller End
glPopMatrix();
glLoadIdentity();

}


void MRight_Middle()
{

//upper
glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
      glColor3ub(227, 152, 138);
glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);

glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.01,0,0);
//left mddle piller1
glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);


glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);


    glEnd();
    glLoadIdentity();

    glPopMatrix();
    glLoadIdentity();

//left mddle piller border1
glRotatef(180,0,1,0);
glPushMatrix();
 glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);


glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);


glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);


glVertex2f(-0.92f, 0.21f);
glVertex2f(-0.92f, 0.18f);


glEnd();

glPopMatrix();
glLoadIdentity();

//second left piller2

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.025,0,0);

glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();

///3
glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.245,0,0);
 glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.915f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.895f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();

glPopMatrix();
glLoadIdentity();

////////////////

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.22,0,0);

glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();

glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.128,0,0);
 glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//


glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();

glPopMatrix();
glLoadIdentity();



}


void MRightUpperWindow()
{
    glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(120, 87, 79);
    glVertex2f(-0.855f, 0.07f);
    glVertex2f(-0.855f, -0.02f);
    glVertex2f(-0.805f, -0.02f);
    glVertex2f(-0.805f, 0.07f);



    //right window
    glVertex2f(-0.755f, 0.07f);
glVertex2f(-0.755f, -0.02f);
glVertex2f(-0.705f, -0.02f);
glVertex2f(-0.705f, 0.07f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

    glVertex2f(-0.87f, 0.07f);
glVertex2f(-0.79f, 0.07f);

glVertex2f(-0.79f, 0.07f);
glVertex2f(-0.81f, 0.09f);

glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.85f, 0.09f);

glVertex2f(-0.85f, 0.09f);
glVertex2f(-0.87f, 0.07f);


//right window top
glVertex2f(-0.77f, 0.07f);
glVertex2f(-0.69f, 0.07f);

glVertex2f(-0.69f, 0.07f);
glVertex2f(-0.71f, 0.09f);

glVertex2f(-0.71f, 0.09f);
glVertex2f(-0.75f, 0.09f);

glVertex2f(-0.75f, 0.09f);
glVertex2f(-0.77f, 0.07f);




//top of window
glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(184, 201, 212);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glPopMatrix();
    glLoadIdentity();



    glRotatef(180,0,1,0);
glPushMatrix();

    glTranslatef(.022,0,0);
        glBegin(GL_QUADS);
    glColor3ub(184, 201, 212);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.1,0,0);
glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();

glBegin(GL_QUADS);
glColor3ub(184, 201, 212);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

glEnd();
 glPopMatrix();
 glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.12,0,0);
glBegin(GL_QUADS);

glColor3ub(184, 201, 212);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

glEnd();
glLoadIdentity();
glPopMatrix();

glLoadIdentity();


    glLoadIdentity();

}

void MorningtopCircle1()
{
double theta;
glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();

}

void MorningtopCircle2()
{
    double theta;

    glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(227, 152, 138);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();
}

void MRightTop()
{
    glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);
glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);
glEnd();

    glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);
glEnd();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(-.02,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

////////////////
glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.01,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//**************
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//**********
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//**********
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//************
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();
glBegin(GL_LINES);
glColor3ub(120, 87, 79);
boolean check=true;
glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);

glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);

glVertex2f(-0.95f, 0.24f);
glVertex2f(-0.91f, 0.21f);

glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);

glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);


//top
glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);

glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);

glVertex2f(-0.91f, 0.33f);
glVertex2f(-0.91f, 0.243f);

glVertex2f(-0.91f, 0.24f);
glVertex2f(-0.91f, 0.36f);

glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.92f, 0.34f);

glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

glVertex2f(-0.92f, 0.24f);
glVertex2f(-0.91f, 0.24f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);


glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);


glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);


glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

//
glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.33f);

glVertex2f(-0.71f, 0.33f);
glVertex2f(-0.70f, 0.33f);

glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.71f, 0.35f);

//


glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.65f, 0.36f);

glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.70f, 0.33f);

glEnd();


glBegin(GL_QUADS);
glColor3ub(227, 152, 138);

glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);


//
glVertex2f(-0.911f, 0.24f);
glVertex2f(-0.911f, 0.36f);
glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

//
glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);

glEnd();



glBegin(GL_POLYGON);
glColor3ub(227, 152, 138);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);


glEnd();

glPopMatrix();
glLoadIdentity();



glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.03,.06,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();



glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(227, 152, 138);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glBegin(GL_QUADS);
glColor3ub(227, 152, 138);

glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.331f);
glVertex2f(-0.70f, 0.331f);
glVertex2f(-0.70f, 0.36f);

//


glVertex2f(-0.699f, 0.331f);
glVertex2f(-0.65f, 0.331f);
glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.699f, 0.36f);
glEnd();

glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.21,0,0);

glBegin(GL_POLYGON);
glColor3ub(227, 152, 138);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.21,0,0);
MorningtopCircle1();
glLoadIdentity();

glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.21,0,0);
MorningtopCircle2();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



}

void MRight_top()
{
    glRotatef(180,0,1,0);
    glPushMatrix();

    glScalef(1,.6,1);
    glTranslatef(-.788,.553,0);
    glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.05f, 0.03f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(-0.04f, 0.03f);
    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(227, 152, 138);
    glVertex2f(-0.05f, 0.015f);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(0.05f, 0.015f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glEnd();
//////////////////////////////////////////////////////////////////////

    glLineWidth(1);
   glBegin(GL_LINES);
   glColor3ub(120, 87, 79);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);

    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f, 0.03f);

    glVertex2f(-0.05f, 0.03f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(0.05f, 0.03f);
    glVertex2f(0.04f, 0.03f);

    glVertex2f(-0.05f, 0.01f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);

    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glVertex2f(-0.04f, 0.05f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(-0.07f, 0.0f);
    glVertex2f(-0.05f, 0.015f);

    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glVertex2f(0.07f, 0.0f);
    glVertex2f(0.05f, 0.015f);
    glEnd();

    glLoadIdentity();
    glPopMatrix();
    glLoadIdentity();


    glRotatef(180,0,1,0);
glPushMatrix();


    glTranslatef(.13,.045,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.007*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.13,.045,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(227, 152, 138);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.006*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


}


void MRightDownWindow()
{

    glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
//back1
glVertex2f(-0.86f, -0.36f);
glVertex2f(-0.86f, -0.24f);
glVertex2f(-0.80f, -0.24f);
glVertex2f(-0.80f, -0.36f);

//back2
glColor3ub(227, 152, 138);

glVertex2f(-0.858f, -0.36f);
glVertex2f(-0.858f, -0.25f);
glVertex2f(-0.802f, -0.25f);
glVertex2f(-0.802f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.853f, -0.26f);
glVertex2f(-0.853f, -0.36f);
glVertex2f(-0.808f, -0.36f);
glVertex2f(-0.808f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.03*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(227, 152, 138);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.028*cos(theta)),(-.252+.05*sin(theta)));
}
glEnd();







glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.8305+(.0225*cos(theta)),(-.27+.051*sin(theta)));
}
glEnd();

glPopMatrix();
glLoadIdentity();





}



void MRightDownWIndow2()
{
    glTranslatef(-.1,0,0);
    MRightDownWindow();
    glLoadIdentity();

}


void MRightTopWIndow1()
{

    glScalef(.45,.45,1);
    glTranslatef(1.139,.9,0);
    MRightDownWindow();
    glLoadIdentity();
}

void MRightTopWIndow2()
{

    glTranslatef(-.21,0,0);
    MRightTopWIndow1();
    glLoadIdentity();


}


void Morninglalalala()
{

//front
    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, -0.26f);
glVertex2f(-0.85f, -0.36f);
glVertex2f(-0.81f, -0.36f);
glVertex2f(-0.81f, -0.26f);


glEnd();


double theta;





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.02*cos(theta)),(-.27+.05*sin(theta)));
}
glEnd();




}


void MRightTopMiddleWindow()
{
glRotatef(180,0,1,0);
glPushMatrix();
    glScalef(0.35,.35,1);
    glTranslatef(-1.59,1.1,0);
    Morninglalalala();
    glLoadIdentity();
    glPopMatrix();
    glLoadIdentity();

}

void RightMorningTopMiddleWindow2()
{
    glTranslatef(-.025,0,0);
    MRightTopMiddleWindow();

      glTranslatef(-.05,0,0);
    MRightTopMiddleWindow();

      glTranslatef(-.075,0,0);
    MRightTopMiddleWindow();

      glTranslatef(-.1,0,0);
    MRightTopMiddleWindow();
//
      glTranslatef(-.125,0,0);
    MRightTopMiddleWindow();

    glLoadIdentity();
}



void SecondMorningRightPart()
{

glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);

glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
//
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);

glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);

glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);



glEnd();


glBegin(GL_QUADS);
glColor3ub(227, 152, 138);

glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);
    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
    glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);

glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);

glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);


glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, -0.365f);
    glEnd();
// glLineWidth(3);



    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);


glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.635f, -0.325f);
glVertex2f(-0.635f, -0.305f);
glVertex2f(-0.65f, -0.36f);



glVertex2f(-0.64f, -0.325f);
glVertex2f(-0.37f, -0.325f);
glVertex2f(-0.37f, -0.310f);
glVertex2f(-0.64f, -0.310f);


    glEnd();
    glPopMatrix();
    glLoadIdentity();



}


void MRightMiddle1()
{
glRotatef(180,0,1,0);
glPushMatrix();
glLineWidth(1.5);

glScalef(.5,1,1);
glTranslatef(-.369,.05,0);
glBegin(GL_QUADS);
glColor3ub(227, 152, 138);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();



    glBegin(GL_LINES);

glColor3ub(120, 87, 79);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

}


void MRightMiddle2()
{

    glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.619f, -0.31f);
glVertex2f(-0.21f, -0.31f);
glVertex2f(-0.19f, -0.05f);
glVertex2f(-0.619f, -0.06f);





    glEnd();


        glBegin(GL_LINES);
    glColor3ub(120, 87, 79);


    glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);

glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);

    glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

    glVertex2f(-0.19f, -0.04f);
        glVertex2f(-0.64f, -0.04f);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
}


void MRightMiddle3()
{
    glTranslatef(-.09,0,0);
    MRightMiddle1();

    glTranslatef(-.18,0,0);
    MRightMiddle1();

    glTranslatef(-.27,0,0);
    MRightMiddle1();

    glTranslatef(-.36,0,0);
    MRightMiddle1();

    glLoadIdentity();
}


void MRightMiddleDownWindow1()
{

    glRotatef(180,0,1,0);
glPushMatrix();
    glTranslatef(.245,.05,0);
     glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
//back1
glVertex2f(-0.856f, -0.36f);
glVertex2f(-0.856f, -0.24f);
glVertex2f(-0.803f, -0.24f);
glVertex2f(-0.803f, -0.36f);

//back2
glColor3ub(227, 152, 138);

glVertex2f(-0.854f, -0.36f);
glVertex2f(-0.854f, -0.25f);
glVertex2f(-0.805f, -0.25f);
glVertex2f(-0.805f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, -0.26f);
glVertex2f(-0.85f, -0.36f);
glVertex2f(-0.81f, -0.36f);
glVertex2f(-0.81f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.0255*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(227, 152, 138);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.025*cos(theta)),(-.25+.05*sin(theta)));
}
glEnd();






//
glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.02*cos(theta)),(-.27+.05*sin(theta)));
}
glEnd();
//
//
    glLoadIdentity();

    glPopMatrix();
    glLoadIdentity();

}


void MRightMiddleDownWindow2()
{
    glTranslatef(-.09,0,0);
    MRightMiddleDownWindow1();

        glTranslatef(-.18,0,0);
    MRightMiddleDownWindow1();

        glTranslatef(-.27,0,0);
    MRightMiddleDownWindow1();

        glTranslatef(-.36,0,0);
    MRightMiddleDownWindow1();

    glLoadIdentity();
}


void MRightMiddle4()
{
glRotatef(180,0,1,0);
glPushMatrix();

glBegin(GL_POLYGON);
glColor3ub(227, 152, 138);
glVertex2f(-0.639f, -0.039f);
glVertex2f(-0.625f, -0.039f);
glVertex2f(-0.625f, 0.16f);
glVertex2f(-0.639f, 0.17f);
glVertex2f(-0.639f, -0.039f);
glEnd();

glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

    glTranslatef(.287,.05,0);
     glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



}

void MRightMiddle6()
{
    //piller


//   glTranslatef(-.08,0,0);
//   RightMiddle4();
//
//      glTranslatef(-.16,0,0);
//   RightMiddle4();
//      glTranslatef(-.24,0,0);
//   RightMiddle4();
//      glTranslatef(-.32,0,0);
//   RightMiddle4();
//      glTranslatef(-.40,0,0);
//   RightMiddle4();

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.367,0.05,0);

 glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();

   glLoadIdentity();
   glPopMatrix();
   glLoadIdentity();
}

void MRightMiddle7()
{
    glTranslatef(-.08,0,0);
    MRightMiddle6();
    glLoadIdentity();

        glTranslatef(-.16,0,0);
    MRightMiddle6();
    glLoadIdentity();

        glTranslatef(-.24,0,0);
    MRightMiddle6();
    glLoadIdentity();

        glTranslatef(-.32,0,0);
    MRightMiddle6();
    glLoadIdentity();
}

void MSecondRightTopWindow1()
{
       glTranslatef(-.006,.27,0);
       MRightMiddleDownWindow1();
   glLoadIdentity();
}

void MSecondRightTopWindow2()
{
       glTranslatef(-.08,0,0);
       MSecondRightTopWindow1();

        glTranslatef(-.16,0,0);
       MSecondRightTopWindow1();

        glTranslatef(-.24,0,0);
       MSecondRightTopWindow1();

        glTranslatef(-.32,0,0);
       MSecondRightTopWindow1();



        glLoadIdentity();
}



void MDiamondShowroom2()
{
    glRotatef(180,0,1,0);
glPushMatrix();
       glTranslatef(.054,.21,0);
       MorningWhiteDiamond();
      glLoadIdentity();
glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

    glTranslatef(.22,.155,0);
    MorningWhiteDiamond();

    glTranslatef(.02,0,0);
    MorningWhiteDiamond();

    glTranslatef(.02,0,0);
    MorningWhiteDiamond();

    glTranslatef(.05,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();

        glTranslatef(.05,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();

        glTranslatef(.05,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();


    glTranslatef(.05,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();



   glLoadIdentity();

   glPopMatrix();
   glLoadIdentity();

}





void MRight_RightMiddle()
{
    glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);
glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.239f);
glVertex2f(-0.64f, 0.239f);




    //toppest
glVertex2f(-0.649f, 0.325f);
glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);
    glEnd();

//2nd toppest
   glBegin(GL_POLYGON);
    glColor3ub(227, 152, 138);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.648f, 0.26f);
glVertex2f(-0.648f, 0.245f);
glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
        glVertex2f(-0.649f, 0.325f);
        glVertex2f(-0.649f, 0.26f);

        glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);

glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);


glVertex2f(-0.19f, 0.325f);
glVertex2f(-0.649f, 0.325f);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.230f);

glVertex2f(-0.19f, 0.230f);
glVertex2f(-0.64f, 0.230f);

glVertex2f(-0.64f, 0.230f);
glVertex2f(-0.64f, -0.04f);

///
  glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.65f, 0.26f);


   glVertex2f(-0.6485f, 0.26f);
glVertex2f(-0.65f, 0.245f);


 glVertex2f(-0.6485f, 0.245f);
glVertex2f(-0.62f, 0.245f);

   glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);

    glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);

glVertex2f(-0.19f, 0.23f);
glVertex2f(-0.19f, 0.26f);


///

    glEnd();

glPopMatrix();
glLoadIdentity();

}







//LEFT PART START






void MorningSky()
{


//Left Middle part
    glBegin(GL_QUADS);
glColor3ub(227, 152, 138);

glVertex2f(-0.90f, 0.18f);
glVertex2f(-0.90f, -0.1f);
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, 0.18f);

glEnd();




}

void MorningWhiteDiamond2()
{
        glBegin(GL_QUADS);
    glColor3ub(184, 201, 212);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

}

void Mleft_down()
{
    glBegin(GL_QUADS);
    glColor3ub(120, 87, 79);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.91f, -0.38f);
glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.65f, -0.36f);
glEnd();




  glBegin(GL_QUADS);
  glColor3ub(227, 152, 138);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();



glTranslatef(.22,0,0);
  glBegin(GL_QUADS);
  glColor3ub(227, 152, 138);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();

glLoadIdentity();



glLineWidth(2);


//Left Down Border start
glBegin(GL_LINES);

glColor3ub(120, 87, 79);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

//Left Down Border End
glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);

glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);

glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

glVertex2f(-0.65f, -0.11f);
glVertex2f(-0.65f, -0.09f);

glEnd();


glTranslatef(.22,0,0);
glBegin(GL_LINES);

glColor3ub(120, 87, 79);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);


//
glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);
glEnd();
glLoadIdentity();






  glBegin(GL_QUADS);
  glColor3ub(227, 152, 138);

glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

//leftDown middle
glVertex2f(-0.87f, -0.112f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.69f, -0.36f);
glVertex2f(-0.69f, -0.112f);

glEnd();


//left down piller start

glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.78f, -0.35f);

glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.77f, -0.35f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.77f, -0.12f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.78f, -0.12f);



glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.785f, -0.36f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.765f, -0.36f);


glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.785f, -0.11f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.765f, -0.11f);

glEnd();
//left down piller End

}


void MleftMiddle()
{

//upper

    glBegin(GL_QUADS);
      glColor3ub(227, 152, 138);
glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);

glTranslatef(.01,0,0);
//left mddle piller1
glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);


glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);


    glEnd();
    glLoadIdentity();

//left mddle piller border1
 glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);


glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);


glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);


glVertex2f(-0.92f, 0.21f);
glVertex2f(-0.92f, 0.18f);


glEnd();

//second left piller2


glTranslatef(.025,0,0);

glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();


///3

glTranslatef(.245,0,0);
 glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.915f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.895f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();



////////////////


glTranslatef(.22,0,0);

glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();




glTranslatef(.128,0,0);
 glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//


glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();





}


void MLeftUpperWindow()
{
    glBegin(GL_QUADS);
    glColor3ub(120, 87, 79);
    glVertex2f(-0.855f, 0.07f);
    glVertex2f(-0.855f, -0.02f);
    glVertex2f(-0.805f, -0.02f);
    glVertex2f(-0.805f, 0.07f);



    //right window
    glVertex2f(-0.755f, 0.07f);
glVertex2f(-0.755f, -0.02f);
glVertex2f(-0.705f, -0.02f);
glVertex2f(-0.705f, 0.07f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

    glVertex2f(-0.87f, 0.07f);
glVertex2f(-0.79f, 0.07f);

glVertex2f(-0.79f, 0.07f);
glVertex2f(-0.81f, 0.09f);

glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.85f, 0.09f);

glVertex2f(-0.85f, 0.09f);
glVertex2f(-0.87f, 0.07f);


//right window top
glVertex2f(-0.77f, 0.07f);
glVertex2f(-0.69f, 0.07f);

glVertex2f(-0.69f, 0.07f);
glVertex2f(-0.71f, 0.09f);

glVertex2f(-0.71f, 0.09f);
glVertex2f(-0.75f, 0.09f);

glVertex2f(-0.75f, 0.09f);
glVertex2f(-0.77f, 0.07f);




//top of window
glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(184, 201, 212);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

    glTranslatef(.022,0,0);
        glBegin(GL_QUADS);
    glColor3ub(184, 201, 212);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glLoadIdentity();




glTranslatef(.1,0,0);
glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();

        glBegin(GL_QUADS);
    glColor3ub(184, 201, 212);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

    glTranslatef(.022,0,0);
        glBegin(GL_QUADS);
    glColor3ub(184, 201, 212);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glLoadIdentity();



    glLoadIdentity();

}



void MLeftTop()
{
    glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);
glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);
glEnd();

    glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);
glEnd();


glTranslatef(-.02,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glLoadIdentity();

glTranslatef(.01,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();



glLoadIdentity();




glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);

glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);

glVertex2f(-0.95f, 0.24f);
glVertex2f(-0.91f, 0.21f);

glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);

glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);


//top
glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);

glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);

glVertex2f(-0.91f, 0.33f);
glVertex2f(-0.91f, 0.243f);

glVertex2f(-0.91f, 0.24f);
glVertex2f(-0.91f, 0.36f);

glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.92f, 0.34f);

glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

glVertex2f(-0.92f, 0.24f);
glVertex2f(-0.91f, 0.24f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
//

glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);


glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);


glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

//
glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.33f);

glVertex2f(-0.71f, 0.33f);
glVertex2f(-0.70f, 0.33f);

glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.71f, 0.35f);

//


glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.65f, 0.36f);

glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.70f, 0.33f);

glEnd();


glBegin(GL_QUADS);
glColor3ub(227, 152, 138);

glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);


//
glVertex2f(-0.911f, 0.24f);
glVertex2f(-0.911f, 0.36f);
glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

//
glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);

glEnd();



glBegin(GL_POLYGON);
glColor3ub(227, 152, 138);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);


glEnd();


glTranslatef(.03,.06,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();


glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(227, 152, 138);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();






glBegin(GL_QUADS);
glColor3ub(227, 152, 138);

glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.331f);
glVertex2f(-0.70f, 0.331f);
glVertex2f(-0.70f, 0.36f);

//


glVertex2f(-0.699f, 0.331f);
glVertex2f(-0.65f, 0.331f);
glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.699f, 0.36f);
glEnd();








glTranslatef(.21,0,0);


glBegin(GL_POLYGON);
glColor3ub(227, 152, 138);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glEnd();

glLoadIdentity();


glTranslatef(.21,0,0);
MorningtopCircle1();
glLoadIdentity();


glTranslatef(.21,0,0);
MorningtopCircle2();
glLoadIdentity();



}

void MLefttop()
{
    glScalef(1,.6,1);

    glTranslatef(-.788,.553,0);
    glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.05f, 0.03f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(-0.04f, 0.03f);
    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(227, 152, 138);
    glVertex2f(-0.05f, 0.015f);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(0.05f, 0.015f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glEnd();
//////////////////////////////////////////////////////////////////////

    glLineWidth(1);
   glBegin(GL_LINES);
   glColor3ub(120, 87, 79);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);

    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f, 0.03f);

    glVertex2f(-0.05f, 0.03f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(0.05f, 0.03f);
    glVertex2f(0.04f, 0.03f);

    glVertex2f(-0.05f, 0.01f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);

    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glVertex2f(-0.04f, 0.05f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(-0.07f, 0.0f);
    glVertex2f(-0.05f, 0.015f);

    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glVertex2f(0.07f, 0.0f);
    glVertex2f(0.05f, 0.015f);
    glEnd();




    glLoadIdentity();

    glTranslatef(.13,.045,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.007*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();


glTranslatef(.13,.045,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(227, 152, 138);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.006*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();















}


void MLeftDownWindow()
{
    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
//back1
glVertex2f(-0.86f, -0.36f);
glVertex2f(-0.86f, -0.24f);
glVertex2f(-0.80f, -0.24f);
glVertex2f(-0.80f, -0.36f);

//back2
glColor3ub(227, 152, 138);

glVertex2f(-0.858f, -0.36f);
glVertex2f(-0.858f, -0.25f);
glVertex2f(-0.802f, -0.25f);
glVertex2f(-0.802f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.853f, -0.26f);
glVertex2f(-0.853f, -0.36f);
glVertex2f(-0.808f, -0.36f);
glVertex2f(-0.808f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.03*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(227, 152, 138);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.028*cos(theta)),(-.252+.05*sin(theta)));
}
glEnd();







glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.8305+(.0225*cos(theta)),(-.27+.051*sin(theta)));
}
glEnd();







}



void MLeftDownWIndow2()
{
    glTranslatef(.1,0,0);
    MLeftDownWindow();
    glLoadIdentity();
}


void MLeftTopWIndow1()
{
    glScalef(.45,.45,1);
    glTranslatef(-1.139,.9,0);
    MLeftDownWindow();

    glLoadIdentity();
}

void MLeftTopWIndow2()
{
    glTranslatef(.21,0,0);
    MLeftTopWIndow1();
    glLoadIdentity();

}



void Mtopmiddle_window()
{

    glScalef(0.35,.35,1);
    glTranslatef(-1.59,1.1,0);
    Morninglalalala();
    glLoadIdentity();

}

void Mtopmiddle_window2()
{
    glTranslatef(.025,0,0);
    Mtopmiddle_window();

      glTranslatef(.05,0,0);
    Mtopmiddle_window();

      glTranslatef(.075,0,0);
    Mtopmiddle_window();

      glTranslatef(.1,0,0);
    Mtopmiddle_window();
//
      glTranslatef(.125,0,0);
    Mtopmiddle_window();

    glLoadIdentity();
}



void SecondMorningLeftPart()
{
    glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);

glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
//
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);

glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);

glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);



glEnd();


glBegin(GL_QUADS);
glColor3ub(227, 152, 138);

glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);
    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
    glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);

glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);

glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);


glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, -0.365f);
    glEnd();
// glLineWidth(3);



    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);


glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.635f, -0.325f);
glVertex2f(-0.635f, -0.305f);
glVertex2f(-0.65f, -0.36f);



glVertex2f(-0.64f, -0.325f);
glVertex2f(-0.37f, -0.325f);
glVertex2f(-0.37f, -0.310f);
glVertex2f(-0.64f, -0.310f);


    glEnd();



}


void MMiddle1()
{
    glLineWidth(1.5);
  glScalef(.5,1,1);
    glTranslatef(-.369,.05,0);
glBegin(GL_QUADS);
glColor3ub(227, 152, 138);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();



    glBegin(GL_LINES);

glColor3ub(120, 87, 79);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

glEnd();

glLoadIdentity();

}


void MMiddle2()
{
    glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.619f, -0.31f);
glVertex2f(-0.21f, -0.31f);
glVertex2f(-0.19f, -0.05f);
glVertex2f(-0.619f, -0.06f);





    glEnd();


        glBegin(GL_LINES);
    glColor3ub(120, 87, 79);


    glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);

glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);

    glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

    glVertex2f(-0.19f, -0.04f);
        glVertex2f(-0.64f, -0.04f);
    glEnd();
}


void MMiddle3()
{
    glTranslatef(.09,0,0);
    MMiddle1();

    glTranslatef(.18,0,0);
    MMiddle1();

    glTranslatef(.27,0,0);
    MMiddle1();

    glTranslatef(.36,0,0);
    MMiddle1();

    glLoadIdentity();
}


void MLeftMiddleDownWindow1()
{
    glTranslatef(.245,.05,0);
     glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
//back1
glVertex2f(-0.856f, -0.36f);
glVertex2f(-0.856f, -0.24f);
glVertex2f(-0.803f, -0.24f);
glVertex2f(-0.803f, -0.36f);

//back2
glColor3ub(227, 152, 138);

glVertex2f(-0.854f, -0.36f);
glVertex2f(-0.854f, -0.25f);
glVertex2f(-0.805f, -0.25f);
glVertex2f(-0.805f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, -0.26f);
glVertex2f(-0.85f, -0.36f);
glVertex2f(-0.81f, -0.36f);
glVertex2f(-0.81f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.0255*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(227, 152, 138);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.025*cos(theta)),(-.25+.05*sin(theta)));
}
glEnd();






//
glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.02*cos(theta)),(-.27+.05*sin(theta)));
}
glEnd();
//
//
    glLoadIdentity();

}


void MLeftMiddleDownWindow2()
{
    glTranslatef(.09,0,0);
    MLeftMiddleDownWindow1();

        glTranslatef(.18,0,0);
    MLeftMiddleDownWindow1();

        glTranslatef(.27,0,0);
    MLeftMiddleDownWindow1();

        glTranslatef(.36,0,0);
    MLeftMiddleDownWindow1();






    glLoadIdentity();
}


void MMiddle4()
{

glBegin(GL_POLYGON);
glColor3ub(227, 152, 138);
glVertex2f(-0.639f, -0.039f);
glVertex2f(-0.625f, -0.039f);
glVertex2f(-0.625f, 0.16f);
glVertex2f(-0.639f, 0.17f);
glVertex2f(-0.639f, -0.039f);
glEnd();



    glTranslatef(.287,.05,0);
     glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();




}

void MMiddle6()
{
    //piller

   glTranslatef(.08,0,0);
   MMiddle4();

      glTranslatef(.16,0,0);
   MMiddle4();
      glTranslatef(.24,0,0);
   MMiddle4();
      glTranslatef(.32,0,0);
   MMiddle4();
      glTranslatef(.40,0,0);
   MMiddle4();



   glLoadIdentity();
}

void MorningSecondLeftTopWindow1()
{
       glTranslatef(.006,.27,0);
       MLeftMiddleDownWindow1();
   glLoadIdentity();
}

void MorningSecondLeftTopWindow2()
{
       glTranslatef(.08,0,0);
       MorningSecondLeftTopWindow1();

        glTranslatef(.16,0,0);
       MorningSecondLeftTopWindow1();

        glTranslatef(.24,0,0);
       MorningSecondLeftTopWindow1();

        glTranslatef(.32,0,0);
       MorningSecondLeftTopWindow1();



        glLoadIdentity();
}



void MorningDiamondShowroom()
{
       glTranslatef(.054,.21,0);
    MorningWhiteDiamond();
      glLoadIdentity();


    glTranslatef(.22,.155,0);
    MorningWhiteDiamond();

    glTranslatef(.02,0,0);
    MorningWhiteDiamond();

    glTranslatef(.02,0,0);
    MorningWhiteDiamond();

    glTranslatef(.05,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();

        glTranslatef(.05,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();

        glTranslatef(.05,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();


            glTranslatef(.05,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();
    glTranslatef(.02,0,0);
    MorningWhiteDiamond();



   glLoadIdentity();
}


void MMiddle5()
{
    glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);
glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.239f);
glVertex2f(-0.64f, 0.239f);




    //toppest
glVertex2f(-0.649f, 0.325f);
glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);
    glEnd();

//2nd toppest
   glBegin(GL_POLYGON);
    glColor3ub(227, 152, 138);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.648f, 0.26f);
glVertex2f(-0.648f, 0.245f);
glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
        glVertex2f(-0.649f, 0.325f);
        glVertex2f(-0.649f, 0.26f);

        glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);

glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);


glVertex2f(-0.19f, 0.325f);
glVertex2f(-0.649f, 0.325f);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.230f);

glVertex2f(-0.19f, 0.230f);
glVertex2f(-0.64f, 0.230f);

glVertex2f(-0.64f, 0.230f);
glVertex2f(-0.64f, -0.04f);

///
  glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.65f, 0.26f);


   glVertex2f(-0.6485f, 0.26f);
glVertex2f(-0.65f, 0.245f);


 glVertex2f(-0.6485f, 0.245f);
glVertex2f(-0.62f, 0.245f);

   glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);

    glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);

glVertex2f(-0.19f, 0.23f);
glVertex2f(-0.19f, 0.26f);


///

    glEnd();



}

//LEFT PART END


void MorningRightPart()
{

     MorningSky2();
	 SecondMorningRightPart();
    MRight_Down();
    MRight_RightMiddle();
    MRight_Middle();
    MRightUpperWindow();//
     MRightTop();
     MRight_top();
//
     MRightDownWindow();
     MRightDownWIndow2();
     MRightTopWIndow1();
     MRightTopWIndow2();
     MRightTopMiddleWindow();
     RightMorningTopMiddleWindow2();
     MRightMiddle1();
     MRightMiddle2();
     MRightMiddle3();
     MRightMiddleDownWindow1();
     MRightMiddleDownWindow2();
//
//
     MRightMiddle4();
     MRightMiddle6();
MSecondRightTopWindow1();
MSecondRightTopWindow2();
MDiamondShowroom2();
MRightMiddle7();
}

void MorningLeftPart()
{





     MorningSky();
	 SecondMorningLeftPart();
    Mleft_down();
    MMiddle5();
    MleftMiddle();
    MLeftUpperWindow();//
     MLeftTop();
     MLefttop();

    MLeftDownWindow();
    MLeftDownWIndow2();
    MLeftTopWIndow1();
    MLeftTopWIndow2();
    Mtopmiddle_window();
    Mtopmiddle_window2();
    MMiddle1();
    MMiddle2();
    MMiddle3();
    MLeftMiddleDownWindow1();
    MLeftMiddleDownWindow2();


    MMiddle4();
    MMiddle6();
MorningSecondLeftTopWindow1();
MorningSecondLeftTopWindow2();
MorningDiamondShowroom();
}




///

void MorningLeft_stair()
{
glBegin(GL_POLYGON);
glColor3ub(227, 152, 138);

glVertex2f(-0.3f, -0.32f);
glVertex2f(-0.29f, -0.3105f);
glVertex2f(-0.373f, -0.3105f);
glVertex2f(-0.373f, -0.38f);//
glVertex2f(-0.29f, -0.38f);//
glVertex2f(-0.175f, -0.03f);//
glVertex2f(-0.18f, 0.01f);//
glVertex2f(-0.29f, -0.30f);
glEnd();

glLineWidth(2);
// stair_border
    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

//    glVertex2f(-0.3f, -0.32f);
//glVertex2f(-0.29f, -0.3105f);
glVertex2f(-0.295f, -0.3105f);
glVertex2f(-0.373f, -0.3105f);

glVertex2f(-0.373f, -0.3105f);
glVertex2f(-0.373f, -0.38f);

glVertex2f(-0.373f, -0.38f);//
glVertex2f(-0.29f, -0.38f);

glVertex2f(-0.29f, -0.38f);//
glVertex2f(-0.175f, -0.03f);

glVertex2f(-0.175f, -0.03f);//
glVertex2f(-0.18f, 0.01f);

glVertex2f(-0.18f, 0.01f);
glVertex2f(-0.295f, -0.3105f);
    glEnd();

}

void MorningRight_Stair()
{
glRotatef(180,0,1,0);
glPushMatrix();
MorningLeft_stair();
glPopMatrix();
glLoadIdentity();
}

void MorningStair_Step()
{
    glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);

glVertex2f(-0.2918f, -0.385f);
glVertex2f(0.2915f, -0.385f);
glVertex2f(0.175f, -0.03f);
glVertex2f(-0.174f, -0.03f);
    glEnd();




    //start step


    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
glVertex2f(-0.2918f, -0.385f);
glVertex2f(0.2915f, -0.385f);

glVertex2f(-0.29f, -0.38f);
glVertex2f(0.29f, -0.38f);

glVertex2f(-0.289f, -0.375f);
glVertex2f(0.289f, -0.375f);

glVertex2f(-0.288f, -0.370f);
glVertex2f(0.288f, -0.370f);

glVertex2f(-0.284f, -0.360f);
glVertex2f(0.284f, -0.360f);

glVertex2f(-0.283f, -0.358f);
glVertex2f(0.283f, -0.358f);


glVertex2f(-0.279f, -0.348f);
glVertex2f(0.279f, -0.348f);

glVertex2f(-0.278f, -0.346f);
glVertex2f(0.278f, -0.346f);

glVertex2f(-0.275f, -0.336f);
glVertex2f(0.275f, -0.336f);

glVertex2f(-0.274f, -0.334f);
glVertex2f(0.274f, -0.334f);


glVertex2f(-0.271f, -0.324f);
glVertex2f(0.271f, -0.324f);

glVertex2f(-0.270f, -0.322f);
glVertex2f(0.270f, -0.322f);

glVertex2f(-0.267f, -0.312f);
glVertex2f(0.267f, -0.312f);

glVertex2f(-0.266f, -0.310f);
glVertex2f(0.266f, -0.310f);

glVertex2f(-0.263f, -0.300f);
glVertex2f(0.263f, -0.300f);

glVertex2f(-0.262f, -0.298f);
glVertex2f(0.262f, -0.298f);


glVertex2f(-0.259f, -0.288f);
glVertex2f(0.259f, -0.288f);

glVertex2f(-0.256f, -0.278f);
glVertex2f(0.256f, -0.278f);

glVertex2f(-0.255f, -0.276f);
glVertex2f(0.255f, -0.276f);


glVertex2f(-0.252f, -0.266f);
glVertex2f(0.252f, -0.266f);

glVertex2f(-0.251f, -0.262f);
glVertex2f(0.251f, -0.262f);


glVertex2f(-0.248f, -0.252f);
glVertex2f(0.248f, -0.252f);

glVertex2f(-0.247f, -0.250f);
glVertex2f(0.247f, -0.250f);

glVertex2f(-0.244f, -0.240f);
glVertex2f(0.244f, -0.240f);

glVertex2f(-0.243f, -0.238f);
glVertex2f(0.243f, -0.238f);


glVertex2f(-0.240f, -0.228f);
glVertex2f(0.240f, -0.228f);

glVertex2f(-0.239f, -0.226f);
glVertex2f(0.239f, -0.226f);

glVertex2f(-0.236f, -0.216f);
glVertex2f(0.236f, -0.216f);

glVertex2f(-0.231f, -0.212f);
glVertex2f(0.231f, -0.212f);

glVertex2f(-0.23f, -0.202f);
glVertex2f(0.23f, -0.202f);

glVertex2f(-0.228f, -0.200f);
glVertex2f(0.228f, -0.200f);

glVertex2f(-0.227f, -0.190f);
glVertex2f(0.227f, -0.190f);

glVertex2f(-0.226f, -0.188f);
glVertex2f(0.226f, -0.188f);

glVertex2f(-0.225f, -0.186f);
glVertex2f(0.225f, -0.186f);

glVertex2f(-0.222f, -0.176f);
glVertex2f(0.222f, -0.176f);

glVertex2f(-0.221f, -0.172f);
glVertex2f(0.221f, -0.172f);

glVertex2f(-0.219f, -0.162f);
glVertex2f(0.219f, -0.162f);

glVertex2f(-0.218f, -0.160f);
glVertex2f(0.218f, -0.160f);

glVertex2f(-0.216f, -0.150f);
glVertex2f(0.216f, -0.150f);

glVertex2f(-0.215f, -0.148f);
glVertex2f(0.215f, -0.148f);

glVertex2f(-0.213f, -0.138f);
glVertex2f(0.213f, -0.138f);

glVertex2f(-0.212f, -0.136f);
glVertex2f(0.212f, -0.136f);

glVertex2f(-0.210f, -0.126f);
glVertex2f(0.210f, -0.126f);
glVertex2f(-0.209f, -0.124f);
glVertex2f(0.209f, -0.124f);


glVertex2f(-0.207f, -0.114f);
glVertex2f(0.207f, -0.114f);

glVertex2f(-0.206f, -0.112f);
glVertex2f(0.206f, -0.112f);

glVertex2f(-0.204f, -0.102f);
glVertex2f(0.204f, -0.102f);

glVertex2f(-0.203f, -0.100f);
glVertex2f(0.203f, -0.100f);

glVertex2f(-0.200f, -0.090f);
glVertex2f(0.200f, -0.090f);

glVertex2f(-0.199f, -0.088f);
glVertex2f(0.199f, -0.088f);


glVertex2f(-0.195f, -0.078f);
glVertex2f(0.195f, -0.078f);

glVertex2f(-0.191f, -0.072f);
glVertex2f(0.191f, -0.072f);

glVertex2f(-0.187f, -0.062f);
glVertex2f(0.187f, -0.062f);

glVertex2f(-0.186f, -0.060f);
glVertex2f(0.186f, -0.060f);


glVertex2f(-0.186f, -0.060f);
glVertex2f(0.186f, -0.060f);

glVertex2f(-0.183f, -0.05f);
glVertex2f(0.183f, -0.050f);

glVertex2f(-0.182f, -0.048f);
glVertex2f(0.182f, -0.048f);

glVertex2f(-0.179f, -0.038f);
glVertex2f(0.179f, -0.038f);

glVertex2f(-0.178f, -0.036f);
glVertex2f(0.178f, -0.036f);

//glVertex2f(-0.175f, -0.026f);
//glVertex2f(0.175f, -0.026f);
//
//glVertex2f(-0.174f, -0.024f);
//glVertex2f(0.174f, -0.024f);


    glEnd();






}





void MorningMiddleQuad()
{

glBegin(GL_QUADS);
glColor3ub(227, 152, 138);

glVertex2f(-0.189f, 0.325f);
glVertex2f(-0.189f, -0.05f);
glVertex2f(0.189f, -0.05f);
glVertex2f(0.189f, 0.325f);

//glVertex2f(-0.189f, -0.01f);
//glVertex2f(-0.18f, 0.01f);
//glVertex2f(-0.18f, 0.36f);
//glVertex2f(-0.189f, 0.36f);
    glEnd();




        glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

    glVertex2f(-0.189f, 0.325f);
glVertex2f(-0.189f, -0.05f);
glVertex2f(-0.189f, -0.05f);
glVertex2f(0.189f, -0.05f);
glVertex2f(0.189f, -0.05f);
glVertex2f(0.189f, 0.325f);
glVertex2f(0.189f, 0.325f);
    glVertex2f(-0.189f, 0.325f);



    //base

//glVertex2f(-0.175f, -0.01f);
//
//glVertex2f(-0.18f, -0.03f);
//glVertex2f(-0.148f, -0.03f);
//
//glVertex2f(-0.155f, -0.001f);

    glEnd();

}

void MMiddleLeftPiller()
{
glTranslatef(.005,0,0);
        glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);

    glVertex2f(-0.187f, 0.378f);
glVertex2f(-0.187f, 0.323f);
glVertex2f(-0.142f, 0.323f);
glVertex2f(-0.142f, 0.378f);
    glEnd();

        glBegin(GL_LINES);
glColor3ub(120, 87, 79);

//glVertex2f(-0.189f, -0.01f);
//glVertex2f(-0.175f, 0.01f);
//
//glVertex2f(-0.175f, 0.01f);
//glVertex2f(-0.175f, 0.36f);
//
//glVertex2f(-0.175f, 0.36f);
//glVertex2f(-0.189f, 0.36f);
//
//glVertex2f(-0.189f, 0.36f);
//glVertex2f(-0.189f, -0.01f);

//iiiiiiiiiiiiiii
glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.155f, -0.01f);

glVertex2f(-0.155f, -0.01f);
glVertex2f(-0.155f, 0.38f);

glVertex2f(-0.155f, 0.38f);
glVertex2f(-0.175f, 0.38f);


///

///////////////////////////
glVertex2f(-0.187f, 0.40f);
glVertex2f(-0.187f, -0.01f);

glVertex2f(-0.187f, -0.01f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.175f, 0.41f);

glVertex2f(-0.175f, 0.41f);
glVertex2f(-0.187f, 0.40f);



    glEnd();






  glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.33,0,0);
glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.189f, -0.035f);
glVertex2f(-0.175f, 0.00f);

glVertex2f(-0.175f, 0.00f);
glVertex2f(-0.175f, 0.38f);

glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.189f, 0.38f);

glVertex2f(-0.189f, 0.38f);
glVertex2f(-0.189f, -0.035f);


glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



glLoadIdentity();

    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

glVertex2f(-0.17f, -.012);
glVertex2f(-0.178f, -0.03f);

glEnd();


}






void MorningMiddleTop()
{
    glScalef(.91,1,1);
    glTranslatef(.71,.05,0);
        glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);


/////////////////////

glVertex2f(-0.91f, 0.35f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);
/////////////////////
    glEnd();



glBegin(GL_POLYGON);
glColor3ub(227, 152, 138);

glVertex2f(-0.90f, 0.355f);
glVertex2f(-0.89f, 0.365f);
glVertex2f(-0.89f, 0.375f);
glVertex2f(-0.88f, 0.375f);
glVertex2f(-0.875f, 0.365f);
glVertex2f(-0.87f, 0.355f);


glEnd();


glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.895f, 0.37f);

glVertex2f(-0.895f, 0.37f);
glVertex2f(-0.89f, 0.38f);

glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

    glEnd();


    glLineWidth(2);
        glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

glVertex2f(-0.91f, 0.34f);
glVertex2f(-0.91f, 0.331f);


glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);


glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);


glVertex2f(-0.86f, 0.36f);
glVertex2f(-0.88f, 0.36f);

    glEnd();


        glLoadIdentity();

        /////////////////////

     glScalef(.91,1,1);
    glTranslatef(.74,.11,0);

        double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();




glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(227, 152, 138);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();


glLoadIdentity();




}



///////////////////////////////////////////////////////////////////
//Tight Middle





void MorningRightMiddleTop()
{
    glRotatef(180,0,1,0);
glPushMatrix();
    glScalef(.91,1,1);
    glTranslatef(.71,.05,0);
        glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);


/////////////////////

glVertex2f(-0.91f, 0.35f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);
/////////////////////
    glEnd();



glBegin(GL_POLYGON);
glColor3ub(227, 152, 138);

glVertex2f(-0.90f, 0.355f);
glVertex2f(-0.89f, 0.365f);
glVertex2f(-0.89f, 0.375f);
glVertex2f(-0.88f, 0.375f);
glVertex2f(-0.875f, 0.365f);
glVertex2f(-0.87f, 0.355f);


glEnd();


glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.895f, 0.37f);

glVertex2f(-0.895f, 0.37f);
glVertex2f(-0.89f, 0.38f);

glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

    glEnd();


    glLineWidth(2);
        glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

glVertex2f(-0.91f, 0.34f);
glVertex2f(-0.91f, 0.331f);


glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);


glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);


glVertex2f(-0.86f, 0.36f);
glVertex2f(-0.88f, 0.36f);

    glEnd();


        glLoadIdentity();
        glPopMatrix();
        glLoadIdentity();

        /////////////////////
        glRotatef(180,0,1,0);
glPushMatrix();

     glScalef(.91,1,1);
    glTranslatef(.74,.11,0);

        double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();




glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(227, 152, 138);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();


glLoadIdentity();
glPopMatrix();
glLoadIdentity();




}




void MorningRightMiddleLeftPiller()
{
    glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.005,0,0);
        glBegin(GL_QUADS);
    glColor3ub(227, 152, 138);

    glVertex2f(-0.187f, 0.378f);
glVertex2f(-0.187f, 0.323f);
glVertex2f(-0.142f, 0.323f);
glVertex2f(-0.142f, 0.378f);
    glEnd();

        glBegin(GL_LINES);
glColor3ub(120, 87, 79);

//glVertex2f(-0.189f, -0.01f);
//glVertex2f(-0.175f, 0.01f);
//
//glVertex2f(-0.175f, 0.01f);
//glVertex2f(-0.175f, 0.36f);
//
//glVertex2f(-0.175f, 0.36f);
//glVertex2f(-0.189f, 0.36f);
//
//glVertex2f(-0.189f, 0.36f);
//glVertex2f(-0.189f, -0.01f);

//iiiiiiiiiiiiiii
glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.155f, -0.01f);

glVertex2f(-0.155f, -0.01f);
glVertex2f(-0.155f, 0.38f);

glVertex2f(-0.155f, 0.38f);
glVertex2f(-0.175f, 0.38f);


///

///////////////////////////
glVertex2f(-0.187f, 0.40f);
glVertex2f(-0.187f, -0.01f);

glVertex2f(-0.187f, -0.01f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.175f, 0.41f);

glVertex2f(-0.175f, 0.41f);
glVertex2f(-0.187f, 0.40f);



    glEnd();


glPopMatrix();
glLoadIdentity();





  glRotatef(360,0,1,0);
glPushMatrix();
glTranslatef(.325,0,0);
glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.189f, -0.035f);
glVertex2f(-0.175f, 0.00f);

glVertex2f(-0.175f, 0.00f);
glVertex2f(-0.175f, 0.38f);

glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.189f, 0.38f);

glVertex2f(-0.189f, 0.38f);
glVertex2f(-0.189f, -0.035f);


glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



glLoadIdentity();
glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

glVertex2f(-0.17f, -.012);
glVertex2f(-0.178f, -0.03f);

glEnd();
glPopMatrix();
glLoadIdentity();


}



//////////////////////////////////////////Right Middle End

void MorningMiddleTop1()
{
    glTranslatef(-.005,0,0);
     glBegin(GL_POLYGON);
    glColor3ub(227, 152, 138);

glVertex2f(-0.10f, 0.325f);
glVertex2f(0.11f, 0.325f);
glVertex2f(0.11f, 0.47f);
glVertex2f(0.07f, 0.49f);
glVertex2f(-0.05f, 0.49f);
glVertex2f(-0.10f, 0.47f);
    glEnd();





    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
glVertex2f(-0.10f, 0.325f);
glVertex2f(0.11f, 0.325f);
glVertex2f(0.11f, 0.325f);
glVertex2f(0.11f, 0.47f);
glVertex2f(0.11f, 0.47f);
glVertex2f(0.07f, 0.49f);
glVertex2f(0.07f, 0.49f);
glVertex2f(-0.05f, 0.49f);
glVertex2f(-0.05f, 0.49f);
glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.325f);
    glEnd();

    glLoadIdentity();
}


void MorningMiddleTop2()
{
glTranslatef(0,0.0,0);
   glBegin(GL_POLYGON);
    glColor3ub(227, 152, 138);

    glVertex2f(-0.10f, 0.45f);
glVertex2f(-0.13f, 0.48f);
glVertex2f(-0.06f, 0.51f);
glVertex2f(0.07f, 0.51f);
glVertex2f(0.13f, 0.48f);
glVertex2f(0.11f, 0.45f);
    glEnd();







    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
          glVertex2f(-0.10f, 0.45f);
glVertex2f(-0.13f, 0.48f);

 glVertex2f(-0.13f, 0.48f);
glVertex2f(-0.06f, 0.51f);


  glVertex2f(-0.06f, 0.51f);
glVertex2f(0.07f, 0.51f);

  glVertex2f(0.07f, 0.51f);
glVertex2f(0.13f, 0.48f);

 glVertex2f(0.13f, 0.48f);
glVertex2f(0.11f, 0.45f);

 glVertex2f(0.11f, 0.45f);
      glVertex2f(-0.10f, 0.45f);

    glEnd();










    glLoadIdentity();

}



void MorningMiddleTop3()
{

    glTranslatef(-0.005,.02,0);
    glBegin(GL_POLYGON);
    glColor3ub(227, 152, 138);

    glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.487f);//
glVertex2f(-0.05f, 0.515f);
glVertex2f(0.06f, 0.515f);
glVertex2f(0.11f, 0.49f);//
glVertex2f(0.11f, 0.47f);


    glEnd();

glLineWidth(6);

    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);




    glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.487f);//


glVertex2f(-0.10f, 0.487f);//
glVertex2f(-0.05f, 0.515f);

glVertex2f(-0.05f, 0.515f);
glVertex2f(0.06f, 0.515f);


glVertex2f(0.06f, 0.515f);
glVertex2f(0.11f, 0.49f);//


glVertex2f(0.11f, 0.49f);//
glVertex2f(0.11f, 0.47f);


glVertex2f(0.11f, 0.47f);
    glVertex2f(-0.10f, 0.47f);

    glEnd();



    glLoadIdentity();
}





void MorningMiddleTop4()
{

     glBegin(GL_TRIANGLES);

 glColor3ub(120, 87, 79);
 glVertex2f(-0.012,.694);
 glVertex2f(0.012,.694);
 glVertex2f(0,.8);
 glEnd();

 glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
    glVertex2f(0,.75);
    glVertex2f(0,.82);




    glEnd();

 glLineWidth(1.5);

    //////////////////////
    double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(0+(.107*cos(theta)),(.46+.24*sin(theta)));
}
glEnd();



glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(227, 152, 138);
    theta=i*3.1416/180;
    glVertex2f(0+(.104*cos(theta)),(.46+.236*sin(theta)));
}
glEnd();


glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(0+(.055*cos(theta)),(.46+.24*sin(theta)));
}
glEnd();


glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(227, 152, 138);
    theta=i*3.1416/180;
    glVertex2f(0+(.052*cos(theta)),(.46+.236*sin(theta)));
}
glEnd();


glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(0+(.02*cos(theta)),(.69+.021*sin(theta)));
}
glEnd();



glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
   glColor3ub(227, 152, 138);
    theta=i*3.1416/180;
    glVertex2f(0+(.017*cos(theta)),(.694+.012*sin(theta)));
}
glEnd();






}



void MorningMiddleTop5()
{
        glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
    glVertex2f(-0.137f, 0.30f);
glVertex2f(0.137f, 0.30f);

    glVertex2f(-0.137f, 0.288f);
glVertex2f(0.137f, 0.288f);

    glEnd();
}

void MorningMiddleTop6()
{
    glScalef(1.9,1.26,1);
glTranslatef(0.875,.06,0);
glBegin(GL_LINES);
glColor3ub(120, 87, 79);


glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);

//
glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.892f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glEnd();

glLoadIdentity();
}


void MorningMiddleTop7()
{

    glTranslatef(.12,0,0);
    MorningMiddleTop6();
    glLoadIdentity();
}



void MorningTopMiddleWindow1()
{
    glScalef(.7,1.8,1);
    glTranslatef(.68,.34,0);
    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
//back1
glVertex2f(-0.86f, -0.36f);
glVertex2f(-0.86f, -0.24f);
glVertex2f(-0.80f, -0.24f);
glVertex2f(-0.80f, -0.36f);

glEnd();




double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.03*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();

glLoadIdentity();

}

void MorningTopMiddleWindow2()
{
    glTranslatef(.214,0,0);
    MorningTopMiddleWindow1();
    glLoadIdentity();


    glScalef(1.7,1,1);
        glTranslatef(.107,0,0);
    MorningTopMiddleWindow1();
    glLoadIdentity();



        glScalef(1.4,.47,1);
        glTranslatef(.107,.723,0);
    MorningTopMiddleWindow1();
    glLoadIdentity();





}

///
void MorningLeftMiddlePart()
{
MorningMiddleTop();
MorningMiddleQuad();
MorningStair_Step();
MMiddleLeftPiller();

}


void MorningRightMiddlePart()
{
MorningRightMiddleTop();
MorningRightMiddleLeftPiller();//

MorningLeft_stair();
MorningRight_Stair();

}

void MorningCenter()
{
    MorningLeftMiddlePart();
    MorningRightMiddlePart();


    MorningMiddleTop4();
    MorningMiddleTop3();
    glLineWidth(1.5);
    MorningMiddleTop2();
    MorningMiddleTop1();
    MorningMiddleTop5();
    MorningMiddleTop6();
    MorningMiddleTop7();
    MorningTopMiddleWindow1();
    MorningTopMiddleWindow2();



}

///*** Airplane model***///
//void airplane_model()
//{
//    ///Airplane body
//    glBegin(GL_POLYGON);
//    glColor3f(0.0, 0.0, 0.5);
//	glVertex2f(.01, .9);
//	glVertex2f(.06, .9);
//	glVertex2f(.09, .84);
//	glVertex2f(.01, .84);
//	glEnd();
//	glBegin(GL_POLYGON);
//    glColor3f(0.8, 0.8, 1.5);
//	glVertex2f(.01, .84);
//	glVertex2f(.28, .84);
//	glVertex2f(.3, .82);
//	glVertex2f(.32, .82);
//	glVertex2f(.33, .8);
//	glVertex2f(.32, .78);
//	glVertex2f(.03, .78);
//	glVertex2f(.01, .8);
//	glVertex2f(.01, .84);
//	glEnd();
//    ///Airplane lower red part
//	glBegin(GL_POLYGON);
//    glColor3f(0.8, 0.0, 0.0);
//    glVertex2f(.33, .8);
//	glVertex2f(.32, .78);
//	glVertex2f(.03, .78);
//	glVertex2f(.01, .8);
//	glEnd();
//    ///Airplane windows
//    glBegin(GL_TRIANGLES);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.28, .84);
//	glVertex2f(.3, .82);
//	glVertex2f(.28, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.2, .83);
//	glVertex2f(.21, .83);
//	glVertex2f(.21, .82);
//	glVertex2f(.2, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.22, .83);
//	glVertex2f(.23, .83);
//	glVertex2f(.23, .82);
//	glVertex2f(.22, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.18, .83);
//	glVertex2f(.19, .83);
//	glVertex2f(.19, .82);
//	glVertex2f(.18, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.16, .83);
//	glVertex2f(.17, .83);
//	glVertex2f(.17, .82);
//	glVertex2f(.16, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.14, .83);
//	glVertex2f(.15, .83);
//	glVertex2f(.15, .82);
//	glVertex2f(.14, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.12, .83);
//	glVertex2f(.13, .83);
//	glVertex2f(.13, .82);
//	glVertex2f(.12, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.1, .83);
//	glVertex2f(.11, .83);
//	glVertex2f(.11, .82);
//	glVertex2f(.1, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.08, .83);
//	glVertex2f(.09, .83);
//	glVertex2f(.09, .82);
//	glVertex2f(.08, .82);
//	glEnd();
//    ///Airplane wings
//    glBegin(GL_POLYGON);
//    glColor3f(0.0, 0.0, 0.5);
//	glVertex2f(.13, .84);
//	glVertex2f(.12, .87);
//	glVertex2f(.16, .87);
//	glVertex2f(.19, .84);
//	glEnd();
//    glBegin(GL_POLYGON);
//    glColor3f(0.0, 0.0, 0.5);
//	glVertex2f(.13, .78);
//	glVertex2f(.12, .75);
//	glVertex2f(.16, .75);
//	glVertex2f(.19, .78);
//	glEnd();
//}


//void airplane_Rotate(){
//    glTranslatef(1,0,0);
//    glRotatef(180,0,1,0);
//    glPushMatrix();
//    airplane_model();
//    glPopMatrix();
//    glLoadIdentity();
//
//}

//void Dynamic_Airplane()
//{
//    glPushMatrix();
//    glTranslatef(position2,0,0);
//    airplane_Rotate();
//    glPopMatrix();
//    glLoadIdentity();
//}












///Morning End




///Cloudy Start
///..........................///






void CloudySky2()
{
//sky
    glBegin(GL_QUADS);
    glColor3ub(110, 111, 112);
    glVertex2f(-1.00f, -0.19f);
glVertex2f(-1.00f, 1.00f);
glVertex2f(1.00f, 1.00f);
glVertex2f(1.00f, -0.19f);



//ground
 glColor3ub(78,138,94);
  glVertex2f(-1.00f, -0.19f);
    glVertex2f(-1, -1);
     glVertex2f(1, -1);
     glVertex2f(1.00f, -0.19f);


    glEnd();


    glRotatef(180,0,1,0);
glPushMatrix();

//Left Middle part
    glBegin(GL_QUADS);
glColor3ub(168, 112, 99);

glVertex2f(-0.90f, 0.18f);
glVertex2f(-0.90f, -0.1f);
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, 0.18f);

glEnd();

glPopMatrix();
glLoadIdentity();


}

void CloudyWhiteDiamond()
{

        glBegin(GL_QUADS);
    glColor3ub(110, 111, 112);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

}

void CRight_Down()
{
    glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_QUADS);
    glColor3ub(79, 56, 51);;
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.91f, -0.38f);
glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.65f, -0.36f);
glEnd();




  glBegin(GL_QUADS);
  glColor3ub(168, 112, 99);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.22,0,0);
  glBegin(GL_QUADS);
  glColor3ub(168, 112, 99);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glLineWidth(2);

glRotatef(180,0,1,0);
glPushMatrix();
//Left Down Border start
glBegin(GL_LINES);

glColor3ub(79, 56, 51);;


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

//Left Down Border End
glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);

glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);

glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

glVertex2f(-0.65f, -0.11f);
glVertex2f(-0.65f, -0.09f);

glEnd();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.22,0,0);
glBegin(GL_LINES);

glColor3ub(79, 56, 51);;


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);


//
glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);
glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();




glRotatef(180,0,1,0);
glPushMatrix();
  glBegin(GL_QUADS);
  glColor3ub(168, 112, 99);

glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

//leftDown middle
glVertex2f(-0.87f, -0.112f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.69f, -0.36f);
glVertex2f(-0.69f, -0.112f);

glEnd();


//left down piller start

glBegin(GL_LINES);
glColor3ub(79, 56, 51);;

glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.78f, -0.35f);

glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.77f, -0.35f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.77f, -0.12f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.78f, -0.12f);



glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.785f, -0.36f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.765f, -0.36f);


glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.785f, -0.11f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.765f, -0.11f);

glEnd();
//left down piller End
glPopMatrix();
glLoadIdentity();

}


void CRight_Middle()
{

//upper
glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
      glColor3ub(168, 112, 99);
glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);

glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.01,0,0);
//left mddle piller1
glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);


glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);


    glEnd();
    glLoadIdentity();

    glPopMatrix();
    glLoadIdentity();

//left mddle piller border1
glRotatef(180,0,1,0);
glPushMatrix();
 glBegin(GL_LINES);
  glColor3ub(79, 56, 51);;

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);


glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);


glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);


glVertex2f(-0.92f, 0.21f);
glVertex2f(-0.92f, 0.18f);


glEnd();

glPopMatrix();
glLoadIdentity();

//second left piller2

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.025,0,0);

glBegin(GL_LINES);
  glColor3ub(79, 56, 51);;

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();

///3
glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.245,0,0);
 glBegin(GL_LINES);
  glColor3ub(79, 56, 51);;

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.915f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.895f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();

glPopMatrix();
glLoadIdentity();

////////////////

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.22,0,0);

glBegin(GL_LINES);
  glColor3ub(79, 56, 51);;

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();

glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.128,0,0);
 glBegin(GL_LINES);
  glColor3ub(79, 56, 51);;

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//


glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();

glPopMatrix();
glLoadIdentity();



}


void CRightUpperWindow()
{
    glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(79, 56, 51);;
    glVertex2f(-0.855f, 0.07f);
    glVertex2f(-0.855f, -0.02f);
    glVertex2f(-0.805f, -0.02f);
    glVertex2f(-0.805f, 0.07f);



    //right window
    glVertex2f(-0.755f, 0.07f);
glVertex2f(-0.755f, -0.02f);
glVertex2f(-0.705f, -0.02f);
glVertex2f(-0.705f, 0.07f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;

    glVertex2f(-0.87f, 0.07f);
glVertex2f(-0.79f, 0.07f);

glVertex2f(-0.79f, 0.07f);
glVertex2f(-0.81f, 0.09f);

glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.85f, 0.09f);

glVertex2f(-0.85f, 0.09f);
glVertex2f(-0.87f, 0.07f);


//right window top
glVertex2f(-0.77f, 0.07f);
glVertex2f(-0.69f, 0.07f);

glVertex2f(-0.69f, 0.07f);
glVertex2f(-0.71f, 0.09f);

glVertex2f(-0.71f, 0.09f);
glVertex2f(-0.75f, 0.09f);

glVertex2f(-0.75f, 0.09f);
glVertex2f(-0.77f, 0.07f);




//top of window
glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(110, 111, 112);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glPopMatrix();
    glLoadIdentity();



    glRotatef(180,0,1,0);
glPushMatrix();

    glTranslatef(.022,0,0);
        glBegin(GL_QUADS);
    glColor3ub(110, 111, 112);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.1,0,0);
glBegin(GL_LINES);
glColor3ub(79, 56, 51);;

glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();

glBegin(GL_QUADS);
glColor3ub(110, 111, 112);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

glEnd();
 glPopMatrix();
 glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.12,0,0);
glBegin(GL_QUADS);

glColor3ub(110, 111, 112);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

glEnd();
glLoadIdentity();
glPopMatrix();

glLoadIdentity();


    glLoadIdentity();

}

void CloudytopCircle1()
{
double theta;
glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();

}

void CloudytopCircle2()
{
    double theta;

    glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(168, 112, 99);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();
}

void CRightTop()
{
    glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);
glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);
glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);
glEnd();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(-.02,0,0);
glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

////////////////
glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.01,0,0);
glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//**************
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//**********
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//**********
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//************
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();
glBegin(GL_LINES);
glColor3ub(79, 56, 51);;
boolean check=true;
glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);

glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);

glVertex2f(-0.95f, 0.24f);
glVertex2f(-0.91f, 0.21f);

glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);

glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);


//top
glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);

glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);

glVertex2f(-0.91f, 0.33f);
glVertex2f(-0.91f, 0.243f);

glVertex2f(-0.91f, 0.24f);
glVertex2f(-0.91f, 0.36f);

glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.92f, 0.34f);

glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

glVertex2f(-0.92f, 0.24f);
glVertex2f(-0.91f, 0.24f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);


glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);


glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);


glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

//
glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.33f);

glVertex2f(-0.71f, 0.33f);
glVertex2f(-0.70f, 0.33f);

glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.71f, 0.35f);

//


glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.65f, 0.36f);

glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.70f, 0.33f);

glEnd();


glBegin(GL_QUADS);
glColor3ub(168, 112, 99);

glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);


//
glVertex2f(-0.911f, 0.24f);
glVertex2f(-0.911f, 0.36f);
glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

//
glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);

glEnd();



glBegin(GL_POLYGON);
glColor3ub(168, 112, 99);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);


glEnd();

glPopMatrix();
glLoadIdentity();



glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.03,.06,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();



glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(168, 112, 99);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glBegin(GL_QUADS);
glColor3ub(168, 112, 99);

glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.331f);
glVertex2f(-0.70f, 0.331f);
glVertex2f(-0.70f, 0.36f);

//


glVertex2f(-0.699f, 0.331f);
glVertex2f(-0.65f, 0.331f);
glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.699f, 0.36f);
glEnd();

glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.21,0,0);

glBegin(GL_POLYGON);
glColor3ub(168, 112, 99);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.21,0,0);
CloudytopCircle1();
glLoadIdentity();

glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.21,0,0);
CloudytopCircle2();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



}

void CRight_top()
{
    glRotatef(180,0,1,0);
    glPushMatrix();

    glScalef(1,.6,1);
    glTranslatef(-.788,.553,0);
    glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.05f, 0.03f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(-0.04f, 0.03f);
    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(168, 112, 99);
    glVertex2f(-0.05f, 0.015f);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(0.05f, 0.015f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glEnd();
//////////////////////////////////////////////////////////////////////

    glLineWidth(1);
   glBegin(GL_LINES);
   glColor3ub(79, 56, 51);;

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);

    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f, 0.03f);

    glVertex2f(-0.05f, 0.03f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(0.05f, 0.03f);
    glVertex2f(0.04f, 0.03f);

    glVertex2f(-0.05f, 0.01f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);

    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glVertex2f(-0.04f, 0.05f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(-0.07f, 0.0f);
    glVertex2f(-0.05f, 0.015f);

    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glVertex2f(0.07f, 0.0f);
    glVertex2f(0.05f, 0.015f);
    glEnd();

    glLoadIdentity();
    glPopMatrix();
    glLoadIdentity();


    glRotatef(180,0,1,0);
glPushMatrix();


    glTranslatef(.13,.045,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.916+(.007*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.13,.045,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(168, 112, 99);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.006*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


}


void CRightDownWindow()
{

    glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
//back1
glVertex2f(-0.86f, -0.36f);
glVertex2f(-0.86f, -0.24f);
glVertex2f(-0.80f, -0.24f);
glVertex2f(-0.80f, -0.36f);

//back2
glColor3ub(168, 112, 99);

glVertex2f(-0.858f, -0.36f);
glVertex2f(-0.858f, -0.25f);
glVertex2f(-0.802f, -0.25f);
glVertex2f(-0.802f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.853f, -0.26f);
glVertex2f(-0.853f, -0.36f);
glVertex2f(-0.808f, -0.36f);
glVertex2f(-0.808f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.83+(.03*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(168, 112, 99);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.028*cos(theta)),(-.252+.05*sin(theta)));
}
glEnd();







glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.8305+(.0225*cos(theta)),(-.27+.051*sin(theta)));
}
glEnd();

glPopMatrix();
glLoadIdentity();





}



void CRightDownWIndow2()
{
    glTranslatef(-.1,0,0);
    CRightDownWindow();
    glLoadIdentity();

}


void CRightTopWIndow1()
{

    glScalef(.45,.45,1);
    glTranslatef(1.139,.9,0);
    CRightDownWindow();
    glLoadIdentity();
}

void CRightTopWIndow2()
{

    glTranslatef(-.21,0,0);
    CRightTopWIndow1();
    glLoadIdentity();


}


void Cloudylalalala()
{

//front
    glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.85f, -0.26f);
glVertex2f(-0.85f, -0.36f);
glVertex2f(-0.81f, -0.36f);
glVertex2f(-0.81f, -0.26f);


glEnd();


double theta;





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.83+(.02*cos(theta)),(-.27+.05*sin(theta)));
}
glEnd();




}


void CRightTopMiddleWindow()
{
glRotatef(180,0,1,0);
glPushMatrix();
    glScalef(0.35,.35,1);
    glTranslatef(-1.59,1.1,0);
    Cloudylalalala();
    glLoadIdentity();
    glPopMatrix();
    glLoadIdentity();

}

void RightCloudyTopMiddleWindow2()
{
    glTranslatef(-.025,0,0);
    CRightTopMiddleWindow();

      glTranslatef(-.05,0,0);
    CRightTopMiddleWindow();

      glTranslatef(-.075,0,0);
    CRightTopMiddleWindow();

      glTranslatef(-.1,0,0);
    CRightTopMiddleWindow();
//
      glTranslatef(-.125,0,0);
    CRightTopMiddleWindow();

    glLoadIdentity();
}



void SecondCloudyRightPart()
{

glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);

glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;
//
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);

glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);

glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);



glEnd();


glBegin(GL_QUADS);
glColor3ub(168, 112, 99);

glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);
    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;
    glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);

glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);

glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);


glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, -0.365f);
    glEnd();
// glLineWidth(3);



    glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;


glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.635f, -0.325f);
glVertex2f(-0.635f, -0.305f);
glVertex2f(-0.65f, -0.36f);



glVertex2f(-0.64f, -0.325f);
glVertex2f(-0.37f, -0.325f);
glVertex2f(-0.37f, -0.310f);
glVertex2f(-0.64f, -0.310f);


    glEnd();
    glPopMatrix();
    glLoadIdentity();



}


void CRightMiddle1()
{
glRotatef(180,0,1,0);
glPushMatrix();
glLineWidth(1.5);

glScalef(.5,1,1);
glTranslatef(-.369,.05,0);
glBegin(GL_QUADS);
glColor3ub(168, 112, 99);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();



    glBegin(GL_LINES);

glColor3ub(79, 56, 51);;


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

}


void CRightMiddle2()
{

    glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.619f, -0.31f);
glVertex2f(-0.21f, -0.31f);
glVertex2f(-0.19f, -0.05f);
glVertex2f(-0.619f, -0.06f);





    glEnd();


        glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;


    glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);

glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);

    glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

    glVertex2f(-0.19f, -0.04f);
        glVertex2f(-0.64f, -0.04f);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
}


void CRightMiddle3()
{
    glTranslatef(-.09,0,0);
    CRightMiddle1();

    glTranslatef(-.18,0,0);
    CRightMiddle1();

    glTranslatef(-.27,0,0);
    CRightMiddle1();

    glTranslatef(-.36,0,0);
    CRightMiddle1();

    glLoadIdentity();
}


void CRightMiddleDownWindow1()
{

    glRotatef(180,0,1,0);
glPushMatrix();
    glTranslatef(.245,.05,0);
     glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
//back1
glVertex2f(-0.856f, -0.36f);
glVertex2f(-0.856f, -0.24f);
glVertex2f(-0.803f, -0.24f);
glVertex2f(-0.803f, -0.36f);

//back2
glColor3ub(168, 112, 99);

glVertex2f(-0.854f, -0.36f);
glVertex2f(-0.854f, -0.25f);
glVertex2f(-0.805f, -0.25f);
glVertex2f(-0.805f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.85f, -0.26f);
glVertex2f(-0.85f, -0.36f);
glVertex2f(-0.81f, -0.36f);
glVertex2f(-0.81f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.83+(.0255*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(168, 112, 99);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.025*cos(theta)),(-.25+.05*sin(theta)));
}
glEnd();






//
glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.83+(.02*cos(theta)),(-.27+.05*sin(theta)));
}
glEnd();
//
//
    glLoadIdentity();

    glPopMatrix();
    glLoadIdentity();

}


void CRightMiddleDownWindow2()
{
    glTranslatef(-.09,0,0);
    CRightMiddleDownWindow1();

        glTranslatef(-.18,0,0);
    CRightMiddleDownWindow1();

        glTranslatef(-.27,0,0);
    CRightMiddleDownWindow1();

        glTranslatef(-.36,0,0);
    CRightMiddleDownWindow1();

    glLoadIdentity();
}


void CRightMiddle4()
{
glRotatef(180,0,1,0);
glPushMatrix();

glBegin(GL_POLYGON);
glColor3ub(168, 112, 99);
glVertex2f(-0.639f, -0.039f);
glVertex2f(-0.625f, -0.039f);
glVertex2f(-0.625f, 0.16f);
glVertex2f(-0.639f, 0.17f);
glVertex2f(-0.639f, -0.039f);
glEnd();

glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

    glTranslatef(.287,.05,0);
     glBegin(GL_LINES);
  glColor3ub(79, 56, 51);;

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



}

void CRightMiddle6()
{
    //piller


//   glTranslatef(-.08,0,0);
//   RightMiddle4();
//
//      glTranslatef(-.16,0,0);
//   RightMiddle4();
//      glTranslatef(-.24,0,0);
//   RightMiddle4();
//      glTranslatef(-.32,0,0);
//   RightMiddle4();
//      glTranslatef(-.40,0,0);
//   RightMiddle4();

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.367,0.05,0);

 glBegin(GL_LINES);
  glColor3ub(79, 56, 51);;

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();

   glLoadIdentity();
   glPopMatrix();
   glLoadIdentity();
}

void CRightMiddle7()
{
    glTranslatef(-.08,0,0);
    CRightMiddle6();
    glLoadIdentity();

        glTranslatef(-.16,0,0);
    CRightMiddle6();
    glLoadIdentity();

        glTranslatef(-.24,0,0);
    CRightMiddle6();
    glLoadIdentity();

        glTranslatef(-.32,0,0);
    CRightMiddle6();
    glLoadIdentity();
}

void CSecondRightTopWindow1()
{
       glTranslatef(-.006,.27,0);
       CRightMiddleDownWindow1();
   glLoadIdentity();
}

void CSecondRightTopWindow2()
{
       glTranslatef(-.08,0,0);
       CSecondRightTopWindow1();

        glTranslatef(-.16,0,0);
       CSecondRightTopWindow1();

        glTranslatef(-.24,0,0);
       CSecondRightTopWindow1();

        glTranslatef(-.32,0,0);
       CSecondRightTopWindow1();



        glLoadIdentity();
}



void CDiamondShowroom2()
{
    glRotatef(180,0,1,0);
glPushMatrix();
       glTranslatef(.054,.21,0);
       CloudyWhiteDiamond();
      glLoadIdentity();
glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

    glTranslatef(.22,.155,0);
    CloudyWhiteDiamond();

    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();

    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();

    glTranslatef(.05,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();

        glTranslatef(.05,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();

        glTranslatef(.05,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();


    glTranslatef(.05,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();



   glLoadIdentity();

   glPopMatrix();
   glLoadIdentity();

}





void CRight_RightMiddle()
{
    glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);
glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.239f);
glVertex2f(-0.64f, 0.239f);




    //toppest
glVertex2f(-0.649f, 0.325f);
glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);
    glEnd();

//2nd toppest
   glBegin(GL_POLYGON);
    glColor3ub(168, 112, 99);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.648f, 0.26f);
glVertex2f(-0.648f, 0.245f);
glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;
        glVertex2f(-0.649f, 0.325f);
        glVertex2f(-0.649f, 0.26f);

        glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);

glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);


glVertex2f(-0.19f, 0.325f);
glVertex2f(-0.649f, 0.325f);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.230f);

glVertex2f(-0.19f, 0.230f);
glVertex2f(-0.64f, 0.230f);

glVertex2f(-0.64f, 0.230f);
glVertex2f(-0.64f, -0.04f);

///
  glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.65f, 0.26f);


   glVertex2f(-0.6485f, 0.26f);
glVertex2f(-0.65f, 0.245f);


 glVertex2f(-0.6485f, 0.245f);
glVertex2f(-0.62f, 0.245f);

   glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);

    glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);

glVertex2f(-0.19f, 0.23f);
glVertex2f(-0.19f, 0.26f);


///

    glEnd();

glPopMatrix();
glLoadIdentity();

}







//LEFT PART START






void CloudySky()
{


//Left Middle part
    glBegin(GL_QUADS);
glColor3ub(168, 112, 99);

glVertex2f(-0.90f, 0.18f);
glVertex2f(-0.90f, -0.1f);
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, 0.18f);

glEnd();




}

void CloudyWhiteDiamond2()
{
        glBegin(GL_QUADS);
    glColor3ub(110, 111, 112);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

}

void Cleft_down()
{
    glBegin(GL_QUADS);
    glColor3ub(79, 56, 51);;
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.91f, -0.38f);
glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.65f, -0.36f);
glEnd();




  glBegin(GL_QUADS);
  glColor3ub(168, 112, 99);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();



glTranslatef(.22,0,0);
  glBegin(GL_QUADS);
  glColor3ub(168, 112, 99);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();

glLoadIdentity();



glLineWidth(2);


//Left Down Border start
glBegin(GL_LINES);

glColor3ub(79, 56, 51);;


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

//Left Down Border End
glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);

glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);

glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

glVertex2f(-0.65f, -0.11f);
glVertex2f(-0.65f, -0.09f);

glEnd();


glTranslatef(.22,0,0);
glBegin(GL_LINES);

glColor3ub(79, 56, 51);;


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);


//
glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);
glEnd();
glLoadIdentity();






  glBegin(GL_QUADS);
  glColor3ub(168, 112, 99);

glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

//leftDown middle
glVertex2f(-0.87f, -0.112f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.69f, -0.36f);
glVertex2f(-0.69f, -0.112f);

glEnd();


//left down piller start

glBegin(GL_LINES);
glColor3ub(79, 56, 51);;

glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.78f, -0.35f);

glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.77f, -0.35f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.77f, -0.12f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.78f, -0.12f);



glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.785f, -0.36f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.765f, -0.36f);


glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.785f, -0.11f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.765f, -0.11f);

glEnd();
//left down piller End

}


void CleftMiddle()
{

//upper

    glBegin(GL_QUADS);
      glColor3ub(168, 112, 99);
glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);

glTranslatef(.01,0,0);
//left mddle piller1
glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);


glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);


    glEnd();
    glLoadIdentity();

//left mddle piller border1
 glBegin(GL_LINES);
  glColor3ub(79, 56, 51);;

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);


glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);


glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);


glVertex2f(-0.92f, 0.21f);
glVertex2f(-0.92f, 0.18f);


glEnd();

//second left piller2


glTranslatef(.025,0,0);

glBegin(GL_LINES);
  glColor3ub(79, 56, 51);;

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();


///3

glTranslatef(.245,0,0);
 glBegin(GL_LINES);
  glColor3ub(79, 56, 51);;

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.915f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.895f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();



////////////////


glTranslatef(.22,0,0);

glBegin(GL_LINES);
  glColor3ub(79, 56, 51);;

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();




glTranslatef(.128,0,0);
 glBegin(GL_LINES);
  glColor3ub(79, 56, 51);;

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//


glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();





}


void CLeftUpperWindow()
{
    glBegin(GL_QUADS);
    glColor3ub(79, 56, 51);;
    glVertex2f(-0.855f, 0.07f);
    glVertex2f(-0.855f, -0.02f);
    glVertex2f(-0.805f, -0.02f);
    glVertex2f(-0.805f, 0.07f);



    //right window
    glVertex2f(-0.755f, 0.07f);
glVertex2f(-0.755f, -0.02f);
glVertex2f(-0.705f, -0.02f);
glVertex2f(-0.705f, 0.07f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;

    glVertex2f(-0.87f, 0.07f);
glVertex2f(-0.79f, 0.07f);

glVertex2f(-0.79f, 0.07f);
glVertex2f(-0.81f, 0.09f);

glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.85f, 0.09f);

glVertex2f(-0.85f, 0.09f);
glVertex2f(-0.87f, 0.07f);


//right window top
glVertex2f(-0.77f, 0.07f);
glVertex2f(-0.69f, 0.07f);

glVertex2f(-0.69f, 0.07f);
glVertex2f(-0.71f, 0.09f);

glVertex2f(-0.71f, 0.09f);
glVertex2f(-0.75f, 0.09f);

glVertex2f(-0.75f, 0.09f);
glVertex2f(-0.77f, 0.07f);




//top of window
glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(110, 111, 112);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

    glTranslatef(.022,0,0);
        glBegin(GL_QUADS);
    glColor3ub(110, 111, 112);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glLoadIdentity();




glTranslatef(.1,0,0);
glBegin(GL_LINES);
glColor3ub(79, 56, 51);;

glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();

        glBegin(GL_QUADS);
    glColor3ub(110, 111, 112);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

    glTranslatef(.022,0,0);
        glBegin(GL_QUADS);
    glColor3ub(110, 111, 112);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glLoadIdentity();



    glLoadIdentity();

}



void CLeftTop()
{
    glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);
glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);
glEnd();

    glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);
glEnd();


glTranslatef(-.02,0,0);
glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glLoadIdentity();

glTranslatef(.01,0,0);
glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();



glLoadIdentity();




glBegin(GL_LINES);
glColor3ub(79, 56, 51);;

glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);

glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);

glVertex2f(-0.95f, 0.24f);
glVertex2f(-0.91f, 0.21f);

glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);

glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);


//top
glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);

glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);

glVertex2f(-0.91f, 0.33f);
glVertex2f(-0.91f, 0.243f);

glVertex2f(-0.91f, 0.24f);
glVertex2f(-0.91f, 0.36f);

glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.92f, 0.34f);

glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

glVertex2f(-0.92f, 0.24f);
glVertex2f(-0.91f, 0.24f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
//

glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);


glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);


glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

//
glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.33f);

glVertex2f(-0.71f, 0.33f);
glVertex2f(-0.70f, 0.33f);

glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.71f, 0.35f);

//


glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.65f, 0.36f);

glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.70f, 0.33f);

glEnd();


glBegin(GL_QUADS);
glColor3ub(168, 112, 99);

glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);


//
glVertex2f(-0.911f, 0.24f);
glVertex2f(-0.911f, 0.36f);
glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

//
glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);

glEnd();



glBegin(GL_POLYGON);
glColor3ub(168, 112, 99);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);


glEnd();


glTranslatef(.03,.06,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();


glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(168, 112, 99);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();






glBegin(GL_QUADS);
glColor3ub(168, 112, 99);

glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.331f);
glVertex2f(-0.70f, 0.331f);
glVertex2f(-0.70f, 0.36f);

//


glVertex2f(-0.699f, 0.331f);
glVertex2f(-0.65f, 0.331f);
glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.699f, 0.36f);
glEnd();








glTranslatef(.21,0,0);


glBegin(GL_POLYGON);
glColor3ub(168, 112, 99);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glEnd();

glLoadIdentity();


glTranslatef(.21,0,0);
CloudytopCircle1();
glLoadIdentity();


glTranslatef(.21,0,0);
CloudytopCircle2();
glLoadIdentity();



}

void CLefttop()
{
    glScalef(1,.6,1);

    glTranslatef(-.788,.553,0);
    glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.05f, 0.03f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(-0.04f, 0.03f);
    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(168, 112, 99);
    glVertex2f(-0.05f, 0.015f);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(0.05f, 0.015f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glEnd();
//////////////////////////////////////////////////////////////////////

    glLineWidth(1);
   glBegin(GL_LINES);
   glColor3ub(79, 56, 51);;

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);

    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f, 0.03f);

    glVertex2f(-0.05f, 0.03f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(0.05f, 0.03f);
    glVertex2f(0.04f, 0.03f);

    glVertex2f(-0.05f, 0.01f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);

    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glVertex2f(-0.04f, 0.05f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(-0.07f, 0.0f);
    glVertex2f(-0.05f, 0.015f);

    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glVertex2f(0.07f, 0.0f);
    glVertex2f(0.05f, 0.015f);
    glEnd();




    glLoadIdentity();

    glTranslatef(.13,.045,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.916+(.007*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();


glTranslatef(.13,.045,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(168, 112, 99);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.006*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();















}


void CLeftDownWindow()
{
    glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
//back1
glVertex2f(-0.86f, -0.36f);
glVertex2f(-0.86f, -0.24f);
glVertex2f(-0.80f, -0.24f);
glVertex2f(-0.80f, -0.36f);

//back2
glColor3ub(168, 112, 99);

glVertex2f(-0.858f, -0.36f);
glVertex2f(-0.858f, -0.25f);
glVertex2f(-0.802f, -0.25f);
glVertex2f(-0.802f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.853f, -0.26f);
glVertex2f(-0.853f, -0.36f);
glVertex2f(-0.808f, -0.36f);
glVertex2f(-0.808f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.83+(.03*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(168, 112, 99);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.028*cos(theta)),(-.252+.05*sin(theta)));
}
glEnd();







glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.8305+(.0225*cos(theta)),(-.27+.051*sin(theta)));
}
glEnd();







}



void CLeftDownWIndow2()
{
    glTranslatef(.1,0,0);
    CLeftDownWindow();
    glLoadIdentity();
}


void CLeftTopWIndow1()
{
    glScalef(.45,.45,1);
    glTranslatef(-1.139,.9,0);
    CLeftDownWindow();

    glLoadIdentity();
}

void CLeftTopWIndow2()
{
    glTranslatef(.21,0,0);
    CLeftTopWIndow1();
    glLoadIdentity();

}



void Ctopmiddle_window()
{

    glScalef(0.35,.35,1);
    glTranslatef(-1.59,1.1,0);
    Cloudylalalala();
    glLoadIdentity();

}

void Ctopmiddle_window2()
{
    glTranslatef(.025,0,0);
    Ctopmiddle_window();

      glTranslatef(.05,0,0);
    Ctopmiddle_window();

      glTranslatef(.075,0,0);
    Ctopmiddle_window();

      glTranslatef(.1,0,0);
    Ctopmiddle_window();
//
      glTranslatef(.125,0,0);
    Ctopmiddle_window();

    glLoadIdentity();
}



void SecondCloudyLeftPart()
{
    glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);

glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;
//
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);

glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);

glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);



glEnd();


glBegin(GL_QUADS);
glColor3ub(168, 112, 99);

glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);
    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;
    glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);

glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);

glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);


glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, -0.365f);
    glEnd();
// glLineWidth(3);



    glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;


glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.635f, -0.325f);
glVertex2f(-0.635f, -0.305f);
glVertex2f(-0.65f, -0.36f);



glVertex2f(-0.64f, -0.325f);
glVertex2f(-0.37f, -0.325f);
glVertex2f(-0.37f, -0.310f);
glVertex2f(-0.64f, -0.310f);


    glEnd();



}


void CMiddle1()
{
    glLineWidth(1.5);
  glScalef(.5,1,1);
    glTranslatef(-.369,.05,0);
glBegin(GL_QUADS);
glColor3ub(168, 112, 99);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();



    glBegin(GL_LINES);

glColor3ub(79, 56, 51);;


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

glEnd();

glLoadIdentity();

}


void CMiddle2()
{
    glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.619f, -0.31f);
glVertex2f(-0.21f, -0.31f);
glVertex2f(-0.19f, -0.05f);
glVertex2f(-0.619f, -0.06f);





    glEnd();


        glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;


    glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);

glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);

    glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

    glVertex2f(-0.19f, -0.04f);
        glVertex2f(-0.64f, -0.04f);
    glEnd();
}


void CMiddle3()
{
    glTranslatef(.09,0,0);
    CMiddle1();

    glTranslatef(.18,0,0);
    CMiddle1();

    glTranslatef(.27,0,0);
    CMiddle1();

    glTranslatef(.36,0,0);
    CMiddle1();

    glLoadIdentity();
}


void CLeftMiddleDownWindow1()
{
    glTranslatef(.245,.05,0);
     glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
//back1
glVertex2f(-0.856f, -0.36f);
glVertex2f(-0.856f, -0.24f);
glVertex2f(-0.803f, -0.24f);
glVertex2f(-0.803f, -0.36f);

//back2
glColor3ub(168, 112, 99);

glVertex2f(-0.854f, -0.36f);
glVertex2f(-0.854f, -0.25f);
glVertex2f(-0.805f, -0.25f);
glVertex2f(-0.805f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
glVertex2f(-0.85f, -0.26f);
glVertex2f(-0.85f, -0.36f);
glVertex2f(-0.81f, -0.36f);
glVertex2f(-0.81f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.83+(.0255*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(168, 112, 99);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.025*cos(theta)),(-.25+.05*sin(theta)));
}
glEnd();






//
glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.83+(.02*cos(theta)),(-.27+.05*sin(theta)));
}
glEnd();
//
//
    glLoadIdentity();

}


void CLeftMiddleDownWindow2()
{
    glTranslatef(.09,0,0);
    CLeftMiddleDownWindow1();

        glTranslatef(.18,0,0);
    CLeftMiddleDownWindow1();

        glTranslatef(.27,0,0);
    CLeftMiddleDownWindow1();

        glTranslatef(.36,0,0);
    CLeftMiddleDownWindow1();






    glLoadIdentity();
}


void CMiddle4()
{

glBegin(GL_POLYGON);
glColor3ub(168, 112, 99);
glVertex2f(-0.639f, -0.039f);
glVertex2f(-0.625f, -0.039f);
glVertex2f(-0.625f, 0.16f);
glVertex2f(-0.639f, 0.17f);
glVertex2f(-0.639f, -0.039f);
glEnd();



    glTranslatef(.287,.05,0);
     glBegin(GL_LINES);
  glColor3ub(79, 56, 51);;

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();




}

void CMiddle6()
{
    //piller

   glTranslatef(.08,0,0);
   CMiddle4();

      glTranslatef(.16,0,0);
   CMiddle4();
      glTranslatef(.24,0,0);
   CMiddle4();
      glTranslatef(.32,0,0);
   CMiddle4();
      glTranslatef(.40,0,0);
   CMiddle4();



   glLoadIdentity();
}

void CloudySecondLeftTopWindow1()
{
       glTranslatef(.006,.27,0);
       CLeftMiddleDownWindow1();
   glLoadIdentity();
}

void CloudySecondLeftTopWindow2()
{
       glTranslatef(.08,0,0);
       CloudySecondLeftTopWindow1();

        glTranslatef(.16,0,0);
       CloudySecondLeftTopWindow1();

        glTranslatef(.24,0,0);
       CloudySecondLeftTopWindow1();

        glTranslatef(.32,0,0);
       CloudySecondLeftTopWindow1();



        glLoadIdentity();
}



void CloudyDiamondShowroom()
{
       glTranslatef(.054,.21,0);
    CloudyWhiteDiamond();
      glLoadIdentity();


    glTranslatef(.22,.155,0);
    CloudyWhiteDiamond();

    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();

    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();

    glTranslatef(.05,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();

        glTranslatef(.05,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();

        glTranslatef(.05,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();


            glTranslatef(.05,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();
    glTranslatef(.02,0,0);
    CloudyWhiteDiamond();



   glLoadIdentity();
}


void CMiddle5()
{
    glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);
glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.239f);
glVertex2f(-0.64f, 0.239f);




    //toppest
glVertex2f(-0.649f, 0.325f);
glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);
    glEnd();

//2nd toppest
   glBegin(GL_POLYGON);
    glColor3ub(168, 112, 99);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.648f, 0.26f);
glVertex2f(-0.648f, 0.245f);
glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;
        glVertex2f(-0.649f, 0.325f);
        glVertex2f(-0.649f, 0.26f);

        glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);

glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);


glVertex2f(-0.19f, 0.325f);
glVertex2f(-0.649f, 0.325f);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.230f);

glVertex2f(-0.19f, 0.230f);
glVertex2f(-0.64f, 0.230f);

glVertex2f(-0.64f, 0.230f);
glVertex2f(-0.64f, -0.04f);

///
  glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.65f, 0.26f);


   glVertex2f(-0.6485f, 0.26f);
glVertex2f(-0.65f, 0.245f);


 glVertex2f(-0.6485f, 0.245f);
glVertex2f(-0.62f, 0.245f);

   glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);

    glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);

glVertex2f(-0.19f, 0.23f);
glVertex2f(-0.19f, 0.26f);


///

    glEnd();



}

//LEFT PART END


void CloudyRightPart()
{

     CloudySky2();
	 SecondCloudyRightPart();
    CRight_Down();
    CRight_RightMiddle();
    CRight_Middle();
    CRightUpperWindow();//
     CRightTop();
     CRight_top();
//
     CRightDownWindow();
     CRightDownWIndow2();
     CRightTopWIndow1();
     CRightTopWIndow2();
     CRightTopMiddleWindow();
     RightCloudyTopMiddleWindow2();
     CRightMiddle1();
     CRightMiddle2();
     CRightMiddle3();
     CRightMiddleDownWindow1();
     CRightMiddleDownWindow2();
//
//
     CRightMiddle4();
     CRightMiddle6();
CSecondRightTopWindow1();
CSecondRightTopWindow2();
CDiamondShowroom2();
CRightMiddle7();
}

void CloudyLeftPart()
{





     CloudySky();
	 SecondCloudyLeftPart();
    Cleft_down();
    CMiddle5();
    CleftMiddle();
    CLeftUpperWindow();//
     CLeftTop();
     CLefttop();

    CLeftDownWindow();
    CLeftDownWIndow2();
    CLeftTopWIndow1();
    CLeftTopWIndow2();
    Ctopmiddle_window();
    Ctopmiddle_window2();
    CMiddle1();
    CMiddle2();
    CMiddle3();
    CLeftMiddleDownWindow1();
    CLeftMiddleDownWindow2();


    CMiddle4();
    CMiddle6();
CloudySecondLeftTopWindow1();
CloudySecondLeftTopWindow2();
CloudyDiamondShowroom();
}




///

void CloudyLeft_stair()
{
glBegin(GL_POLYGON);
glColor3ub(168, 112, 99);

glVertex2f(-0.3f, -0.32f);
glVertex2f(-0.29f, -0.3105f);
glVertex2f(-0.373f, -0.3105f);
glVertex2f(-0.373f, -0.38f);//
glVertex2f(-0.29f, -0.38f);//
glVertex2f(-0.175f, -0.03f);//
glVertex2f(-0.18f, 0.01f);//
glVertex2f(-0.29f, -0.30f);
glEnd();

glLineWidth(2);
// stair_border
    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;

//    glVertex2f(-0.3f, -0.32f);
//glVertex2f(-0.29f, -0.3105f);
glVertex2f(-0.295f, -0.3105f);
glVertex2f(-0.373f, -0.3105f);

glVertex2f(-0.373f, -0.3105f);
glVertex2f(-0.373f, -0.38f);

glVertex2f(-0.373f, -0.38f);//
glVertex2f(-0.29f, -0.38f);

glVertex2f(-0.29f, -0.38f);//
glVertex2f(-0.175f, -0.03f);

glVertex2f(-0.175f, -0.03f);//
glVertex2f(-0.18f, 0.01f);

glVertex2f(-0.18f, 0.01f);
glVertex2f(-0.295f, -0.3105f);
    glEnd();

}

void CloudyRight_Stair()
{
glRotatef(180,0,1,0);
glPushMatrix();
CloudyLeft_stair();
glPopMatrix();
glLoadIdentity();
}

void CloudyStair_Step()
{
    glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);

glVertex2f(-0.2918f, -0.385f);
glVertex2f(0.2915f, -0.385f);
glVertex2f(0.175f, -0.03f);
glVertex2f(-0.174f, -0.03f);
    glEnd();




    //start step


    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;
glVertex2f(-0.2918f, -0.385f);
glVertex2f(0.2915f, -0.385f);

glVertex2f(-0.29f, -0.38f);
glVertex2f(0.29f, -0.38f);

glVertex2f(-0.289f, -0.375f);
glVertex2f(0.289f, -0.375f);

glVertex2f(-0.288f, -0.370f);
glVertex2f(0.288f, -0.370f);

glVertex2f(-0.284f, -0.360f);
glVertex2f(0.284f, -0.360f);

glVertex2f(-0.283f, -0.358f);
glVertex2f(0.283f, -0.358f);


glVertex2f(-0.279f, -0.348f);
glVertex2f(0.279f, -0.348f);

glVertex2f(-0.278f, -0.346f);
glVertex2f(0.278f, -0.346f);

glVertex2f(-0.275f, -0.336f);
glVertex2f(0.275f, -0.336f);

glVertex2f(-0.274f, -0.334f);
glVertex2f(0.274f, -0.334f);


glVertex2f(-0.271f, -0.324f);
glVertex2f(0.271f, -0.324f);

glVertex2f(-0.270f, -0.322f);
glVertex2f(0.270f, -0.322f);

glVertex2f(-0.267f, -0.312f);
glVertex2f(0.267f, -0.312f);

glVertex2f(-0.266f, -0.310f);
glVertex2f(0.266f, -0.310f);

glVertex2f(-0.263f, -0.300f);
glVertex2f(0.263f, -0.300f);

glVertex2f(-0.262f, -0.298f);
glVertex2f(0.262f, -0.298f);


glVertex2f(-0.259f, -0.288f);
glVertex2f(0.259f, -0.288f);

glVertex2f(-0.256f, -0.278f);
glVertex2f(0.256f, -0.278f);

glVertex2f(-0.255f, -0.276f);
glVertex2f(0.255f, -0.276f);


glVertex2f(-0.252f, -0.266f);
glVertex2f(0.252f, -0.266f);

glVertex2f(-0.251f, -0.262f);
glVertex2f(0.251f, -0.262f);


glVertex2f(-0.248f, -0.252f);
glVertex2f(0.248f, -0.252f);

glVertex2f(-0.247f, -0.250f);
glVertex2f(0.247f, -0.250f);

glVertex2f(-0.244f, -0.240f);
glVertex2f(0.244f, -0.240f);

glVertex2f(-0.243f, -0.238f);
glVertex2f(0.243f, -0.238f);


glVertex2f(-0.240f, -0.228f);
glVertex2f(0.240f, -0.228f);

glVertex2f(-0.239f, -0.226f);
glVertex2f(0.239f, -0.226f);

glVertex2f(-0.236f, -0.216f);
glVertex2f(0.236f, -0.216f);

glVertex2f(-0.231f, -0.212f);
glVertex2f(0.231f, -0.212f);

glVertex2f(-0.23f, -0.202f);
glVertex2f(0.23f, -0.202f);

glVertex2f(-0.228f, -0.200f);
glVertex2f(0.228f, -0.200f);

glVertex2f(-0.227f, -0.190f);
glVertex2f(0.227f, -0.190f);

glVertex2f(-0.226f, -0.188f);
glVertex2f(0.226f, -0.188f);

glVertex2f(-0.225f, -0.186f);
glVertex2f(0.225f, -0.186f);

glVertex2f(-0.222f, -0.176f);
glVertex2f(0.222f, -0.176f);

glVertex2f(-0.221f, -0.172f);
glVertex2f(0.221f, -0.172f);

glVertex2f(-0.219f, -0.162f);
glVertex2f(0.219f, -0.162f);

glVertex2f(-0.218f, -0.160f);
glVertex2f(0.218f, -0.160f);

glVertex2f(-0.216f, -0.150f);
glVertex2f(0.216f, -0.150f);

glVertex2f(-0.215f, -0.148f);
glVertex2f(0.215f, -0.148f);

glVertex2f(-0.213f, -0.138f);
glVertex2f(0.213f, -0.138f);

glVertex2f(-0.212f, -0.136f);
glVertex2f(0.212f, -0.136f);

glVertex2f(-0.210f, -0.126f);
glVertex2f(0.210f, -0.126f);
glVertex2f(-0.209f, -0.124f);
glVertex2f(0.209f, -0.124f);


glVertex2f(-0.207f, -0.114f);
glVertex2f(0.207f, -0.114f);

glVertex2f(-0.206f, -0.112f);
glVertex2f(0.206f, -0.112f);

glVertex2f(-0.204f, -0.102f);
glVertex2f(0.204f, -0.102f);

glVertex2f(-0.203f, -0.100f);
glVertex2f(0.203f, -0.100f);

glVertex2f(-0.200f, -0.090f);
glVertex2f(0.200f, -0.090f);

glVertex2f(-0.199f, -0.088f);
glVertex2f(0.199f, -0.088f);


glVertex2f(-0.195f, -0.078f);
glVertex2f(0.195f, -0.078f);

glVertex2f(-0.191f, -0.072f);
glVertex2f(0.191f, -0.072f);

glVertex2f(-0.187f, -0.062f);
glVertex2f(0.187f, -0.062f);

glVertex2f(-0.186f, -0.060f);
glVertex2f(0.186f, -0.060f);


glVertex2f(-0.186f, -0.060f);
glVertex2f(0.186f, -0.060f);

glVertex2f(-0.183f, -0.05f);
glVertex2f(0.183f, -0.050f);

glVertex2f(-0.182f, -0.048f);
glVertex2f(0.182f, -0.048f);

glVertex2f(-0.179f, -0.038f);
glVertex2f(0.179f, -0.038f);

glVertex2f(-0.178f, -0.036f);
glVertex2f(0.178f, -0.036f);

//glVertex2f(-0.175f, -0.026f);
//glVertex2f(0.175f, -0.026f);
//
//glVertex2f(-0.174f, -0.024f);
//glVertex2f(0.174f, -0.024f);


    glEnd();






}





void CloudyMiddleQuad()
{

glBegin(GL_QUADS);
glColor3ub(168, 112, 99);

glVertex2f(-0.189f, 0.325f);
glVertex2f(-0.189f, -0.05f);
glVertex2f(0.189f, -0.05f);
glVertex2f(0.189f, 0.325f);

//glVertex2f(-0.189f, -0.01f);
//glVertex2f(-0.18f, 0.01f);
//glVertex2f(-0.18f, 0.36f);
//glVertex2f(-0.189f, 0.36f);
    glEnd();




        glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;

    glVertex2f(-0.189f, 0.325f);
glVertex2f(-0.189f, -0.05f);
glVertex2f(-0.189f, -0.05f);
glVertex2f(0.189f, -0.05f);
glVertex2f(0.189f, -0.05f);
glVertex2f(0.189f, 0.325f);
glVertex2f(0.189f, 0.325f);
    glVertex2f(-0.189f, 0.325f);



    //base

//glVertex2f(-0.175f, -0.01f);
//
//glVertex2f(-0.18f, -0.03f);
//glVertex2f(-0.148f, -0.03f);
//
//glVertex2f(-0.155f, -0.001f);

    glEnd();

}

void CMiddleLeftPiller()
{
glTranslatef(.005,0,0);
        glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);

    glVertex2f(-0.187f, 0.378f);
glVertex2f(-0.187f, 0.323f);
glVertex2f(-0.142f, 0.323f);
glVertex2f(-0.142f, 0.378f);
    glEnd();

        glBegin(GL_LINES);
glColor3ub(79, 56, 51);;

//glVertex2f(-0.189f, -0.01f);
//glVertex2f(-0.175f, 0.01f);
//
//glVertex2f(-0.175f, 0.01f);
//glVertex2f(-0.175f, 0.36f);
//
//glVertex2f(-0.175f, 0.36f);
//glVertex2f(-0.189f, 0.36f);
//
//glVertex2f(-0.189f, 0.36f);
//glVertex2f(-0.189f, -0.01f);

//iiiiiiiiiiiiiii
glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.155f, -0.01f);

glVertex2f(-0.155f, -0.01f);
glVertex2f(-0.155f, 0.38f);

glVertex2f(-0.155f, 0.38f);
glVertex2f(-0.175f, 0.38f);


///

///////////////////////////
glVertex2f(-0.187f, 0.40f);
glVertex2f(-0.187f, -0.01f);

glVertex2f(-0.187f, -0.01f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.175f, 0.41f);

glVertex2f(-0.175f, 0.41f);
glVertex2f(-0.187f, 0.40f);



    glEnd();






  glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.33,0,0);
glBegin(GL_LINES);
glColor3ub(79, 56, 51);;

glVertex2f(-0.189f, -0.035f);
glVertex2f(-0.175f, 0.00f);

glVertex2f(-0.175f, 0.00f);
glVertex2f(-0.175f, 0.38f);

glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.189f, 0.38f);

glVertex2f(-0.189f, 0.38f);
glVertex2f(-0.189f, -0.035f);


glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



glLoadIdentity();

    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;

glVertex2f(-0.17f, -.012);
glVertex2f(-0.178f, -0.03f);

glEnd();


}






void CloudyMiddleTop()
{
    glScalef(.91,1,1);
    glTranslatef(.71,.05,0);
        glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);


/////////////////////

glVertex2f(-0.91f, 0.35f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);
/////////////////////
    glEnd();



glBegin(GL_POLYGON);
glColor3ub(168, 112, 99);

glVertex2f(-0.90f, 0.355f);
glVertex2f(-0.89f, 0.365f);
glVertex2f(-0.89f, 0.375f);
glVertex2f(-0.88f, 0.375f);
glVertex2f(-0.875f, 0.365f);
glVertex2f(-0.87f, 0.355f);


glEnd();


glBegin(GL_LINES);
glColor3ub(79, 56, 51);;

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.895f, 0.37f);

glVertex2f(-0.895f, 0.37f);
glVertex2f(-0.89f, 0.38f);

glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

    glEnd();


    glLineWidth(2);
        glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;

glVertex2f(-0.91f, 0.34f);
glVertex2f(-0.91f, 0.331f);


glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);


glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);


glVertex2f(-0.86f, 0.36f);
glVertex2f(-0.88f, 0.36f);

    glEnd();


        glLoadIdentity();

        /////////////////////

     glScalef(.91,1,1);
    glTranslatef(.74,.11,0);

        double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();




glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(168, 112, 99);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();


glLoadIdentity();




}



///////////////////////////////////////////////////////////////////
//Tight Middle





void CloudyRightMiddleTop()
{
    glRotatef(180,0,1,0);
glPushMatrix();
    glScalef(.91,1,1);
    glTranslatef(.71,.05,0);
        glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);


/////////////////////

glVertex2f(-0.91f, 0.35f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);
/////////////////////
    glEnd();



glBegin(GL_POLYGON);
glColor3ub(168, 112, 99);

glVertex2f(-0.90f, 0.355f);
glVertex2f(-0.89f, 0.365f);
glVertex2f(-0.89f, 0.375f);
glVertex2f(-0.88f, 0.375f);
glVertex2f(-0.875f, 0.365f);
glVertex2f(-0.87f, 0.355f);


glEnd();


glBegin(GL_LINES);
glColor3ub(79, 56, 51);;

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.895f, 0.37f);

glVertex2f(-0.895f, 0.37f);
glVertex2f(-0.89f, 0.38f);

glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

    glEnd();


    glLineWidth(2);
        glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;

glVertex2f(-0.91f, 0.34f);
glVertex2f(-0.91f, 0.331f);


glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);


glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);


glVertex2f(-0.86f, 0.36f);
glVertex2f(-0.88f, 0.36f);

    glEnd();


        glLoadIdentity();
        glPopMatrix();
        glLoadIdentity();

        /////////////////////
        glRotatef(180,0,1,0);
glPushMatrix();

     glScalef(.91,1,1);
    glTranslatef(.74,.11,0);

        double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();




glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(168, 112, 99);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();


glLoadIdentity();
glPopMatrix();
glLoadIdentity();




}




void CloudyRightMiddleLeftPiller()
{
    glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.005,0,0);
        glBegin(GL_QUADS);
    glColor3ub(168, 112, 99);

    glVertex2f(-0.187f, 0.378f);
glVertex2f(-0.187f, 0.323f);
glVertex2f(-0.142f, 0.323f);
glVertex2f(-0.142f, 0.378f);
    glEnd();

        glBegin(GL_LINES);
glColor3ub(79, 56, 51);;

//glVertex2f(-0.189f, -0.01f);
//glVertex2f(-0.175f, 0.01f);
//
//glVertex2f(-0.175f, 0.01f);
//glVertex2f(-0.175f, 0.36f);
//
//glVertex2f(-0.175f, 0.36f);
//glVertex2f(-0.189f, 0.36f);
//
//glVertex2f(-0.189f, 0.36f);
//glVertex2f(-0.189f, -0.01f);

//iiiiiiiiiiiiiii
glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.155f, -0.01f);

glVertex2f(-0.155f, -0.01f);
glVertex2f(-0.155f, 0.38f);

glVertex2f(-0.155f, 0.38f);
glVertex2f(-0.175f, 0.38f);


///

///////////////////////////
glVertex2f(-0.187f, 0.40f);
glVertex2f(-0.187f, -0.01f);

glVertex2f(-0.187f, -0.01f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.175f, 0.41f);

glVertex2f(-0.175f, 0.41f);
glVertex2f(-0.187f, 0.40f);



    glEnd();


glPopMatrix();
glLoadIdentity();





  glRotatef(360,0,1,0);
glPushMatrix();
glTranslatef(.325,0,0);
glBegin(GL_LINES);
glColor3ub(79, 56, 51);;

glVertex2f(-0.189f, -0.035f);
glVertex2f(-0.175f, 0.00f);

glVertex2f(-0.175f, 0.00f);
glVertex2f(-0.175f, 0.38f);

glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.189f, 0.38f);

glVertex2f(-0.189f, 0.38f);
glVertex2f(-0.189f, -0.035f);


glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



glLoadIdentity();
glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;

glVertex2f(-0.17f, -.012);
glVertex2f(-0.178f, -0.03f);

glEnd();
glPopMatrix();
glLoadIdentity();


}



//////////////////////////////////////////Right Middle End

void CloudyMiddleTop1()
{
    glTranslatef(-.005,0,0);
     glBegin(GL_POLYGON);
    glColor3ub(168, 112, 99);

glVertex2f(-0.10f, 0.325f);
glVertex2f(0.11f, 0.325f);
glVertex2f(0.11f, 0.47f);
glVertex2f(0.07f, 0.49f);
glVertex2f(-0.05f, 0.49f);
glVertex2f(-0.10f, 0.47f);
    glEnd();





    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;
glVertex2f(-0.10f, 0.325f);
glVertex2f(0.11f, 0.325f);
glVertex2f(0.11f, 0.325f);
glVertex2f(0.11f, 0.47f);
glVertex2f(0.11f, 0.47f);
glVertex2f(0.07f, 0.49f);
glVertex2f(0.07f, 0.49f);
glVertex2f(-0.05f, 0.49f);
glVertex2f(-0.05f, 0.49f);
glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.325f);
    glEnd();

    glLoadIdentity();
}


void CloudyMiddleTop2()
{
glTranslatef(0,0.0,0);
   glBegin(GL_POLYGON);
    glColor3ub(168, 112, 99);

    glVertex2f(-0.10f, 0.45f);
glVertex2f(-0.13f, 0.48f);
glVertex2f(-0.06f, 0.51f);
glVertex2f(0.07f, 0.51f);
glVertex2f(0.13f, 0.48f);
glVertex2f(0.11f, 0.45f);
    glEnd();







    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;
          glVertex2f(-0.10f, 0.45f);
glVertex2f(-0.13f, 0.48f);

 glVertex2f(-0.13f, 0.48f);
glVertex2f(-0.06f, 0.51f);


  glVertex2f(-0.06f, 0.51f);
glVertex2f(0.07f, 0.51f);

  glVertex2f(0.07f, 0.51f);
glVertex2f(0.13f, 0.48f);

 glVertex2f(0.13f, 0.48f);
glVertex2f(0.11f, 0.45f);

 glVertex2f(0.11f, 0.45f);
      glVertex2f(-0.10f, 0.45f);

    glEnd();










    glLoadIdentity();

}



void CloudyMiddleTop3()
{

    glTranslatef(-0.005,.02,0);
    glBegin(GL_POLYGON);
    glColor3ub(168, 112, 99);

    glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.487f);//
glVertex2f(-0.05f, 0.515f);
glVertex2f(0.06f, 0.515f);
glVertex2f(0.11f, 0.49f);//
glVertex2f(0.11f, 0.47f);


    glEnd();

glLineWidth(6);

    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;




    glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.487f);//


glVertex2f(-0.10f, 0.487f);//
glVertex2f(-0.05f, 0.515f);

glVertex2f(-0.05f, 0.515f);
glVertex2f(0.06f, 0.515f);


glVertex2f(0.06f, 0.515f);
glVertex2f(0.11f, 0.49f);//


glVertex2f(0.11f, 0.49f);//
glVertex2f(0.11f, 0.47f);


glVertex2f(0.11f, 0.47f);
    glVertex2f(-0.10f, 0.47f);

    glEnd();



    glLoadIdentity();
}





void CloudyMiddleTop4()
{

     glBegin(GL_TRIANGLES);

 glColor3ub(79, 56, 51);;
 glVertex2f(-0.012,.694);
 glVertex2f(0.012,.694);
 glVertex2f(0,.8);
 glEnd();

 glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;
    glVertex2f(0,.75);
    glVertex2f(0,.82);




    glEnd();

 glLineWidth(1.5);

    //////////////////////
    double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(0+(.107*cos(theta)),(.46+.24*sin(theta)));
}
glEnd();



glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(168, 112, 99);
    theta=i*3.1416/180;
    glVertex2f(0+(.104*cos(theta)),(.46+.236*sin(theta)));
}
glEnd();


glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(0+(.055*cos(theta)),(.46+.24*sin(theta)));
}
glEnd();


glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(168, 112, 99);
    theta=i*3.1416/180;
    glVertex2f(0+(.052*cos(theta)),(.46+.236*sin(theta)));
}
glEnd();


glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(0+(.02*cos(theta)),(.69+.021*sin(theta)));
}
glEnd();



glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
   glColor3ub(168, 112, 99);
    theta=i*3.1416/180;
    glVertex2f(0+(.017*cos(theta)),(.694+.012*sin(theta)));
}
glEnd();






}



void CloudyMiddleTop5()
{
        glBegin(GL_LINES);
    glColor3ub(79, 56, 51);;
    glVertex2f(-0.137f, 0.30f);
glVertex2f(0.137f, 0.30f);

    glVertex2f(-0.137f, 0.288f);
glVertex2f(0.137f, 0.288f);

    glEnd();
}

void CloudyMiddleTop6()
{
    glScalef(1.9,1.26,1);
glTranslatef(0.875,.06,0);
glBegin(GL_LINES);
glColor3ub(79, 56, 51);;


glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);

//
glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.892f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glEnd();

glLoadIdentity();
}


void CloudyMiddleTop7()
{

    glTranslatef(.12,0,0);
    CloudyMiddleTop6();
    glLoadIdentity();
}



void CloudyTopMiddleWindow1()
{
    glScalef(.7,1.8,1);
    glTranslatef(.68,.34,0);
    glBegin(GL_QUADS);
glColor3ub(79, 56, 51);;
//back1
glVertex2f(-0.86f, -0.36f);
glVertex2f(-0.86f, -0.24f);
glVertex2f(-0.80f, -0.24f);
glVertex2f(-0.80f, -0.36f);

glEnd();




double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(79, 56, 51);;
    theta=i*3.1416/180;
    glVertex2f(-.83+(.03*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();

glLoadIdentity();

}

void CloudyTopMiddleWindow2()
{
    glTranslatef(.214,0,0);
    CloudyTopMiddleWindow1();
    glLoadIdentity();


    glScalef(1.7,1,1);
        glTranslatef(.107,0,0);
    CloudyTopMiddleWindow1();
    glLoadIdentity();



        glScalef(1.4,.47,1);
        glTranslatef(.107,.723,0);
    CloudyTopMiddleWindow1();
    glLoadIdentity();





}

///
void CloudyLeftMiddlePart()
{
CloudyMiddleTop();
CloudyMiddleQuad();
CloudyStair_Step();
CMiddleLeftPiller();

}


void CloudyRightMiddlePart()
{
CloudyRightMiddleTop();
CloudyRightMiddleLeftPiller();//

CloudyLeft_stair();
CloudyRight_Stair();

}

void CloudyCenter()
{
    CloudyLeftMiddlePart();
    CloudyRightMiddlePart();


    CloudyMiddleTop4();
    CloudyMiddleTop3();
    glLineWidth(1.5);
    CloudyMiddleTop2();
    CloudyMiddleTop1();
    CloudyMiddleTop5();
    CloudyMiddleTop6();
    CloudyMiddleTop7();
    CloudyTopMiddleWindow1();
    CloudyTopMiddleWindow2();



}

///*** Airplane model***///
//void airplane_model()
//{
//    ///Airplane body
//    glBegin(GL_POLYGON);
//    glColor3f(0.0, 0.0, 0.5);
//	glVertex2f(.01, .9);
//	glVertex2f(.06, .9);
//	glVertex2f(.09, .84);
//	glVertex2f(.01, .84);
//	glEnd();
//	glBegin(GL_POLYGON);
//    glColor3f(0.8, 0.8, 1.5);
//	glVertex2f(.01, .84);
//	glVertex2f(.28, .84);
//	glVertex2f(.3, .82);
//	glVertex2f(.32, .82);
//	glVertex2f(.33, .8);
//	glVertex2f(.32, .78);
//	glVertex2f(.03, .78);
//	glVertex2f(.01, .8);
//	glVertex2f(.01, .84);
//	glEnd();
//    ///Airplane lower red part
//	glBegin(GL_POLYGON);
//    glColor3f(0.8, 0.0, 0.0);
//    glVertex2f(.33, .8);
//	glVertex2f(.32, .78);
//	glVertex2f(.03, .78);
//	glVertex2f(.01, .8);
//	glEnd();
//    ///Airplane windows
//    glBegin(GL_TRIANGLES);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.28, .84);
//	glVertex2f(.3, .82);
//	glVertex2f(.28, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.2, .83);
//	glVertex2f(.21, .83);
//	glVertex2f(.21, .82);
//	glVertex2f(.2, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.22, .83);
//	glVertex2f(.23, .83);
//	glVertex2f(.23, .82);
//	glVertex2f(.22, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.18, .83);
//	glVertex2f(.19, .83);
//	glVertex2f(.19, .82);
//	glVertex2f(.18, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.16, .83);
//	glVertex2f(.17, .83);
//	glVertex2f(.17, .82);
//	glVertex2f(.16, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.14, .83);
//	glVertex2f(.15, .83);
//	glVertex2f(.15, .82);
//	glVertex2f(.14, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.12, .83);
//	glVertex2f(.13, .83);
//	glVertex2f(.13, .82);
//	glVertex2f(.12, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.1, .83);
//	glVertex2f(.11, .83);
//	glVertex2f(.11, .82);
//	glVertex2f(.1, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.08, .83);
//	glVertex2f(.09, .83);
//	glVertex2f(.09, .82);
//	glVertex2f(.08, .82);
//	glEnd();
//    ///Airplane wings
//    glBegin(GL_POLYGON);
//    glColor3f(0.0, 0.0, 0.5);
//	glVertex2f(.13, .84);
//	glVertex2f(.12, .87);
//	glVertex2f(.16, .87);
//	glVertex2f(.19, .84);
//	glEnd();
//    glBegin(GL_POLYGON);
//    glColor3f(0.0, 0.0, 0.5);
//	glVertex2f(.13, .78);
//	glVertex2f(.12, .75);
//	glVertex2f(.16, .75);
//	glVertex2f(.19, .78);
//	glEnd();
//}


//void airplane_Rotate(){
//    glTranslatef(1,0,0);
//    glRotatef(180,0,1,0);
//    glPushMatrix();
//    airplane_model();
//    glPopMatrix();
//    glLoadIdentity();
//
//}

//void Dynamic_Airplane()
//{
//    glPushMatrix();
//    glTranslatef(position2,0,0);
//    airplane_Rotate();
//    glPopMatrix();
//    glLoadIdentity();
//}

void Rcloud1()
{
    double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(96, 96, 97);
    theta=i*3.1416/180;
    glVertex2f(-0.94+(.05*cos(theta)),(0.77+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(96, 96, 97);
    theta=i*3.1416/180;
    glVertex2f(-0.86+(.05*cos(theta)),(0.77+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(96, 96, 97);
    theta=i*3.1416/180;
    glVertex2f(-0.78+(.05*cos(theta)),(0.77+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(96, 96, 97);
    theta=i*3.1416/180;
    glVertex2f(-0.90+(.05*cos(theta)),(0.85+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(96, 96, 97);
    theta=i*3.1416/180;
    glVertex2f(-0.82+(.05*cos(theta)),(0.85+.075*sin(theta)));
}
glEnd();

}



void Rcloud2()
{
    double theta;
    glTranslatef(.4,0,0);


glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(96, 96, 97);
    theta=i*3.1416/180;
    glVertex2f(-0.86+(.05*cos(theta)),(0.77+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(96, 96, 97);
    theta=i*3.1416/180;
    glVertex2f(-0.78+(.05*cos(theta)),(0.77+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(96, 96, 97);
    theta=i*3.1416/180;
    glVertex2f(-0.82+(.05*cos(theta)),(0.85+.075*sin(theta)));
}
glEnd();
glLoadIdentity();

}

void Rcloud3()
{
        glPushMatrix();
    glTranslatef(position,0,0);
    double theta;
    glTranslatef(1.2,-.2,0);


glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(96, 96, 97);
    theta=i*3.1416/180;
    glVertex2f(-0.86+(.05*cos(theta)),(0.77+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(96, 96, 97);
    theta=i*3.1416/180;
    glVertex2f(-0.78+(.05*cos(theta)),(0.77+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(96, 96, 97);
    theta=i*3.1416/180;
    glVertex2f(-0.82+(.05*cos(theta)),(0.85+.075*sin(theta)));
}
glEnd();
glLoadIdentity();
    glPopMatrix();

glLoadIdentity();

}
void rainyCloud()
{
    glPushMatrix();
    glTranslatef(position,0,0);
    Rcloud1();
    Rcloud2();
    Rcloud3();

    glPopMatrix();

glLoadIdentity();

}



void CloudySun()
{
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255, 166, 0);
    theta=i*3.1416/180;
    glVertex2f(0.68+(.05*cos(theta)),(0.4+.075*sin(theta)));
}
glEnd();
}

void CloudySun_Shine()
{
    glPushMatrix();
    glTranslatef(0,position3,0);
    CloudySun();
    glPopMatrix();
    glLoadIdentity();
}





///Rain
void Rain_Drops()
{
      ///First Row
	glBegin(GL_LINES);
	glColor3f(1,1,1);
	glVertex2f(1,.95f);
	glVertex2f(.99f,.92f);

	glVertex2f(.9f,.95f);
	glVertex2f(.89f,.92f);

	glVertex2f(.8f,.95f);
	glVertex2f(.79f,.92f);

	glVertex2f(.7f,.95f);
	glVertex2f(.69f,.92f);

	glVertex2f(.6f,.95f);
	glVertex2f(.59f,.92f);

	glVertex2f(.5f,.95f);
	glVertex2f(.49f,.92f);

	glVertex2f(.4f,.95f);
	glVertex2f(.39f,.92f);

	glVertex2f(.3f,.95f);
	glVertex2f(.29f,.92f);

	glVertex2f(.2f,.95f);
	glVertex2f(.19f,.92f);

	glVertex2f(.1f,.95f);
	glVertex2f(.09f,.92f);

	glVertex2f(0,.95f);
	glVertex2f(-.01f,.92f);

	glVertex2f(-.1f,.95f);
	glVertex2f(-.11f,.92f);

	glVertex2f(-.2f,.95f);
	glVertex2f(-.21f,.92f);

	glVertex2f(-.3f,.95f);
	glVertex2f(-.31f,.92f);

	glVertex2f(-.4f,.95f);
	glVertex2f(-.41f,.92f);

	glVertex2f(-.5f,.95f);
	glVertex2f(-.51f,.92f);

	glVertex2f(-.6f,.95f);
	glVertex2f(-.61f,.92f);

	glVertex2f(-.7f,.95f);
	glVertex2f(-.71f,.92f);

	glVertex2f(-.8f,.95f);
	glVertex2f(-.81f,.92f);

	glVertex2f(-.9f,.95f);
	glVertex2f(-.91f,.92f);

	glVertex2f(-.99f,.95f);
	glVertex2f(-1,.92f);

	glEnd();



	///2nd Row
	glBegin(GL_LINES);
	glColor3f(1,1,1);
	glVertex2f(.98f,.85f);
	glVertex2f(.97f,.82f);

	glVertex2f(.88f,.85f);
	glVertex2f(.87f,.82f);

	glVertex2f(.78f,.85f);
	glVertex2f(.77f,.82f);

	glVertex2f(.68f,.85f);
	glVertex2f(.67f,.82f);

	glVertex2f(.58f,.85f);
	glVertex2f(.57f,.82f);

	glVertex2f(.48f,.85f);
	glVertex2f(.47f,.82f);

	glVertex2f(.38f,.85f);
	glVertex2f(.37f,.82f);

	glVertex2f(.28f,.85f);
	glVertex2f(.27f,.82f);

	glVertex2f(.18f,.85f);
	glVertex2f(.17f,.82f);

	glVertex2f(.08f,.85f);
	glVertex2f(.07f,.82f);

	glVertex2f(-.02f,.85f);
	glVertex2f(-.03f,.82f);

	glVertex2f(-.12f,.85f);
	glVertex2f(-.13f,.82f);

	glVertex2f(-.22f,.85f);
	glVertex2f(-.23f,.82f);

	glVertex2f(-.32f,.85f);
	glVertex2f(-.33f,.82f);

	glVertex2f(-.42f,.85f);
	glVertex2f(-.43f,.82f);

	glVertex2f(-.52f,.85f);
	glVertex2f(-.53f,.82f);

	glVertex2f(-.62f,.85f);
	glVertex2f(-.63f,.82f);

	glVertex2f(-.72f,.85f);
	glVertex2f(-.73f,.82f);

	glVertex2f(-.82f,.85f);
	glVertex2f(-.83f,.82f);

	glVertex2f(-.92f,.85f);
	glVertex2f(-.93f,.82f);

	glVertex2f(-.99f,.85f);
	glVertex2f(-1,.82f);

	glEnd();

	///3rd Row
	glBegin(GL_LINES);
	glColor3f(1,1,1);
//	glVertex2f(1,.75f);
//	glVertex2f(.99f,.72f);

	glVertex2f(.95,.75f);
	glVertex2f(.94f,.72f);

	glVertex2f(.85,.75f);
	glVertex2f(.84f,.72f);

	glVertex2f(.75,.75f);
	glVertex2f(.74f,.72f);

	glVertex2f(.65,.75f);
	glVertex2f(.64f,.72f);

	glVertex2f(.55,.75f);
	glVertex2f(.54f,.72f);

	glVertex2f(.45,.75f);
	glVertex2f(.44f,.72f);

	glVertex2f(.35,.75f);
	glVertex2f(.34f,.72f);

	glVertex2f(.25,.75f);
	glVertex2f(.24f,.72f);

	glVertex2f(.15,.75f);
	glVertex2f(.14f,.72f);

	glVertex2f(.05,.75f);
	glVertex2f(.04f,.72f);

	glVertex2f(-.05,.75f);
	glVertex2f(-.06f,.72f);

	glVertex2f(-.15,.75f);
	glVertex2f(-.16f,.72f);

	glVertex2f(-.25,.75f);
	glVertex2f(-.26f,.72f);

	glVertex2f(-.35,.75f);
	glVertex2f(-.36f,.72f);

	glVertex2f(-.45,.75f);
	glVertex2f(-.46f,.72f);

	glVertex2f(-.55,.75f);
	glVertex2f(-.56f,.72f);

	glVertex2f(-.65,.75f);
	glVertex2f(-.66f,.72f);

	glVertex2f(-.75,.75f);
	glVertex2f(-.76f,.72f);

	glVertex2f(-.85,.75f);
	glVertex2f(-.86f,.72f);

	glVertex2f(-.95,.75f);
	glVertex2f(-.96f,.72f);
	glEnd();


}
void Rain()
{
glLineWidth(1.5);








    glPushMatrix();
glTranslatef(0,position4,0);
Rain_Drops();
glLoadIdentity();

    glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-.3,0);
Rain_Drops();
glLoadIdentity();


    glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-.6,0);
Rain_Drops();
glLoadIdentity();


    glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-.9,0);
Rain_Drops();
glLoadIdentity();


    glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-1.2,0);
Rain_Drops();
glLoadIdentity();


    glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-1.5,0);
Rain_Drops();
glLoadIdentity();


    glPushMatrix();
glTranslatef(0,position4,0);
glTranslatef(0,-1.8,0);
Rain_Drops();
glLoadIdentity();
}
void DynamicRain()
{
    glPushMatrix();
glTranslatef(0,position4,0);

Rain();

glPopMatrix();

glLoadIdentity();
}

///










///Cloudy End
///........................///















///Night Start
///....................///


void NightSky2()
{
//sky
    glBegin(GL_QUADS);
    glColor3ub(13,13,13);
    glVertex2f(-1.00f, -0.19f);
glVertex2f(-1.00f, 1.00f);
glVertex2f(1.00f, 1.00f);
glVertex2f(1.00f, -0.19f);



//ground
 glColor3ub(53,84,61);
  glVertex2f(-1.00f, -0.19f);
    glVertex2f(-1, -1);
     glVertex2f(1, -1);
     glVertex2f(1.00f, -0.19f);


    glEnd();


    glRotatef(180,0,1,0);
glPushMatrix();

//Left Middle part
    glBegin(GL_QUADS);
glColor3ub(156, 106, 95);

glVertex2f(-0.90f, 0.18f);
glVertex2f(-0.90f, -0.1f);
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, 0.18f);

glEnd();

glPopMatrix();
glLoadIdentity();


}

void NightWhiteDiamond()
{

        glBegin(GL_QUADS);
    glColor3ub(43, 26, 21);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

}

void NightRight_Down()
{
    glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_QUADS);
    glColor3ub(43, 26, 21);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.91f, -0.38f);
glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.65f, -0.36f);
glEnd();




  glBegin(GL_QUADS);
  glColor3ub(156, 106, 95);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.22,0,0);
  glBegin(GL_QUADS);
  glColor3ub(156, 106, 95);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glLineWidth(2);

glRotatef(180,0,1,0);
glPushMatrix();
//Left Down Border start
glBegin(GL_LINES);

glColor3ub(43, 26, 21);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

//Left Down Border End
glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);

glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);

glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

glVertex2f(-0.65f, -0.11f);
glVertex2f(-0.65f, -0.09f);

glEnd();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.22,0,0);
glBegin(GL_LINES);

glColor3ub(43, 26, 21);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);


//
glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);
glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();




glRotatef(180,0,1,0);
glPushMatrix();
  glBegin(GL_QUADS);
  glColor3ub(156, 106, 95);

glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

//leftDown middle
glVertex2f(-0.87f, -0.112f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.69f, -0.36f);
glVertex2f(-0.69f, -0.112f);

glEnd();


//left down piller start

glBegin(GL_LINES);
glColor3ub(43, 26, 21);

glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.78f, -0.35f);

glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.77f, -0.35f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.77f, -0.12f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.78f, -0.12f);



glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.785f, -0.36f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.765f, -0.36f);


glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.785f, -0.11f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.765f, -0.11f);

glEnd();
//left down piller End
glPopMatrix();
glLoadIdentity();

}


void NightRight_Middle()
{

//upper
glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
      glColor3ub(156, 106, 95);
glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);

glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.01,0,0);
//left mddle piller1
glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);


glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);


    glEnd();
    glLoadIdentity();

    glPopMatrix();
    glLoadIdentity();

//left mddle piller border1
glRotatef(180,0,1,0);
glPushMatrix();
 glBegin(GL_LINES);
  glColor3ub(43, 26, 21);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);


glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);


glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);


glVertex2f(-0.92f, 0.21f);
glVertex2f(-0.92f, 0.18f);


glEnd();

glPopMatrix();
glLoadIdentity();

//second left piller2

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.025,0,0);

glBegin(GL_LINES);
  glColor3ub(43, 26, 21);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();

///3
glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.245,0,0);
 glBegin(GL_LINES);
  glColor3ub(43, 26, 21);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.915f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.895f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();

glPopMatrix();
glLoadIdentity();

////////////////

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.22,0,0);

glBegin(GL_LINES);
  glColor3ub(43, 26, 21);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();

glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.128,0,0);
 glBegin(GL_LINES);
  glColor3ub(43, 26, 21);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//


glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();

glPopMatrix();
glLoadIdentity();



}


void NightRightUpperWindow()
{
    glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(43, 26, 21);
    glVertex2f(-0.855f, 0.07f);
    glVertex2f(-0.855f, -0.02f);
    glVertex2f(-0.805f, -0.02f);
    glVertex2f(-0.805f, 0.07f);



    //right window
    glVertex2f(-0.755f, 0.07f);
glVertex2f(-0.755f, -0.02f);
glVertex2f(-0.705f, -0.02f);
glVertex2f(-0.705f, 0.07f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);

    glVertex2f(-0.87f, 0.07f);
glVertex2f(-0.79f, 0.07f);

glVertex2f(-0.79f, 0.07f);
glVertex2f(-0.81f, 0.09f);

glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.85f, 0.09f);

glVertex2f(-0.85f, 0.09f);
glVertex2f(-0.87f, 0.07f);


//right window top
glVertex2f(-0.77f, 0.07f);
glVertex2f(-0.69f, 0.07f);

glVertex2f(-0.69f, 0.07f);
glVertex2f(-0.71f, 0.09f);

glVertex2f(-0.71f, 0.09f);
glVertex2f(-0.75f, 0.09f);

glVertex2f(-0.75f, 0.09f);
glVertex2f(-0.77f, 0.07f);




//top of window
glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(43, 26, 21);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glPopMatrix();
    glLoadIdentity();



    glRotatef(180,0,1,0);
glPushMatrix();

    glTranslatef(.022,0,0);
        glBegin(GL_QUADS);
    glColor3ub(43, 26, 21);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.1,0,0);
glBegin(GL_LINES);
glColor3ub(43, 26, 21);

glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();

glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

glEnd();
 glPopMatrix();
 glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.12,0,0);
glBegin(GL_QUADS);

glColor3ub(43, 26, 21);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

glEnd();
glLoadIdentity();
glPopMatrix();

glLoadIdentity();


    glLoadIdentity();

}

void NighttopCircle1()
{
double theta;
glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();

}

void NighttopCircle2()
{
    double theta;

    glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(156, 106, 95);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();
}

void NightRightTop()
{
    glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);
glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);
glEnd();

    glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);
glEnd();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(-.02,0,0);
glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

////////////////
glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.01,0,0);
glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//**************
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//**********
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//**********
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//************
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();
glBegin(GL_LINES);
glColor3ub(43, 26, 21);
glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);

glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);

glVertex2f(-0.95f, 0.24f);
glVertex2f(-0.91f, 0.21f);

glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);

glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);


//top
glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);

glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);

glVertex2f(-0.91f, 0.33f);
glVertex2f(-0.91f, 0.243f);

glVertex2f(-0.91f, 0.24f);
glVertex2f(-0.91f, 0.36f);

glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.92f, 0.34f);

glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

glVertex2f(-0.92f, 0.24f);
glVertex2f(-0.91f, 0.24f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);


glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);


glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);


glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

//
glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.33f);

glVertex2f(-0.71f, 0.33f);
glVertex2f(-0.70f, 0.33f);

glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.71f, 0.35f);

//


glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.65f, 0.36f);

glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.70f, 0.33f);

glEnd();


glBegin(GL_QUADS);
glColor3ub(156, 106, 95);

glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);


//
glVertex2f(-0.911f, 0.24f);
glVertex2f(-0.911f, 0.36f);
glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

//
glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);

glEnd();



glBegin(GL_POLYGON);
glColor3ub(156, 106, 95);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);


glEnd();

glPopMatrix();
glLoadIdentity();



glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.03,.06,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();



glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(156, 106, 95);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glBegin(GL_QUADS);
glColor3ub(156, 106, 95);

glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.331f);
glVertex2f(-0.70f, 0.331f);
glVertex2f(-0.70f, 0.36f);

//


glVertex2f(-0.699f, 0.331f);
glVertex2f(-0.65f, 0.331f);
glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.699f, 0.36f);
glEnd();

glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.21,0,0);

glBegin(GL_POLYGON);
glColor3ub(156, 106, 95);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.21,0,0);
NighttopCircle1();
glLoadIdentity();

glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.21,0,0);
NighttopCircle2();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



}

void NightRight_top()
{
    glRotatef(180,0,1,0);
    glPushMatrix();

    glScalef(1,.6,1);
    glTranslatef(-.788,.553,0);
    glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.05f, 0.03f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(-0.04f, 0.03f);
    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(156, 106, 95);
    glVertex2f(-0.05f, 0.015f);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(0.05f, 0.015f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glEnd();
//////////////////////////////////////////////////////////////////////

    glLineWidth(1);
   glBegin(GL_LINES);
   glColor3ub(43, 26, 21);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);

    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f, 0.03f);

    glVertex2f(-0.05f, 0.03f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(0.05f, 0.03f);
    glVertex2f(0.04f, 0.03f);

    glVertex2f(-0.05f, 0.01f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);

    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glVertex2f(-0.04f, 0.05f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(-0.07f, 0.0f);
    glVertex2f(-0.05f, 0.015f);

    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glVertex2f(0.07f, 0.0f);
    glVertex2f(0.05f, 0.015f);
    glEnd();

    glLoadIdentity();
    glPopMatrix();
    glLoadIdentity();


    glRotatef(180,0,1,0);
glPushMatrix();


    glTranslatef(.13,.045,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.007*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.13,.045,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(156, 106, 95);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.006*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


}


void NightRightDownWindow()
{

    glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
//back1
glVertex2f(-0.86f, -0.36f);
glVertex2f(-0.86f, -0.24f);
glVertex2f(-0.80f, -0.24f);
glVertex2f(-0.80f, -0.36f);

//back2
glColor3ub(156, 106, 95);

glVertex2f(-0.858f, -0.36f);
glVertex2f(-0.858f, -0.25f);
glVertex2f(-0.802f, -0.25f);
glVertex2f(-0.802f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.853f, -0.26f);
glVertex2f(-0.853f, -0.36f);
glVertex2f(-0.808f, -0.36f);
glVertex2f(-0.808f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.03*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(156, 106, 95);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.028*cos(theta)),(-.252+.05*sin(theta)));
}
glEnd();







glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.8305+(.0225*cos(theta)),(-.27+.051*sin(theta)));
}
glEnd();

glPopMatrix();
glLoadIdentity();





}



void NightRightDownWIndow2()
{
    glTranslatef(-.1,0,0);
    NightRightDownWindow();
    glLoadIdentity();

}


void NightRightTopWIndow1()
{

    glScalef(.45,.45,1);
    glTranslatef(1.139,.9,0);
    NightRightDownWindow();
    glLoadIdentity();
}

void NightRightTopWIndow2()
{

    glTranslatef(-.21,0,0);
    NightRightTopWIndow1();
    glLoadIdentity();


}


void Nightlalalala()
{

//front
    glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.85f, -0.26f);
glVertex2f(-0.85f, -0.36f);
glVertex2f(-0.81f, -0.36f);
glVertex2f(-0.81f, -0.26f);


glEnd();


double theta;





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.02*cos(theta)),(-.27+.05*sin(theta)));
}
glEnd();




}


void NightRightTopMiddleWindow()
{
glRotatef(180,0,1,0);
glPushMatrix();
    glScalef(0.35,.35,1);
    glTranslatef(-1.59,1.1,0);
    Nightlalalala();
    glLoadIdentity();
    glPopMatrix();
    glLoadIdentity();

}

void RightNightTopMiddleWindow2()
{
    glTranslatef(-.025,0,0);
    NightRightTopMiddleWindow();

      glTranslatef(-.05,0,0);
    NightRightTopMiddleWindow();

      glTranslatef(-.075,0,0);
    NightRightTopMiddleWindow();

      glTranslatef(-.1,0,0);
    NightRightTopMiddleWindow();
//
      glTranslatef(-.125,0,0);
    NightRightTopMiddleWindow();

    glLoadIdentity();
}



void SecondNightRightPart()
{

glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);

glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);
//
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);

glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);

glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);



glEnd();


glBegin(GL_QUADS);
glColor3ub(156, 106, 95);

glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);
    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);
    glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);

glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);

glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);


glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, -0.365f);
    glEnd();
// glLineWidth(3);



    glBegin(GL_QUADS);
glColor3ub(43, 26, 21);


glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.635f, -0.325f);
glVertex2f(-0.635f, -0.305f);
glVertex2f(-0.65f, -0.36f);



glVertex2f(-0.64f, -0.325f);
glVertex2f(-0.37f, -0.325f);
glVertex2f(-0.37f, -0.310f);
glVertex2f(-0.64f, -0.310f);


    glEnd();
    glPopMatrix();
    glLoadIdentity();



}


void NightRightMiddle1()
{
glRotatef(180,0,1,0);
glPushMatrix();
glLineWidth(1.5);

glScalef(.5,1,1);
glTranslatef(-.369,.05,0);
glBegin(GL_QUADS);
glColor3ub(156, 106, 95);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();



    glBegin(GL_LINES);

glColor3ub(43, 26, 21);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

}


void NightRightMiddle2()
{

    glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.619f, -0.31f);
glVertex2f(-0.21f, -0.31f);
glVertex2f(-0.19f, -0.05f);
glVertex2f(-0.619f, -0.06f);





    glEnd();


        glBegin(GL_LINES);
    glColor3ub(43, 26, 21);


    glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);

glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);

    glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

    glVertex2f(-0.19f, -0.04f);
        glVertex2f(-0.64f, -0.04f);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
}


void NightRightMiddle3()
{
    glTranslatef(-.09,0,0);
    NightRightMiddle1();

    glTranslatef(-.18,0,0);
    NightRightMiddle1();

    glTranslatef(-.27,0,0);
    NightRightMiddle1();

    glTranslatef(-.36,0,0);
    NightRightMiddle1();

    glLoadIdentity();
}


void NightRightMiddleDownWindow1()
{

    glRotatef(180,0,1,0);
glPushMatrix();
    glTranslatef(.245,.05,0);
     glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
//back1
glVertex2f(-0.856f, -0.36f);
glVertex2f(-0.856f, -0.24f);
glVertex2f(-0.803f, -0.24f);
glVertex2f(-0.803f, -0.36f);

//back2
glColor3ub(156, 106, 95);

glVertex2f(-0.854f, -0.36f);
glVertex2f(-0.854f, -0.25f);
glVertex2f(-0.805f, -0.25f);
glVertex2f(-0.805f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.85f, -0.26f);
glVertex2f(-0.85f, -0.36f);
glVertex2f(-0.81f, -0.36f);
glVertex2f(-0.81f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.0255*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(156, 106, 95);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.025*cos(theta)),(-.25+.05*sin(theta)));
}
glEnd();






//
glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.02*cos(theta)),(-.27+.05*sin(theta)));
}
glEnd();
//
//
    glLoadIdentity();

    glPopMatrix();
    glLoadIdentity();

}


void NightRightMiddleDownWindow2()
{
    glTranslatef(-.09,0,0);
    NightRightMiddleDownWindow1();

        glTranslatef(-.18,0,0);
    NightRightMiddleDownWindow1();

        glTranslatef(-.27,0,0);
    NightRightMiddleDownWindow1();

        glTranslatef(-.36,0,0);
    NightRightMiddleDownWindow1();

    glLoadIdentity();
}


void NightRightMiddle4()
{
glRotatef(180,0,1,0);
glPushMatrix();

glBegin(GL_POLYGON);
glColor3ub(156, 106, 95);
glVertex2f(-0.639f, -0.039f);
glVertex2f(-0.625f, -0.039f);
glVertex2f(-0.625f, 0.16f);
glVertex2f(-0.639f, 0.17f);
glVertex2f(-0.639f, -0.039f);
glEnd();

glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

    glTranslatef(.287,.05,0);
     glBegin(GL_LINES);
  glColor3ub(43, 26, 21);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



}

void NightRightMiddle6()
{
    //piller


//   glTranslatef(-.08,0,0);
//   RightMiddle4();
//
//      glTranslatef(-.16,0,0);
//   RightMiddle4();
//      glTranslatef(-.24,0,0);
//   RightMiddle4();
//      glTranslatef(-.32,0,0);
//   RightMiddle4();
//      glTranslatef(-.40,0,0);
//   RightMiddle4();

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.367,0.05,0);

 glBegin(GL_LINES);
  glColor3ub(43, 26, 21);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();

   glLoadIdentity();
   glPopMatrix();
   glLoadIdentity();
}

void NightRightMiddle7()
{
    glTranslatef(-.08,0,0);
    NightRightMiddle6();
    glLoadIdentity();

        glTranslatef(-.16,0,0);
    NightRightMiddle6();
    glLoadIdentity();

        glTranslatef(-.24,0,0);
    NightRightMiddle6();
    glLoadIdentity();

        glTranslatef(-.32,0,0);
    NightRightMiddle6();
    glLoadIdentity();
}

void NightSecondRightTopWindow1()
{
       glTranslatef(-.006,.27,0);
       NightRightMiddleDownWindow1();
   glLoadIdentity();
}

void NightSecondRightTopWindow2()
{
       glTranslatef(-.08,0,0);
       NightSecondRightTopWindow1();

        glTranslatef(-.16,0,0);
       NightSecondRightTopWindow1();

        glTranslatef(-.24,0,0);
       NightSecondRightTopWindow1();

        glTranslatef(-.32,0,0);
       NightSecondRightTopWindow1();



        glLoadIdentity();
}



void NightDiamondShowroom2()
{
    glRotatef(180,0,1,0);
glPushMatrix();
       glTranslatef(.054,.21,0);
       NightWhiteDiamond();
      glLoadIdentity();
glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

    glTranslatef(.22,.155,0);
    NightWhiteDiamond();

    glTranslatef(.02,0,0);
    NightWhiteDiamond();

    glTranslatef(.02,0,0);
    NightWhiteDiamond();

    glTranslatef(.05,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();

        glTranslatef(.05,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();

        glTranslatef(.05,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();


    glTranslatef(.05,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();



   glLoadIdentity();

   glPopMatrix();
   glLoadIdentity();

}





void NightRight_RightMiddle()
{
    glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);
glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.239f);
glVertex2f(-0.64f, 0.239f);




    //toppest
glVertex2f(-0.649f, 0.325f);
glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);
    glEnd();

//2nd toppest
   glBegin(GL_POLYGON);
    glColor3ub(156, 106, 95);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.648f, 0.26f);
glVertex2f(-0.648f, 0.245f);
glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);
        glVertex2f(-0.649f, 0.325f);
        glVertex2f(-0.649f, 0.26f);

        glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);

glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);


glVertex2f(-0.19f, 0.325f);
glVertex2f(-0.649f, 0.325f);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.230f);

glVertex2f(-0.19f, 0.230f);
glVertex2f(-0.64f, 0.230f);

glVertex2f(-0.64f, 0.230f);
glVertex2f(-0.64f, -0.04f);

///
  glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.65f, 0.26f);


   glVertex2f(-0.6485f, 0.26f);
glVertex2f(-0.65f, 0.245f);


 glVertex2f(-0.6485f, 0.245f);
glVertex2f(-0.62f, 0.245f);

   glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);

    glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);

glVertex2f(-0.19f, 0.23f);
glVertex2f(-0.19f, 0.26f);


///

    glEnd();

glPopMatrix();
glLoadIdentity();

}







//LEFT PART START






void NightSky()
{


//Left Middle part
    glBegin(GL_QUADS);
glColor3ub(156, 106, 95);

glVertex2f(-0.90f, 0.18f);
glVertex2f(-0.90f, -0.1f);
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, 0.18f);

glEnd();




}

void NightWhiteDiamond2()
{
        glBegin(GL_QUADS);
    glColor3ub(43, 26, 21);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

}

void Nightleft_down()
{
    glBegin(GL_QUADS);
    glColor3ub(43, 26, 21);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.91f, -0.38f);
glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.65f, -0.36f);
glEnd();




  glBegin(GL_QUADS);
  glColor3ub(156, 106, 95);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();



glTranslatef(.22,0,0);
  glBegin(GL_QUADS);
  glColor3ub(156, 106, 95);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();

glLoadIdentity();



glLineWidth(2);


//Left Down Border start
glBegin(GL_LINES);

glColor3ub(43, 26, 21);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

//Left Down Border End
glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);

glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);

glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

glVertex2f(-0.65f, -0.11f);
glVertex2f(-0.65f, -0.09f);

glEnd();


glTranslatef(.22,0,0);
glBegin(GL_LINES);

glColor3ub(43, 26, 21);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);


//
glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);
glEnd();
glLoadIdentity();






  glBegin(GL_QUADS);
  glColor3ub(156, 106, 95);

glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

//leftDown middle
glVertex2f(-0.87f, -0.112f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.69f, -0.36f);
glVertex2f(-0.69f, -0.112f);

glEnd();


//left down piller start

glBegin(GL_LINES);
glColor3ub(43, 26, 21);

glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.78f, -0.35f);

glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.77f, -0.35f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.77f, -0.12f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.78f, -0.12f);



glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.785f, -0.36f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.765f, -0.36f);


glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.785f, -0.11f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.765f, -0.11f);

glEnd();
//left down piller End

}


void NightleftMiddle()
{

//upper

    glBegin(GL_QUADS);
      glColor3ub(156, 106, 95);
glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);

glTranslatef(.01,0,0);
//left mddle piller1
glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);


glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);


    glEnd();
    glLoadIdentity();

//left mddle piller border1
 glBegin(GL_LINES);
  glColor3ub(43, 26, 21);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);


glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);


glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);


glVertex2f(-0.92f, 0.21f);
glVertex2f(-0.92f, 0.18f);


glEnd();

//second left piller2


glTranslatef(.025,0,0);

glBegin(GL_LINES);
  glColor3ub(43, 26, 21);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();


///3

glTranslatef(.245,0,0);
 glBegin(GL_LINES);
  glColor3ub(43, 26, 21);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.915f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.895f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();



////////////////


glTranslatef(.22,0,0);

glBegin(GL_LINES);
  glColor3ub(43, 26, 21);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();




glTranslatef(.128,0,0);
 glBegin(GL_LINES);
  glColor3ub(43, 26, 21);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//


glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();





}


void NightLeftUpperWindow()
{
    glBegin(GL_QUADS);
    glColor3ub(43, 26, 21);
    glVertex2f(-0.855f, 0.07f);
    glVertex2f(-0.855f, -0.02f);
    glVertex2f(-0.805f, -0.02f);
    glVertex2f(-0.805f, 0.07f);



    //right window
    glVertex2f(-0.755f, 0.07f);
glVertex2f(-0.755f, -0.02f);
glVertex2f(-0.705f, -0.02f);
glVertex2f(-0.705f, 0.07f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);

    glVertex2f(-0.87f, 0.07f);
glVertex2f(-0.79f, 0.07f);

glVertex2f(-0.79f, 0.07f);
glVertex2f(-0.81f, 0.09f);

glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.85f, 0.09f);

glVertex2f(-0.85f, 0.09f);
glVertex2f(-0.87f, 0.07f);


//right window top
glVertex2f(-0.77f, 0.07f);
glVertex2f(-0.69f, 0.07f);

glVertex2f(-0.69f, 0.07f);
glVertex2f(-0.71f, 0.09f);

glVertex2f(-0.71f, 0.09f);
glVertex2f(-0.75f, 0.09f);

glVertex2f(-0.75f, 0.09f);
glVertex2f(-0.77f, 0.07f);




//top of window
glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(43, 26, 21);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

    glTranslatef(.022,0,0);
        glBegin(GL_QUADS);
    glColor3ub(43, 26, 21);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glLoadIdentity();




glTranslatef(.1,0,0);
glBegin(GL_LINES);
glColor3ub(43, 26, 21);

glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();

        glBegin(GL_QUADS);
    glColor3ub(43, 26, 21);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

    glTranslatef(.022,0,0);
        glBegin(GL_QUADS);
    glColor3ub(43, 26, 21);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glLoadIdentity();



    glLoadIdentity();

}



void NightLeftTop()
{
    glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);
glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);
glEnd();

    glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);
glEnd();


glTranslatef(-.02,0,0);
glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glLoadIdentity();

glTranslatef(.01,0,0);
glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();



glLoadIdentity();




glBegin(GL_LINES);
glColor3ub(43, 26, 21);

glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);

glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);

glVertex2f(-0.95f, 0.24f);
glVertex2f(-0.91f, 0.21f);

glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);

glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);


//top
glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);

glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);

glVertex2f(-0.91f, 0.33f);
glVertex2f(-0.91f, 0.243f);

glVertex2f(-0.91f, 0.24f);
glVertex2f(-0.91f, 0.36f);

glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.92f, 0.34f);

glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

glVertex2f(-0.92f, 0.24f);
glVertex2f(-0.91f, 0.24f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
//

glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);


glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);


glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

//
glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.33f);

glVertex2f(-0.71f, 0.33f);
glVertex2f(-0.70f, 0.33f);

glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.71f, 0.35f);

//


glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.65f, 0.36f);

glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.70f, 0.33f);

glEnd();


glBegin(GL_QUADS);
glColor3ub(156, 106, 95);

glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);


//
glVertex2f(-0.911f, 0.24f);
glVertex2f(-0.911f, 0.36f);
glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

//
glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);

glEnd();



glBegin(GL_POLYGON);
glColor3ub(156, 106, 95);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);


glEnd();


glTranslatef(.03,.06,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();


glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(156, 106, 95);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();






glBegin(GL_QUADS);
glColor3ub(156, 106, 95);

glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.331f);
glVertex2f(-0.70f, 0.331f);
glVertex2f(-0.70f, 0.36f);

//


glVertex2f(-0.699f, 0.331f);
glVertex2f(-0.65f, 0.331f);
glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.699f, 0.36f);
glEnd();








glTranslatef(.21,0,0);


glBegin(GL_POLYGON);
glColor3ub(156, 106, 95);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glEnd();

glLoadIdentity();


glTranslatef(.21,0,0);
NighttopCircle1();
glLoadIdentity();


glTranslatef(.21,0,0);
NighttopCircle2();
glLoadIdentity();



}

void NightLefttop()
{
    glScalef(1,.6,1);

    glTranslatef(-.788,.553,0);
    glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.05f, 0.03f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(-0.04f, 0.03f);
    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(156, 106, 95);
    glVertex2f(-0.05f, 0.015f);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(0.05f, 0.015f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glEnd();
//////////////////////////////////////////////////////////////////////

    glLineWidth(1);
   glBegin(GL_LINES);
   glColor3ub(43, 26, 21);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);

    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f, 0.03f);

    glVertex2f(-0.05f, 0.03f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(0.05f, 0.03f);
    glVertex2f(0.04f, 0.03f);

    glVertex2f(-0.05f, 0.01f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);

    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glVertex2f(-0.04f, 0.05f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(-0.07f, 0.0f);
    glVertex2f(-0.05f, 0.015f);

    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glVertex2f(0.07f, 0.0f);
    glVertex2f(0.05f, 0.015f);
    glEnd();




    glLoadIdentity();

    glTranslatef(.13,.045,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.007*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();


glTranslatef(.13,.045,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(156, 106, 95);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.006*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();















}


void NightLeftDownWindow()
{
    glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
//back1
glVertex2f(-0.86f, -0.36f);
glVertex2f(-0.86f, -0.24f);
glVertex2f(-0.80f, -0.24f);
glVertex2f(-0.80f, -0.36f);

//back2
glColor3ub(156, 106, 95);

glVertex2f(-0.858f, -0.36f);
glVertex2f(-0.858f, -0.25f);
glVertex2f(-0.802f, -0.25f);
glVertex2f(-0.802f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.853f, -0.26f);
glVertex2f(-0.853f, -0.36f);
glVertex2f(-0.808f, -0.36f);
glVertex2f(-0.808f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.03*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(156, 106, 95);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.028*cos(theta)),(-.252+.05*sin(theta)));
}
glEnd();







glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.8305+(.0225*cos(theta)),(-.27+.051*sin(theta)));
}
glEnd();







}



void NightLeftDownWIndow2()
{
    glTranslatef(.1,0,0);
    NightLeftDownWindow();
    glLoadIdentity();
}


void NightLeftTopWIndow1()
{
    glScalef(.45,.45,1);
    glTranslatef(-1.139,.9,0);
    NightLeftDownWindow();

    glLoadIdentity();
}

void NightLeftTopWIndow2()
{
    glTranslatef(.21,0,0);
    NightLeftTopWIndow1();
    glLoadIdentity();

}



void Nighttopmiddle_window()
{

    glScalef(0.35,.35,1);
    glTranslatef(-1.59,1.1,0);
    Nightlalalala();
    glLoadIdentity();

}

void Nighttopmiddle_window2()
{
    glTranslatef(.025,0,0);
    Nighttopmiddle_window();

      glTranslatef(.05,0,0);
    Nighttopmiddle_window();

      glTranslatef(.075,0,0);
    Nighttopmiddle_window();

      glTranslatef(.1,0,0);
    Nighttopmiddle_window();
//
      glTranslatef(.125,0,0);
    Nighttopmiddle_window();

    glLoadIdentity();
}



void SecondNightLeftPart()
{
    glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);

glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);
//
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);

glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);

glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);



glEnd();


glBegin(GL_QUADS);
glColor3ub(156, 106, 95);

glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);
    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);
    glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);

glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);

glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);


glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, -0.365f);
    glEnd();
// glLineWidth(3);



    glBegin(GL_QUADS);
glColor3ub(43, 26, 21);


glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.635f, -0.325f);
glVertex2f(-0.635f, -0.305f);
glVertex2f(-0.65f, -0.36f);



glVertex2f(-0.64f, -0.325f);
glVertex2f(-0.37f, -0.325f);
glVertex2f(-0.37f, -0.310f);
glVertex2f(-0.64f, -0.310f);


    glEnd();



}


void NightMiddle1()
{
    glLineWidth(1.5);
  glScalef(.5,1,1);
    glTranslatef(-.369,.05,0);
glBegin(GL_QUADS);
glColor3ub(156, 106, 95);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();



    glBegin(GL_LINES);

glColor3ub(43, 26, 21);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

glEnd();

glLoadIdentity();

}


void NightMiddle2()
{
    glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.619f, -0.31f);
glVertex2f(-0.21f, -0.31f);
glVertex2f(-0.19f, -0.05f);
glVertex2f(-0.619f, -0.06f);





    glEnd();


        glBegin(GL_LINES);
    glColor3ub(43, 26, 21);


    glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);

glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);

    glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

    glVertex2f(-0.19f, -0.04f);
        glVertex2f(-0.64f, -0.04f);
    glEnd();
}


void NightMiddle3()
{
    glTranslatef(.09,0,0);
    NightMiddle1();

    glTranslatef(.18,0,0);
    NightMiddle1();

    glTranslatef(.27,0,0);
    NightMiddle1();

    glTranslatef(.36,0,0);
    NightMiddle1();

    glLoadIdentity();
}


void NightLeftMiddleDownWindow1()
{
    glTranslatef(.245,.05,0);
     glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
//back1
glVertex2f(-0.856f, -0.36f);
glVertex2f(-0.856f, -0.24f);
glVertex2f(-0.803f, -0.24f);
glVertex2f(-0.803f, -0.36f);

//back2
glColor3ub(156, 106, 95);

glVertex2f(-0.854f, -0.36f);
glVertex2f(-0.854f, -0.25f);
glVertex2f(-0.805f, -0.25f);
glVertex2f(-0.805f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
glVertex2f(-0.85f, -0.26f);
glVertex2f(-0.85f, -0.36f);
glVertex2f(-0.81f, -0.36f);
glVertex2f(-0.81f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.0255*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(156, 106, 95);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.025*cos(theta)),(-.25+.05*sin(theta)));
}
glEnd();






//
glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.02*cos(theta)),(-.27+.05*sin(theta)));
}
glEnd();
//
//
    glLoadIdentity();

}


void NightLeftMiddleDownWindow2()
{
    glTranslatef(.09,0,0);
    NightLeftMiddleDownWindow1();

        glTranslatef(.18,0,0);
    NightLeftMiddleDownWindow1();

        glTranslatef(.27,0,0);
    NightLeftMiddleDownWindow1();

        glTranslatef(.36,0,0);
    NightLeftMiddleDownWindow1();






    glLoadIdentity();
}


void NightMiddle4()
{

glBegin(GL_POLYGON);
glColor3ub(156, 106, 95);
glVertex2f(-0.639f, -0.039f);
glVertex2f(-0.625f, -0.039f);
glVertex2f(-0.625f, 0.16f);
glVertex2f(-0.639f, 0.17f);
glVertex2f(-0.639f, -0.039f);
glEnd();



    glTranslatef(.287,.05,0);
     glBegin(GL_LINES);
  glColor3ub(43, 26, 21);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();




}

void NightMiddle6()
{
    //piller

   glTranslatef(.08,0,0);
   NightMiddle4();

      glTranslatef(.16,0,0);
   NightMiddle4();
      glTranslatef(.24,0,0);
   NightMiddle4();
      glTranslatef(.32,0,0);
   NightMiddle4();
      glTranslatef(.40,0,0);
   NightMiddle4();



   glLoadIdentity();
}

void NightSecondLeftTopWindow1()
{
       glTranslatef(.006,.27,0);
       NightLeftMiddleDownWindow1();
   glLoadIdentity();
}

void NightSecondLeftTopWindow2()
{
       glTranslatef(.08,0,0);
       NightSecondLeftTopWindow1();

        glTranslatef(.16,0,0);
       NightSecondLeftTopWindow1();

        glTranslatef(.24,0,0);
       NightSecondLeftTopWindow1();

        glTranslatef(.32,0,0);
       NightSecondLeftTopWindow1();



        glLoadIdentity();
}



void NightDiamondShowroom()
{
       glTranslatef(.054,.21,0);
    NightWhiteDiamond();
      glLoadIdentity();


    glTranslatef(.22,.155,0);
    NightWhiteDiamond();

    glTranslatef(.02,0,0);
    NightWhiteDiamond();

    glTranslatef(.02,0,0);
    NightWhiteDiamond();

    glTranslatef(.05,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();

        glTranslatef(.05,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();

        glTranslatef(.05,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();


            glTranslatef(.05,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();
    glTranslatef(.02,0,0);
    NightWhiteDiamond();



   glLoadIdentity();
}


void NightMiddle5()
{
    glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);
glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.239f);
glVertex2f(-0.64f, 0.239f);




    //toppest
glVertex2f(-0.649f, 0.325f);
glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);
    glEnd();

//2nd toppest
   glBegin(GL_POLYGON);
    glColor3ub(156, 106, 95);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.648f, 0.26f);
glVertex2f(-0.648f, 0.245f);
glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);
        glVertex2f(-0.649f, 0.325f);
        glVertex2f(-0.649f, 0.26f);

        glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);

glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);


glVertex2f(-0.19f, 0.325f);
glVertex2f(-0.649f, 0.325f);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.230f);

glVertex2f(-0.19f, 0.230f);
glVertex2f(-0.64f, 0.230f);

glVertex2f(-0.64f, 0.230f);
glVertex2f(-0.64f, -0.04f);

///
  glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.65f, 0.26f);


   glVertex2f(-0.6485f, 0.26f);
glVertex2f(-0.65f, 0.245f);


 glVertex2f(-0.6485f, 0.245f);
glVertex2f(-0.62f, 0.245f);

   glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);

    glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);

glVertex2f(-0.19f, 0.23f);
glVertex2f(-0.19f, 0.26f);


///

    glEnd();



}

//LEFT PART END


void NightRightPart()
{

     NightSky2();
	 SecondNightRightPart();
    NightRight_Down();
    NightRight_RightMiddle();
    NightRight_Middle();
    NightRightUpperWindow();//
     NightRightTop();
     NightRight_top();
//
     NightRightDownWindow();
     NightRightDownWIndow2();
     NightRightTopWIndow1();
     NightRightTopWIndow2();
     NightRightTopMiddleWindow();
     RightNightTopMiddleWindow2();
     NightRightMiddle1();
     NightRightMiddle2();
     NightRightMiddle3();
     NightRightMiddleDownWindow1();
     NightRightMiddleDownWindow2();
//
//
     NightRightMiddle4();
     NightRightMiddle6();
NightSecondRightTopWindow1();
NightSecondRightTopWindow2();
NightDiamondShowroom2();
NightRightMiddle7();
}

void NightLeftPart()
{





     NightSky();
	 SecondNightLeftPart();
    Nightleft_down();
    NightMiddle5();
    NightleftMiddle();
    NightLeftUpperWindow();//
     NightLeftTop();
     NightLefttop();

    NightLeftDownWindow();
    NightLeftDownWIndow2();
    NightLeftTopWIndow1();
    NightLeftTopWIndow2();
    Nighttopmiddle_window();
    Nighttopmiddle_window2();
    NightMiddle1();
    NightMiddle2();
    NightMiddle3();
    NightLeftMiddleDownWindow1();
    NightLeftMiddleDownWindow2();


    NightMiddle4();
    NightMiddle6();
NightSecondLeftTopWindow1();
NightSecondLeftTopWindow2();
NightDiamondShowroom();
}




///

void NightLeft_stair()
{
glBegin(GL_POLYGON);
glColor3ub(156, 106, 95);

glVertex2f(-0.3f, -0.32f);
glVertex2f(-0.29f, -0.3105f);
glVertex2f(-0.373f, -0.3105f);
glVertex2f(-0.373f, -0.38f);//
glVertex2f(-0.29f, -0.38f);//
glVertex2f(-0.175f, -0.03f);//
glVertex2f(-0.18f, 0.01f);//
glVertex2f(-0.29f, -0.30f);
glEnd();

glLineWidth(2);
// stair_border
    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);

//    glVertex2f(-0.3f, -0.32f);
//glVertex2f(-0.29f, -0.3105f);
glVertex2f(-0.295f, -0.3105f);
glVertex2f(-0.373f, -0.3105f);

glVertex2f(-0.373f, -0.3105f);
glVertex2f(-0.373f, -0.38f);

glVertex2f(-0.373f, -0.38f);//
glVertex2f(-0.29f, -0.38f);

glVertex2f(-0.29f, -0.38f);//
glVertex2f(-0.175f, -0.03f);

glVertex2f(-0.175f, -0.03f);//
glVertex2f(-0.18f, 0.01f);

glVertex2f(-0.18f, 0.01f);
glVertex2f(-0.295f, -0.3105f);
    glEnd();

}

void NightRight_Stair()
{
glRotatef(180,0,1,0);
glPushMatrix();
NightLeft_stair();
glPopMatrix();
glLoadIdentity();
}

void NightStair_Step()
{
    glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);

glVertex2f(-0.2918f, -0.385f);
glVertex2f(0.2915f, -0.385f);
glVertex2f(0.175f, -0.03f);
glVertex2f(-0.174f, -0.03f);
    glEnd();




    //start step


    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);
glVertex2f(-0.2918f, -0.385f);
glVertex2f(0.2915f, -0.385f);

glVertex2f(-0.29f, -0.38f);
glVertex2f(0.29f, -0.38f);

glVertex2f(-0.289f, -0.375f);
glVertex2f(0.289f, -0.375f);

glVertex2f(-0.288f, -0.370f);
glVertex2f(0.288f, -0.370f);

glVertex2f(-0.284f, -0.360f);
glVertex2f(0.284f, -0.360f);

glVertex2f(-0.283f, -0.358f);
glVertex2f(0.283f, -0.358f);


glVertex2f(-0.279f, -0.348f);
glVertex2f(0.279f, -0.348f);

glVertex2f(-0.278f, -0.346f);
glVertex2f(0.278f, -0.346f);

glVertex2f(-0.275f, -0.336f);
glVertex2f(0.275f, -0.336f);

glVertex2f(-0.274f, -0.334f);
glVertex2f(0.274f, -0.334f);


glVertex2f(-0.271f, -0.324f);
glVertex2f(0.271f, -0.324f);

glVertex2f(-0.270f, -0.322f);
glVertex2f(0.270f, -0.322f);

glVertex2f(-0.267f, -0.312f);
glVertex2f(0.267f, -0.312f);

glVertex2f(-0.266f, -0.310f);
glVertex2f(0.266f, -0.310f);

glVertex2f(-0.263f, -0.300f);
glVertex2f(0.263f, -0.300f);

glVertex2f(-0.262f, -0.298f);
glVertex2f(0.262f, -0.298f);


glVertex2f(-0.259f, -0.288f);
glVertex2f(0.259f, -0.288f);

glVertex2f(-0.256f, -0.278f);
glVertex2f(0.256f, -0.278f);

glVertex2f(-0.255f, -0.276f);
glVertex2f(0.255f, -0.276f);


glVertex2f(-0.252f, -0.266f);
glVertex2f(0.252f, -0.266f);

glVertex2f(-0.251f, -0.262f);
glVertex2f(0.251f, -0.262f);


glVertex2f(-0.248f, -0.252f);
glVertex2f(0.248f, -0.252f);

glVertex2f(-0.247f, -0.250f);
glVertex2f(0.247f, -0.250f);

glVertex2f(-0.244f, -0.240f);
glVertex2f(0.244f, -0.240f);

glVertex2f(-0.243f, -0.238f);
glVertex2f(0.243f, -0.238f);


glVertex2f(-0.240f, -0.228f);
glVertex2f(0.240f, -0.228f);

glVertex2f(-0.239f, -0.226f);
glVertex2f(0.239f, -0.226f);

glVertex2f(-0.236f, -0.216f);
glVertex2f(0.236f, -0.216f);

glVertex2f(-0.231f, -0.212f);
glVertex2f(0.231f, -0.212f);

glVertex2f(-0.23f, -0.202f);
glVertex2f(0.23f, -0.202f);

glVertex2f(-0.228f, -0.200f);
glVertex2f(0.228f, -0.200f);

glVertex2f(-0.227f, -0.190f);
glVertex2f(0.227f, -0.190f);

glVertex2f(-0.226f, -0.188f);
glVertex2f(0.226f, -0.188f);

glVertex2f(-0.225f, -0.186f);
glVertex2f(0.225f, -0.186f);

glVertex2f(-0.222f, -0.176f);
glVertex2f(0.222f, -0.176f);

glVertex2f(-0.221f, -0.172f);
glVertex2f(0.221f, -0.172f);

glVertex2f(-0.219f, -0.162f);
glVertex2f(0.219f, -0.162f);

glVertex2f(-0.218f, -0.160f);
glVertex2f(0.218f, -0.160f);

glVertex2f(-0.216f, -0.150f);
glVertex2f(0.216f, -0.150f);

glVertex2f(-0.215f, -0.148f);
glVertex2f(0.215f, -0.148f);

glVertex2f(-0.213f, -0.138f);
glVertex2f(0.213f, -0.138f);

glVertex2f(-0.212f, -0.136f);
glVertex2f(0.212f, -0.136f);

glVertex2f(-0.210f, -0.126f);
glVertex2f(0.210f, -0.126f);
glVertex2f(-0.209f, -0.124f);
glVertex2f(0.209f, -0.124f);


glVertex2f(-0.207f, -0.114f);
glVertex2f(0.207f, -0.114f);

glVertex2f(-0.206f, -0.112f);
glVertex2f(0.206f, -0.112f);

glVertex2f(-0.204f, -0.102f);
glVertex2f(0.204f, -0.102f);

glVertex2f(-0.203f, -0.100f);
glVertex2f(0.203f, -0.100f);

glVertex2f(-0.200f, -0.090f);
glVertex2f(0.200f, -0.090f);

glVertex2f(-0.199f, -0.088f);
glVertex2f(0.199f, -0.088f);


glVertex2f(-0.195f, -0.078f);
glVertex2f(0.195f, -0.078f);

glVertex2f(-0.191f, -0.072f);
glVertex2f(0.191f, -0.072f);

glVertex2f(-0.187f, -0.062f);
glVertex2f(0.187f, -0.062f);

glVertex2f(-0.186f, -0.060f);
glVertex2f(0.186f, -0.060f);


glVertex2f(-0.186f, -0.060f);
glVertex2f(0.186f, -0.060f);

glVertex2f(-0.183f, -0.05f);
glVertex2f(0.183f, -0.050f);

glVertex2f(-0.182f, -0.048f);
glVertex2f(0.182f, -0.048f);

glVertex2f(-0.179f, -0.038f);
glVertex2f(0.179f, -0.038f);

glVertex2f(-0.178f, -0.036f);
glVertex2f(0.178f, -0.036f);

//glVertex2f(-0.175f, -0.026f);
//glVertex2f(0.175f, -0.026f);
//
//glVertex2f(-0.174f, -0.024f);
//glVertex2f(0.174f, -0.024f);


    glEnd();






}





void NightMiddleQuad()
{

glBegin(GL_QUADS);
glColor3ub(156, 106, 95);

glVertex2f(-0.189f, 0.325f);
glVertex2f(-0.189f, -0.05f);
glVertex2f(0.189f, -0.05f);
glVertex2f(0.189f, 0.325f);

//glVertex2f(-0.189f, -0.01f);
//glVertex2f(-0.18f, 0.01f);
//glVertex2f(-0.18f, 0.36f);
//glVertex2f(-0.189f, 0.36f);
    glEnd();




        glBegin(GL_LINES);
    glColor3ub(43, 26, 21);

    glVertex2f(-0.189f, 0.325f);
glVertex2f(-0.189f, -0.05f);
glVertex2f(-0.189f, -0.05f);
glVertex2f(0.189f, -0.05f);
glVertex2f(0.189f, -0.05f);
glVertex2f(0.189f, 0.325f);
glVertex2f(0.189f, 0.325f);
    glVertex2f(-0.189f, 0.325f);



    //base

//glVertex2f(-0.175f, -0.01f);
//
//glVertex2f(-0.18f, -0.03f);
//glVertex2f(-0.148f, -0.03f);
//
//glVertex2f(-0.155f, -0.001f);

    glEnd();

}

void NightMiddleLeftPiller()
{
glTranslatef(.005,0,0);
        glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);

    glVertex2f(-0.187f, 0.378f);
glVertex2f(-0.187f, 0.323f);
glVertex2f(-0.142f, 0.323f);
glVertex2f(-0.142f, 0.378f);
    glEnd();

        glBegin(GL_LINES);
glColor3ub(43, 26, 21);

//glVertex2f(-0.189f, -0.01f);
//glVertex2f(-0.175f, 0.01f);
//
//glVertex2f(-0.175f, 0.01f);
//glVertex2f(-0.175f, 0.36f);
//
//glVertex2f(-0.175f, 0.36f);
//glVertex2f(-0.189f, 0.36f);
//
//glVertex2f(-0.189f, 0.36f);
//glVertex2f(-0.189f, -0.01f);

//iiiiiiiiiiiiiii
glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.155f, -0.01f);

glVertex2f(-0.155f, -0.01f);
glVertex2f(-0.155f, 0.38f);

glVertex2f(-0.155f, 0.38f);
glVertex2f(-0.175f, 0.38f);


///

///////////////////////////
glVertex2f(-0.187f, 0.40f);
glVertex2f(-0.187f, -0.01f);

glVertex2f(-0.187f, -0.01f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.175f, 0.41f);

glVertex2f(-0.175f, 0.41f);
glVertex2f(-0.187f, 0.40f);



    glEnd();






  glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.33,0,0);
glBegin(GL_LINES);
glColor3ub(43, 26, 21);

glVertex2f(-0.189f, -0.035f);
glVertex2f(-0.175f, 0.00f);

glVertex2f(-0.175f, 0.00f);
glVertex2f(-0.175f, 0.38f);

glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.189f, 0.38f);

glVertex2f(-0.189f, 0.38f);
glVertex2f(-0.189f, -0.035f);


glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



glLoadIdentity();

    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);

glVertex2f(-0.17f, -.012);
glVertex2f(-0.178f, -0.03f);

glEnd();


}






void NightMiddleTop()
{
    glScalef(.91,1,1);
    glTranslatef(.71,.05,0);
        glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);


/////////////////////

glVertex2f(-0.91f, 0.35f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);
/////////////////////
    glEnd();



glBegin(GL_POLYGON);
glColor3ub(156, 106, 95);

glVertex2f(-0.90f, 0.355f);
glVertex2f(-0.89f, 0.365f);
glVertex2f(-0.89f, 0.375f);
glVertex2f(-0.88f, 0.375f);
glVertex2f(-0.875f, 0.365f);
glVertex2f(-0.87f, 0.355f);


glEnd();


glBegin(GL_LINES);
glColor3ub(43, 26, 21);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.895f, 0.37f);

glVertex2f(-0.895f, 0.37f);
glVertex2f(-0.89f, 0.38f);

glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

    glEnd();


    glLineWidth(2);
        glBegin(GL_LINES);
    glColor3ub(43, 26, 21);

glVertex2f(-0.91f, 0.34f);
glVertex2f(-0.91f, 0.331f);


glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);


glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);


glVertex2f(-0.86f, 0.36f);
glVertex2f(-0.88f, 0.36f);

    glEnd();


        glLoadIdentity();

        /////////////////////

     glScalef(.91,1,1);
    glTranslatef(.74,.11,0);

        double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();




glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(156, 106, 95);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();


glLoadIdentity();




}



///////////////////////////////////////////////////////////////////
//Tight Middle





void NightRightMiddleTop()
{
    glRotatef(180,0,1,0);
glPushMatrix();
    glScalef(.91,1,1);
    glTranslatef(.71,.05,0);
        glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);


/////////////////////

glVertex2f(-0.91f, 0.35f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);
/////////////////////
    glEnd();



glBegin(GL_POLYGON);
glColor3ub(156, 106, 95);

glVertex2f(-0.90f, 0.355f);
glVertex2f(-0.89f, 0.365f);
glVertex2f(-0.89f, 0.375f);
glVertex2f(-0.88f, 0.375f);
glVertex2f(-0.875f, 0.365f);
glVertex2f(-0.87f, 0.355f);


glEnd();


glBegin(GL_LINES);
glColor3ub(43, 26, 21);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.895f, 0.37f);

glVertex2f(-0.895f, 0.37f);
glVertex2f(-0.89f, 0.38f);

glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

    glEnd();


    glLineWidth(2);
        glBegin(GL_LINES);
    glColor3ub(43, 26, 21);

glVertex2f(-0.91f, 0.34f);
glVertex2f(-0.91f, 0.331f);


glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);


glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);


glVertex2f(-0.86f, 0.36f);
glVertex2f(-0.88f, 0.36f);

    glEnd();


        glLoadIdentity();
        glPopMatrix();
        glLoadIdentity();

        /////////////////////
        glRotatef(180,0,1,0);
glPushMatrix();

     glScalef(.91,1,1);
    glTranslatef(.74,.11,0);

        double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();




glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(156, 106, 95);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();


glLoadIdentity();
glPopMatrix();
glLoadIdentity();




}




void NightRightMiddleLeftPiller()
{
    glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.005,0,0);
        glBegin(GL_QUADS);
    glColor3ub(156, 106, 95);

    glVertex2f(-0.187f, 0.378f);
glVertex2f(-0.187f, 0.323f);
glVertex2f(-0.142f, 0.323f);
glVertex2f(-0.142f, 0.378f);
    glEnd();

        glBegin(GL_LINES);
glColor3ub(43, 26, 21);

//glVertex2f(-0.189f, -0.01f);
//glVertex2f(-0.175f, 0.01f);
//
//glVertex2f(-0.175f, 0.01f);
//glVertex2f(-0.175f, 0.36f);
//
//glVertex2f(-0.175f, 0.36f);
//glVertex2f(-0.189f, 0.36f);
//
//glVertex2f(-0.189f, 0.36f);
//glVertex2f(-0.189f, -0.01f);

//iiiiiiiiiiiiiii
glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.155f, -0.01f);

glVertex2f(-0.155f, -0.01f);
glVertex2f(-0.155f, 0.38f);

glVertex2f(-0.155f, 0.38f);
glVertex2f(-0.175f, 0.38f);


///

///////////////////////////
glVertex2f(-0.187f, 0.40f);
glVertex2f(-0.187f, -0.01f);

glVertex2f(-0.187f, -0.01f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.175f, 0.41f);

glVertex2f(-0.175f, 0.41f);
glVertex2f(-0.187f, 0.40f);



    glEnd();


glPopMatrix();
glLoadIdentity();





  glRotatef(360,0,1,0);
glPushMatrix();
glTranslatef(.325,0,0);
glBegin(GL_LINES);
glColor3ub(43, 26, 21);

glVertex2f(-0.189f, -0.035f);
glVertex2f(-0.175f, 0.00f);

glVertex2f(-0.175f, 0.00f);
glVertex2f(-0.175f, 0.38f);

glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.189f, 0.38f);

glVertex2f(-0.189f, 0.38f);
glVertex2f(-0.189f, -0.035f);


glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



glLoadIdentity();
glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);

glVertex2f(-0.17f, -.012);
glVertex2f(-0.178f, -0.03f);

glEnd();
glPopMatrix();
glLoadIdentity();


}



//////////////////////////////////////////Right Middle End

void NightMiddleTop1()
{
    glTranslatef(-.005,0,0);
     glBegin(GL_POLYGON);
    glColor3ub(156, 106, 95);

glVertex2f(-0.10f, 0.325f);
glVertex2f(0.11f, 0.325f);
glVertex2f(0.11f, 0.47f);
glVertex2f(0.07f, 0.49f);
glVertex2f(-0.05f, 0.49f);
glVertex2f(-0.10f, 0.47f);
    glEnd();





    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);
glVertex2f(-0.10f, 0.325f);
glVertex2f(0.11f, 0.325f);
glVertex2f(0.11f, 0.325f);
glVertex2f(0.11f, 0.47f);
glVertex2f(0.11f, 0.47f);
glVertex2f(0.07f, 0.49f);
glVertex2f(0.07f, 0.49f);
glVertex2f(-0.05f, 0.49f);
glVertex2f(-0.05f, 0.49f);
glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.325f);
    glEnd();

    glLoadIdentity();
}


void NightMiddleTop2()
{
glTranslatef(0,0.0,0);
   glBegin(GL_POLYGON);
    glColor3ub(156, 106, 95);

    glVertex2f(-0.10f, 0.45f);
glVertex2f(-0.13f, 0.48f);
glVertex2f(-0.06f, 0.51f);
glVertex2f(0.07f, 0.51f);
glVertex2f(0.13f, 0.48f);
glVertex2f(0.11f, 0.45f);
    glEnd();







    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);
          glVertex2f(-0.10f, 0.45f);
glVertex2f(-0.13f, 0.48f);

 glVertex2f(-0.13f, 0.48f);
glVertex2f(-0.06f, 0.51f);


  glVertex2f(-0.06f, 0.51f);
glVertex2f(0.07f, 0.51f);

  glVertex2f(0.07f, 0.51f);
glVertex2f(0.13f, 0.48f);

 glVertex2f(0.13f, 0.48f);
glVertex2f(0.11f, 0.45f);

 glVertex2f(0.11f, 0.45f);
      glVertex2f(-0.10f, 0.45f);

    glEnd();










    glLoadIdentity();

}



void NightMiddleTop3()
{

    glTranslatef(-0.005,.02,0);
    glBegin(GL_POLYGON);
    glColor3ub(156, 106, 95);

    glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.487f);//
glVertex2f(-0.05f, 0.515f);
glVertex2f(0.06f, 0.515f);
glVertex2f(0.11f, 0.49f);//
glVertex2f(0.11f, 0.47f);


    glEnd();

glLineWidth(6);

    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);




    glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.487f);//


glVertex2f(-0.10f, 0.487f);//
glVertex2f(-0.05f, 0.515f);

glVertex2f(-0.05f, 0.515f);
glVertex2f(0.06f, 0.515f);


glVertex2f(0.06f, 0.515f);
glVertex2f(0.11f, 0.49f);//


glVertex2f(0.11f, 0.49f);//
glVertex2f(0.11f, 0.47f);


glVertex2f(0.11f, 0.47f);
    glVertex2f(-0.10f, 0.47f);

    glEnd();



    glLoadIdentity();
}





void NightMiddleTop4()
{

     glBegin(GL_TRIANGLES);

 glColor3ub(43, 26, 21);
 glVertex2f(-0.012,.694);
 glVertex2f(0.012,.694);
 glVertex2f(0,.8);
 glEnd();

 glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(43, 26, 21);
    glVertex2f(0,.75);
    glVertex2f(0,.82);




    glEnd();

 glLineWidth(1.5);

    //////////////////////
    double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(0+(.107*cos(theta)),(.46+.24*sin(theta)));
}
glEnd();



glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(156, 106, 95);
    theta=i*3.1416/180;
    glVertex2f(0+(.104*cos(theta)),(.46+.236*sin(theta)));
}
glEnd();


glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(0+(.055*cos(theta)),(.46+.24*sin(theta)));
}
glEnd();


glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(156, 106, 95);
    theta=i*3.1416/180;
    glVertex2f(0+(.052*cos(theta)),(.46+.236*sin(theta)));
}
glEnd();


glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(0+(.02*cos(theta)),(.69+.021*sin(theta)));
}
glEnd();



glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
   glColor3ub(156, 106, 95);
    theta=i*3.1416/180;
    glVertex2f(0+(.017*cos(theta)),(.694+.012*sin(theta)));
}
glEnd();






}



void NightMiddleTop5()
{
        glBegin(GL_LINES);
    glColor3ub(43, 26, 21);
    glVertex2f(-0.137f, 0.30f);
glVertex2f(0.137f, 0.30f);

    glVertex2f(-0.137f, 0.288f);
glVertex2f(0.137f, 0.288f);

    glEnd();
}

void NightMiddleTop6()
{
    glScalef(1.9,1.26,1);
glTranslatef(0.875,.06,0);
glBegin(GL_LINES);
glColor3ub(43, 26, 21);


glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);

//
glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.892f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glEnd();

glLoadIdentity();
}


void NightMiddleTop7()
{

    glTranslatef(.12,0,0);
    NightMiddleTop6();
    glLoadIdentity();
}



void NightTopMiddleWindow1()
{
    glScalef(.7,1.8,1);
    glTranslatef(.68,.34,0);
    glBegin(GL_QUADS);
glColor3ub(43, 26, 21);
//back1
glVertex2f(-0.86f, -0.36f);
glVertex2f(-0.86f, -0.24f);
glVertex2f(-0.80f, -0.24f);
glVertex2f(-0.80f, -0.36f);

glEnd();




double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(43, 26, 21);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.03*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();

glLoadIdentity();

}

void NightTopMiddleWindow2()
{
    glTranslatef(.214,0,0);
    NightTopMiddleWindow1();
    glLoadIdentity();


    glScalef(1.7,1,1);
        glTranslatef(.107,0,0);
    NightTopMiddleWindow1();
    glLoadIdentity();



        glScalef(1.4,.47,1);
        glTranslatef(.107,.723,0);
    NightTopMiddleWindow1();
    glLoadIdentity();





}

///
void NightLeftMiddlePart()
{
NightMiddleTop();
NightMiddleQuad();
NightStair_Step();
NightMiddleLeftPiller();

}


void NightRightMiddlePart()
{
NightRightMiddleTop();
NightRightMiddleLeftPiller();//

NightLeft_stair();
NightRight_Stair();

}

void NightCenter()
{
    NightLeftMiddlePart();
    NightRightMiddlePart();


    NightMiddleTop4();
    NightMiddleTop3();
    glLineWidth(1.5);
    NightMiddleTop2();
    NightMiddleTop1();
    NightMiddleTop5();
    NightMiddleTop6();
    NightMiddleTop7();
    NightTopMiddleWindow1();
    NightTopMiddleWindow2();



}

///*** Airplane model***///
//void airplane_model()
//{
//    ///Airplane body
//    glBegin(GL_POLYGON);
//    glColor3f(0.0, 0.0, 0.5);
//	glVertex2f(.01, .9);
//	glVertex2f(.06, .9);
//	glVertex2f(.09, .84);
//	glVertex2f(.01, .84);
//	glEnd();
//	glBegin(GL_POLYGON);
//    glColor3f(0.8, 0.8, 1.5);
//	glVertex2f(.01, .84);
//	glVertex2f(.28, .84);
//	glVertex2f(.3, .82);
//	glVertex2f(.32, .82);
//	glVertex2f(.33, .8);
//	glVertex2f(.32, .78);
//	glVertex2f(.03, .78);
//	glVertex2f(.01, .8);
//	glVertex2f(.01, .84);
//	glEnd();
//    ///Airplane lower red part
//	glBegin(GL_POLYGON);
//    glColor3f(0.8, 0.0, 0.0);
//    glVertex2f(.33, .8);
//	glVertex2f(.32, .78);
//	glVertex2f(.03, .78);
//	glVertex2f(.01, .8);
//	glEnd();
//    ///Airplane windows
//    glBegin(GL_TRIANGLES);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.28, .84);
//	glVertex2f(.3, .82);
//	glVertex2f(.28, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.2, .83);
//	glVertex2f(.21, .83);
//	glVertex2f(.21, .82);
//	glVertex2f(.2, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.22, .83);
//	glVertex2f(.23, .83);
//	glVertex2f(.23, .82);
//	glVertex2f(.22, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.18, .83);
//	glVertex2f(.19, .83);
//	glVertex2f(.19, .82);
//	glVertex2f(.18, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.16, .83);
//	glVertex2f(.17, .83);
//	glVertex2f(.17, .82);
//	glVertex2f(.16, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.14, .83);
//	glVertex2f(.15, .83);
//	glVertex2f(.15, .82);
//	glVertex2f(.14, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.12, .83);
//	glVertex2f(.13, .83);
//	glVertex2f(.13, .82);
//	glVertex2f(.12, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.1, .83);
//	glVertex2f(.11, .83);
//	glVertex2f(.11, .82);
//	glVertex2f(.1, .82);
//	glEnd();
//    glBegin(GL_QUADS);
//    glColor3f(0.0, 0.0, 0.0);
//	glVertex2f(.08, .83);
//	glVertex2f(.09, .83);
//	glVertex2f(.09, .82);
//	glVertex2f(.08, .82);
//	glEnd();
//    ///Airplane wings
//    glBegin(GL_POLYGON);
//    glColor3f(0.0, 0.0, 0.5);
//	glVertex2f(.13, .84);
//	glVertex2f(.12, .87);
//	glVertex2f(.16, .87);
//	glVertex2f(.19, .84);
//	glEnd();
//    glBegin(GL_POLYGON);
//    glColor3f(0.0, 0.0, 0.5);
//	glVertex2f(.13, .78);
//	glVertex2f(.12, .75);
//	glVertex2f(.16, .75);
//	glVertex2f(.19, .78);
//	glEnd();
//}


//void airplane_Rotate(){
//    glTranslatef(1,0,0);
//    glRotatef(180,0,1,0);
//    glPushMatrix();
//    airplane_model();
//    glPopMatrix();
//    glLoadIdentity();
//
//}

//void Dynamic_Airplane()
//{
//    glPushMatrix();
//    glTranslatef(position2,0,0);
//    airplane_Rotate();
//    glPopMatrix();
//    glLoadIdentity();
//}



//void NightSun()
//{
//double theta;
//glBegin(GL_POLYGON);
//for(int i=0;i<360;i++)
//{
//    glColor3ub(255, 166, 0);
//    theta=i*3.1416/180;
//    glVertex2f(0.68+(.05*cos(theta)),(0.4+.075*sin(theta)));
//}
//glEnd();
//}

//void NightSun_Shine()
//{
//    glPushMatrix();
//    glTranslatef(0,position3,0);
//    NightSun();
//    glPopMatrix();
//    glLoadIdentity();
//}


void Moon()
{
    double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255,255,255);
    theta=i*3.1416/180;
    glVertex2f(-.82+(.05*cos(theta)),(0.86+.075*sin(theta)));
}
glEnd();



glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
glColor3ub(13,13,13);

    theta=i*3.1416/180;
    glVertex2f(-.84+(.05*cos(theta)),(0.88+.076*sin(theta)));
}
glEnd();


}

void MoonRotate()
{
  glRotatef(180,0,1,0);
glPushMatrix();
Moon();

glPopMatrix();
glLoadIdentity();
}




void NightStar()
{
            glBegin(GL_QUADS);
    glColor3ub(255,255,255);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
}

void Leftstar()
{
    glScalef(.5,.5,1);
    glTranslatef(0,.8,0);
    NightStar();

     glTranslatef(0.3,.3,0);
    NightStar();

 glTranslatef(-0.8,.2,0);
    NightStar();

     glTranslatef(-0.6,.2,0);
    NightStar();

     glTranslatef(1,0,0);
    NightStar();

     glTranslatef(-.7,-.6,0);
    NightStar();

     glTranslatef(0,.6,0);
    NightStar();

    glLoadIdentity();

     glTranslatef(-.3,-.6,0);
     NightStar();
 glLoadIdentity();

}


void St()
{
    glScalef(.5,.5,1);
         glTranslatef(.4,1.7,0);
    NightStar();
     glLoadIdentity();


         glScalef(.5,.5,1);
         glTranslatef(1.2,1.7,0);
    NightStar();
     glLoadIdentity();



}
void RightStar()
{
    glRotatef(180,0,1,0);
glPushMatrix();
Leftstar();

glPopMatrix();
glLoadIdentity();
}
void Star()
{
    Leftstar();
    RightStar();
}








///Night End///
///..............///



///Evening Start
///..................///


void EveningSun()
{
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(217,103,65);
    theta=i*3.1416/180;
    glVertex2f(0.68+(.05*cos(theta)),(0.35+.075*sin(theta)));
}
glEnd();
}

void EveningSun_Shine()
{
    glPushMatrix();
    glTranslatef(0,position5,0);
    EveningSun();
    glPopMatrix();
    glLoadIdentity();
}

void EveningSky2()
{


//sky
    glBegin(GL_QUADS);
    //115, 91, 75
    glColor3ub(171,137,113);
    glVertex2f(-1.00f, -0.19f);
glVertex2f(-1.00f, 1.00f);
glVertex2f(1.00f, 1.00f);
glVertex2f(1.00f, -0.19f);
glEnd();


EveningSun_Shine();

glBegin(GL_QUADS);
//ground
 glColor3ub(72,148,93);
  glVertex2f(-1.00f, -0.19f);
    glVertex2f(-1, -1);
     glVertex2f(1, -1);
     glVertex2f(1.00f, -0.19f);


    glEnd();


    glRotatef(180,0,1,0);
glPushMatrix();

//Left Middle part
    glBegin(GL_QUADS);
glColor3ub(199,119,105);

glVertex2f(-0.90f, 0.18f);
glVertex2f(-0.90f, -0.1f);
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, 0.18f);

glEnd();

glPopMatrix();
glLoadIdentity();


}

void EveningWhiteDiamond()
{

        glBegin(GL_QUADS);
    glColor3ub(115,91,75);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

}

void EveningRight_Down()
{
    glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_QUADS);
    glColor3ub(94, 68, 61);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.91f, -0.38f);
glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.65f, -0.36f);
glEnd();




  glBegin(GL_QUADS);
  glColor3ub(199,119,105);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.22,0,0);
  glBegin(GL_QUADS);
  glColor3ub(199,119,105);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glLineWidth(2);

glRotatef(180,0,1,0);
glPushMatrix();
//Left Down Border start
glBegin(GL_LINES);

glColor3ub(94, 68, 61);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

//Left Down Border End
glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);

glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);

glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

glVertex2f(-0.65f, -0.11f);
glVertex2f(-0.65f, -0.09f);

glEnd();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.22,0,0);
glBegin(GL_LINES);

glColor3ub(94, 68, 61);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);


//
glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);
glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();




glRotatef(180,0,1,0);
glPushMatrix();
  glBegin(GL_QUADS);
  glColor3ub(199,119,105);

glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

//leftDown middle
glVertex2f(-0.87f, -0.112f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.69f, -0.36f);
glVertex2f(-0.69f, -0.112f);

glEnd();


//left down piller start

glBegin(GL_LINES);
glColor3ub(94, 68, 61);

glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.78f, -0.35f);

glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.77f, -0.35f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.77f, -0.12f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.78f, -0.12f);



glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.785f, -0.36f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.765f, -0.36f);


glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.785f, -0.11f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.765f, -0.11f);

glEnd();
//left down piller End
glPopMatrix();
glLoadIdentity();

}


void EveningRight_Middle()
{

//upper
glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
      glColor3ub(199,119,105);
glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);

glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.01,0,0);
//left mddle piller1
glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);


glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);


    glEnd();
    glLoadIdentity();

    glPopMatrix();
    glLoadIdentity();

//left mddle piller border1
glRotatef(180,0,1,0);
glPushMatrix();
 glBegin(GL_LINES);
  glColor3ub(94, 68, 61);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);


glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);


glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);


glVertex2f(-0.92f, 0.21f);
glVertex2f(-0.92f, 0.18f);


glEnd();

glPopMatrix();
glLoadIdentity();

//second left piller2

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.025,0,0);

glBegin(GL_LINES);
  glColor3ub(94, 68, 61);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();

///3
glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.245,0,0);
 glBegin(GL_LINES);
  glColor3ub(94, 68, 61);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.915f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.895f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();

glPopMatrix();
glLoadIdentity();

////////////////

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.22,0,0);

glBegin(GL_LINES);
  glColor3ub(94, 68, 61);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();

glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.128,0,0);
 glBegin(GL_LINES);
  glColor3ub(94, 68, 61);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//


glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();

glPopMatrix();
glLoadIdentity();



}


void EveningRightUpperWindow()
{
    glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(94, 68, 61);
    glVertex2f(-0.855f, 0.07f);
    glVertex2f(-0.855f, -0.02f);
    glVertex2f(-0.805f, -0.02f);
    glVertex2f(-0.805f, 0.07f);



    //right window
    glVertex2f(-0.755f, 0.07f);
glVertex2f(-0.755f, -0.02f);
glVertex2f(-0.705f, -0.02f);
glVertex2f(-0.705f, 0.07f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);

    glVertex2f(-0.87f, 0.07f);
glVertex2f(-0.79f, 0.07f);

glVertex2f(-0.79f, 0.07f);
glVertex2f(-0.81f, 0.09f);

glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.85f, 0.09f);

glVertex2f(-0.85f, 0.09f);
glVertex2f(-0.87f, 0.07f);


//right window top
glVertex2f(-0.77f, 0.07f);
glVertex2f(-0.69f, 0.07f);

glVertex2f(-0.69f, 0.07f);
glVertex2f(-0.71f, 0.09f);

glVertex2f(-0.71f, 0.09f);
glVertex2f(-0.75f, 0.09f);

glVertex2f(-0.75f, 0.09f);
glVertex2f(-0.77f, 0.07f);




//top of window
glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(115,91,75);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glPopMatrix();
    glLoadIdentity();



    glRotatef(180,0,1,0);
glPushMatrix();

    glTranslatef(.022,0,0);
        glBegin(GL_QUADS);
    glColor3ub(115,91,75);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.1,0,0);
glBegin(GL_LINES);
glColor3ub(94, 68, 61);

glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();

glBegin(GL_QUADS);
glColor3ub(115,91,75);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

glEnd();
 glPopMatrix();
 glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.12,0,0);
glBegin(GL_QUADS);

glColor3ub(115,91,75);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

glEnd();
glLoadIdentity();
glPopMatrix();

glLoadIdentity();


    glLoadIdentity();

}

void EveningtopCircle1()
{
double theta;
glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();

}

void EveningtopCircle2()
{
    double theta;

    glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(199,119,105);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();
}

void EveningRightTop()
{
    glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(199,119,105);
glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);
glEnd();

    glBegin(GL_QUADS);
    glColor3ub(199,119,105);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);
glEnd();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(-.02,0,0);
glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

////////////////
glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.01,0,0);
glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//**************
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//**********
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//**********
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//************
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();
glBegin(GL_LINES);
glColor3ub(94, 68, 61);
boolean check=true;
glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);

glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);

glVertex2f(-0.95f, 0.24f);
glVertex2f(-0.91f, 0.21f);

glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);

glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);


//top
glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);

glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);

glVertex2f(-0.91f, 0.33f);
glVertex2f(-0.91f, 0.243f);

glVertex2f(-0.91f, 0.24f);
glVertex2f(-0.91f, 0.36f);

glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.92f, 0.34f);

glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

glVertex2f(-0.92f, 0.24f);
glVertex2f(-0.91f, 0.24f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);


glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);


glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);


glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

//
glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.33f);

glVertex2f(-0.71f, 0.33f);
glVertex2f(-0.70f, 0.33f);

glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.71f, 0.35f);

//


glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.65f, 0.36f);

glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.70f, 0.33f);

glEnd();


glBegin(GL_QUADS);
glColor3ub(199,119,105);

glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);


//
glVertex2f(-0.911f, 0.24f);
glVertex2f(-0.911f, 0.36f);
glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

//
glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);

glEnd();



glBegin(GL_POLYGON);
glColor3ub(199,119,105);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);


glEnd();

glPopMatrix();
glLoadIdentity();



glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.03,.06,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();



glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(199,119,105);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glBegin(GL_QUADS);
glColor3ub(199,119,105);

glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.331f);
glVertex2f(-0.70f, 0.331f);
glVertex2f(-0.70f, 0.36f);

//


glVertex2f(-0.699f, 0.331f);
glVertex2f(-0.65f, 0.331f);
glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.699f, 0.36f);
glEnd();

glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.21,0,0);

glBegin(GL_POLYGON);
glColor3ub(199,119,105);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.21,0,0);
EveningtopCircle1();
glLoadIdentity();

glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.21,0,0);
EveningtopCircle2();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



}

void EveningRight_top()
{
    glRotatef(180,0,1,0);
    glPushMatrix();

    glScalef(1,.6,1);
    glTranslatef(-.788,.553,0);
    glBegin(GL_QUADS);
    glColor3ub(199,119,105);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.05f, 0.03f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(-0.04f, 0.03f);
    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(199,119,105);
    glVertex2f(-0.05f, 0.015f);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(0.05f, 0.015f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glEnd();
//////////////////////////////////////////////////////////////////////

    glLineWidth(1);
   glBegin(GL_LINES);
   glColor3ub(94, 68, 61);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);

    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f, 0.03f);

    glVertex2f(-0.05f, 0.03f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(0.05f, 0.03f);
    glVertex2f(0.04f, 0.03f);

    glVertex2f(-0.05f, 0.01f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);

    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glVertex2f(-0.04f, 0.05f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(-0.07f, 0.0f);
    glVertex2f(-0.05f, 0.015f);

    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glVertex2f(0.07f, 0.0f);
    glVertex2f(0.05f, 0.015f);
    glEnd();

    glLoadIdentity();
    glPopMatrix();
    glLoadIdentity();


    glRotatef(180,0,1,0);
glPushMatrix();


    glTranslatef(.13,.045,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.007*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.13,.045,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(199,119,105);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.006*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


}


void EveningRightDownWindow()
{

    glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
//back1
glVertex2f(-0.86f, -0.36f);
glVertex2f(-0.86f, -0.24f);
glVertex2f(-0.80f, -0.24f);
glVertex2f(-0.80f, -0.36f);

//back2
glColor3ub(199,119,105);

glVertex2f(-0.858f, -0.36f);
glVertex2f(-0.858f, -0.25f);
glVertex2f(-0.802f, -0.25f);
glVertex2f(-0.802f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.853f, -0.26f);
glVertex2f(-0.853f, -0.36f);
glVertex2f(-0.808f, -0.36f);
glVertex2f(-0.808f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.03*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(199,119,105);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.028*cos(theta)),(-.252+.05*sin(theta)));
}
glEnd();







glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.8305+(.0225*cos(theta)),(-.27+.051*sin(theta)));
}
glEnd();

glPopMatrix();
glLoadIdentity();





}



void EveningRightDownWIndow2()
{
    glTranslatef(-.1,0,0);
    EveningRightDownWindow();
    glLoadIdentity();

}


void EveningRightTopWIndow1()
{

    glScalef(.45,.45,1);
    glTranslatef(1.139,.9,0);
    EveningRightDownWindow();
    glLoadIdentity();
}

void EveningRightTopWIndow2()
{

    glTranslatef(-.21,0,0);
    EveningRightTopWIndow1();
    glLoadIdentity();


}


void Eveninglalalala()
{

//front
    glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.85f, -0.26f);
glVertex2f(-0.85f, -0.36f);
glVertex2f(-0.81f, -0.36f);
glVertex2f(-0.81f, -0.26f);


glEnd();


double theta;





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.02*cos(theta)),(-.27+.05*sin(theta)));
}
glEnd();




}


void EveningRightTopMiddleWindow()
{
glRotatef(180,0,1,0);
glPushMatrix();
    glScalef(0.35,.35,1);
    glTranslatef(-1.59,1.1,0);
    Eveninglalalala();
    glLoadIdentity();
    glPopMatrix();
    glLoadIdentity();

}

void RightEveningTopMiddleWindow2()
{
    glTranslatef(-.025,0,0);
    EveningRightTopMiddleWindow();

      glTranslatef(-.05,0,0);
    EveningRightTopMiddleWindow();

      glTranslatef(-.075,0,0);
    EveningRightTopMiddleWindow();

      glTranslatef(-.1,0,0);
    EveningRightTopMiddleWindow();
//
      glTranslatef(-.125,0,0);
    EveningRightTopMiddleWindow();

    glLoadIdentity();
}



void SecondEveningRightPart()
{

glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(199,119,105);

glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);
//
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);

glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);

glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);



glEnd();


glBegin(GL_QUADS);
glColor3ub(199,119,105);

glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);
    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);
    glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);

glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);

glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);


glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, -0.365f);
    glEnd();
// glLineWidth(3);



    glBegin(GL_QUADS);
glColor3ub(94, 68, 61);


glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.635f, -0.325f);
glVertex2f(-0.635f, -0.305f);
glVertex2f(-0.65f, -0.36f);



glVertex2f(-0.64f, -0.325f);
glVertex2f(-0.37f, -0.325f);
glVertex2f(-0.37f, -0.310f);
glVertex2f(-0.64f, -0.310f);


    glEnd();
    glPopMatrix();
    glLoadIdentity();



}


void EveningRightMiddle1()
{
glRotatef(180,0,1,0);
glPushMatrix();
glLineWidth(1.5);

glScalef(.5,1,1);
glTranslatef(-.369,.05,0);
glBegin(GL_QUADS);
glColor3ub(199,119,105);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();



    glBegin(GL_LINES);

glColor3ub(94, 68, 61);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

}


void EveningRightMiddle2()
{

    glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(199,119,105);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.619f, -0.31f);
glVertex2f(-0.21f, -0.31f);
glVertex2f(-0.19f, -0.05f);
glVertex2f(-0.619f, -0.06f);





    glEnd();


        glBegin(GL_LINES);
    glColor3ub(94, 68, 61);


    glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);

glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);

    glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

    glVertex2f(-0.19f, -0.04f);
        glVertex2f(-0.64f, -0.04f);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
}


void EveningRightMiddle3()
{
    glTranslatef(-.09,0,0);
    EveningRightMiddle1();

    glTranslatef(-.18,0,0);
    EveningRightMiddle1();

    glTranslatef(-.27,0,0);
    EveningRightMiddle1();

    glTranslatef(-.36,0,0);
    EveningRightMiddle1();

    glLoadIdentity();
}


void EveningRightMiddleDownWindow1()
{

    glRotatef(180,0,1,0);
glPushMatrix();
    glTranslatef(.245,.05,0);
     glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
//back1
glVertex2f(-0.856f, -0.36f);
glVertex2f(-0.856f, -0.24f);
glVertex2f(-0.803f, -0.24f);
glVertex2f(-0.803f, -0.36f);

//back2
glColor3ub(199,119,105);

glVertex2f(-0.854f, -0.36f);
glVertex2f(-0.854f, -0.25f);
glVertex2f(-0.805f, -0.25f);
glVertex2f(-0.805f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.85f, -0.26f);
glVertex2f(-0.85f, -0.36f);
glVertex2f(-0.81f, -0.36f);
glVertex2f(-0.81f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.0255*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(199,119,105);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.025*cos(theta)),(-.25+.05*sin(theta)));
}
glEnd();






//
glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.02*cos(theta)),(-.27+.05*sin(theta)));
}
glEnd();
//
//
    glLoadIdentity();

    glPopMatrix();
    glLoadIdentity();

}


void EveningRightMiddleDownWindow2()
{
    glTranslatef(-.09,0,0);
    EveningRightMiddleDownWindow1();

        glTranslatef(-.18,0,0);
    EveningRightMiddleDownWindow1();

        glTranslatef(-.27,0,0);
    EveningRightMiddleDownWindow1();

        glTranslatef(-.36,0,0);
    EveningRightMiddleDownWindow1();

    glLoadIdentity();
}


void EveningRightMiddle4()
{
glRotatef(180,0,1,0);
glPushMatrix();

glBegin(GL_POLYGON);
glColor3ub(199,119,105);
glVertex2f(-0.639f, -0.039f);
glVertex2f(-0.625f, -0.039f);
glVertex2f(-0.625f, 0.16f);
glVertex2f(-0.639f, 0.17f);
glVertex2f(-0.639f, -0.039f);
glEnd();

glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

    glTranslatef(.287,.05,0);
     glBegin(GL_LINES);
  glColor3ub(94, 68, 61);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



}

void EveningRightMiddle6()
{
    //piller


//   glTranslatef(-.08,0,0);
//   RightMiddle4();
//
//      glTranslatef(-.16,0,0);
//   RightMiddle4();
//      glTranslatef(-.24,0,0);
//   RightMiddle4();
//      glTranslatef(-.32,0,0);
//   RightMiddle4();
//      glTranslatef(-.40,0,0);
//   RightMiddle4();

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.367,0.05,0);

 glBegin(GL_LINES);
  glColor3ub(94, 68, 61);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();

   glLoadIdentity();
   glPopMatrix();
   glLoadIdentity();
}

void EveningRightMiddle7()
{
    glTranslatef(-.08,0,0);
    EveningRightMiddle6();
    glLoadIdentity();

        glTranslatef(-.16,0,0);
    EveningRightMiddle6();
    glLoadIdentity();

        glTranslatef(-.24,0,0);
    EveningRightMiddle6();
    glLoadIdentity();

        glTranslatef(-.32,0,0);
    EveningRightMiddle6();
    glLoadIdentity();
}

void EveningSecondRightTopWindow1()
{
       glTranslatef(-.006,.27,0);
       EveningRightMiddleDownWindow1();
   glLoadIdentity();
}

void EveningSecondRightTopWindow2()
{
       glTranslatef(-.08,0,0);
       EveningSecondRightTopWindow1();

        glTranslatef(-.16,0,0);
       EveningSecondRightTopWindow1();

        glTranslatef(-.24,0,0);
       EveningSecondRightTopWindow1();

        glTranslatef(-.32,0,0);
       EveningSecondRightTopWindow1();



        glLoadIdentity();
}



void EveningDiamondShowroom2()
{
    glRotatef(180,0,1,0);
glPushMatrix();
       glTranslatef(.054,.21,0);
       EveningWhiteDiamond();
      glLoadIdentity();
glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

    glTranslatef(.22,.155,0);
    EveningWhiteDiamond();

    glTranslatef(.02,0,0);
    EveningWhiteDiamond();

    glTranslatef(.02,0,0);
    EveningWhiteDiamond();

    glTranslatef(.05,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();

        glTranslatef(.05,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();

        glTranslatef(.05,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();


    glTranslatef(.05,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();



   glLoadIdentity();

   glPopMatrix();
   glLoadIdentity();

}





void EveningRight_RightMiddle()
{
    glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_QUADS);
    glColor3ub(199,119,105);
glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.239f);
glVertex2f(-0.64f, 0.239f);




    //toppest
glVertex2f(-0.649f, 0.325f);
glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);
    glEnd();

//2nd toppest
   glBegin(GL_POLYGON);
    glColor3ub(199,119,105);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.648f, 0.26f);
glVertex2f(-0.648f, 0.245f);
glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);
        glVertex2f(-0.649f, 0.325f);
        glVertex2f(-0.649f, 0.26f);

        glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);

glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);


glVertex2f(-0.19f, 0.325f);
glVertex2f(-0.649f, 0.325f);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.230f);

glVertex2f(-0.19f, 0.230f);
glVertex2f(-0.64f, 0.230f);

glVertex2f(-0.64f, 0.230f);
glVertex2f(-0.64f, -0.04f);

///
  glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.65f, 0.26f);


   glVertex2f(-0.6485f, 0.26f);
glVertex2f(-0.65f, 0.245f);


 glVertex2f(-0.6485f, 0.245f);
glVertex2f(-0.62f, 0.245f);

   glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);

    glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);

glVertex2f(-0.19f, 0.23f);
glVertex2f(-0.19f, 0.26f);


///

    glEnd();

glPopMatrix();
glLoadIdentity();

}







//LEFT PART START






void EveningSky()
{


//Left Middle part
    glBegin(GL_QUADS);
glColor3ub(199,119,105);

glVertex2f(-0.90f, 0.18f);
glVertex2f(-0.90f, -0.1f);
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, 0.18f);

glEnd();




}

void EveningWhiteDiamond2()
{
        glBegin(GL_QUADS);
    glColor3ub(115,91,75);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

}

void Eveningleft_down()
{
    glBegin(GL_QUADS);
    glColor3ub(94, 68, 61);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.91f, -0.38f);
glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.65f, -0.36f);
glEnd();




  glBegin(GL_QUADS);
  glColor3ub(199,119,105);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();



glTranslatef(.22,0,0);
  glBegin(GL_QUADS);
  glColor3ub(199,119,105);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();

glLoadIdentity();



glLineWidth(2);


//Left Down Border start
glBegin(GL_LINES);

glColor3ub(94, 68, 61);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

//Left Down Border End
glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);

glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);

glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

glVertex2f(-0.65f, -0.11f);
glVertex2f(-0.65f, -0.09f);

glEnd();


glTranslatef(.22,0,0);
glBegin(GL_LINES);

glColor3ub(94, 68, 61);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);


//
glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);
glEnd();
glLoadIdentity();






  glBegin(GL_QUADS);
  glColor3ub(199,119,105);

glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

//leftDown middle
glVertex2f(-0.87f, -0.112f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.69f, -0.36f);
glVertex2f(-0.69f, -0.112f);

glEnd();


//left down piller start

glBegin(GL_LINES);
glColor3ub(94, 68, 61);

glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.78f, -0.35f);

glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.77f, -0.35f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.77f, -0.12f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.78f, -0.12f);



glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.785f, -0.36f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.765f, -0.36f);


glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.785f, -0.11f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.765f, -0.11f);

glEnd();
//left down piller End

}


void EveningleftMiddle()
{

//upper

    glBegin(GL_QUADS);
      glColor3ub(199,119,105);
glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);

glTranslatef(.01,0,0);
//left mddle piller1
glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);


glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);


    glEnd();
    glLoadIdentity();

//left mddle piller border1
 glBegin(GL_LINES);
  glColor3ub(94, 68, 61);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);


glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);


glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);


glVertex2f(-0.92f, 0.21f);
glVertex2f(-0.92f, 0.18f);


glEnd();

//second left piller2


glTranslatef(.025,0,0);

glBegin(GL_LINES);
  glColor3ub(94, 68, 61);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();


///3

glTranslatef(.245,0,0);
 glBegin(GL_LINES);
  glColor3ub(94, 68, 61);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.915f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.895f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();



////////////////


glTranslatef(.22,0,0);

glBegin(GL_LINES);
  glColor3ub(94, 68, 61);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();




glTranslatef(.128,0,0);
 glBegin(GL_LINES);
  glColor3ub(94, 68, 61);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//


glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();





}


void EveningLeftUpperWindow()
{
    glBegin(GL_QUADS);
    glColor3ub(94, 68, 61);
    glVertex2f(-0.855f, 0.07f);
    glVertex2f(-0.855f, -0.02f);
    glVertex2f(-0.805f, -0.02f);
    glVertex2f(-0.805f, 0.07f);



    //right window
    glVertex2f(-0.755f, 0.07f);
glVertex2f(-0.755f, -0.02f);
glVertex2f(-0.705f, -0.02f);
glVertex2f(-0.705f, 0.07f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);

    glVertex2f(-0.87f, 0.07f);
glVertex2f(-0.79f, 0.07f);

glVertex2f(-0.79f, 0.07f);
glVertex2f(-0.81f, 0.09f);

glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.85f, 0.09f);

glVertex2f(-0.85f, 0.09f);
glVertex2f(-0.87f, 0.07f);


//right window top
glVertex2f(-0.77f, 0.07f);
glVertex2f(-0.69f, 0.07f);

glVertex2f(-0.69f, 0.07f);
glVertex2f(-0.71f, 0.09f);

glVertex2f(-0.71f, 0.09f);
glVertex2f(-0.75f, 0.09f);

glVertex2f(-0.75f, 0.09f);
glVertex2f(-0.77f, 0.07f);




//top of window
glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(115,91,75);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

    glTranslatef(.022,0,0);
        glBegin(GL_QUADS);
    glColor3ub(115,91,75);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glLoadIdentity();




glTranslatef(.1,0,0);
glBegin(GL_LINES);
glColor3ub(94, 68, 61);

glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();

        glBegin(GL_QUADS);
    glColor3ub(115,91,75);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

    glTranslatef(.022,0,0);
        glBegin(GL_QUADS);
    glColor3ub(115,91,75);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glLoadIdentity();



    glLoadIdentity();

}



void EveningLeftTop()
{
    glBegin(GL_QUADS);
    glColor3ub(199,119,105);
glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);
glEnd();

    glBegin(GL_QUADS);
    glColor3ub(199,119,105);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);
glEnd();


glTranslatef(-.02,0,0);
glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glLoadIdentity();

glTranslatef(.01,0,0);
glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();



glLoadIdentity();




glBegin(GL_LINES);
glColor3ub(94, 68, 61);

glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);

glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);

glVertex2f(-0.95f, 0.24f);
glVertex2f(-0.91f, 0.21f);

glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);

glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);


//top
glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);

glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);

glVertex2f(-0.91f, 0.33f);
glVertex2f(-0.91f, 0.243f);

glVertex2f(-0.91f, 0.24f);
glVertex2f(-0.91f, 0.36f);

glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.92f, 0.34f);

glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

glVertex2f(-0.92f, 0.24f);
glVertex2f(-0.91f, 0.24f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
//

glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);


glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);


glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

//
glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.33f);

glVertex2f(-0.71f, 0.33f);
glVertex2f(-0.70f, 0.33f);

glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.71f, 0.35f);

//


glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.65f, 0.36f);

glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.70f, 0.33f);

glEnd();


glBegin(GL_QUADS);
glColor3ub(199,119,105);

glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);


//
glVertex2f(-0.911f, 0.24f);
glVertex2f(-0.911f, 0.36f);
glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

//
glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);

glEnd();



glBegin(GL_POLYGON);
glColor3ub(199,119,105);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);


glEnd();


glTranslatef(.03,.06,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();


glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(199,119,105);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();






glBegin(GL_QUADS);
glColor3ub(199,119,105);

glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.331f);
glVertex2f(-0.70f, 0.331f);
glVertex2f(-0.70f, 0.36f);

//


glVertex2f(-0.699f, 0.331f);
glVertex2f(-0.65f, 0.331f);
glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.699f, 0.36f);
glEnd();








glTranslatef(.21,0,0);


glBegin(GL_POLYGON);
glColor3ub(199,119,105);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glEnd();

glLoadIdentity();


glTranslatef(.21,0,0);
EveningtopCircle1();
glLoadIdentity();


glTranslatef(.21,0,0);
EveningtopCircle2();
glLoadIdentity();



}

void EveningLefttop()
{
    glScalef(1,.6,1);

    glTranslatef(-.788,.553,0);
    glBegin(GL_QUADS);
    glColor3ub(199,119,105);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.05f, 0.03f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(-0.04f, 0.03f);
    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(199,119,105);
    glVertex2f(-0.05f, 0.015f);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(0.05f, 0.015f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glEnd();
//////////////////////////////////////////////////////////////////////

    glLineWidth(1);
   glBegin(GL_LINES);
   glColor3ub(94, 68, 61);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);

    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f, 0.03f);

    glVertex2f(-0.05f, 0.03f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(0.05f, 0.03f);
    glVertex2f(0.04f, 0.03f);

    glVertex2f(-0.05f, 0.01f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);

    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glVertex2f(-0.04f, 0.05f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(-0.07f, 0.0f);
    glVertex2f(-0.05f, 0.015f);

    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glVertex2f(0.07f, 0.0f);
    glVertex2f(0.05f, 0.015f);
    glEnd();




    glLoadIdentity();

    glTranslatef(.13,.045,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.007*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();


glTranslatef(.13,.045,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(199,119,105);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.006*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();















}


void EveningLeftDownWindow()
{
    glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
//back1
glVertex2f(-0.86f, -0.36f);
glVertex2f(-0.86f, -0.24f);
glVertex2f(-0.80f, -0.24f);
glVertex2f(-0.80f, -0.36f);

//back2
glColor3ub(199,119,105);

glVertex2f(-0.858f, -0.36f);
glVertex2f(-0.858f, -0.25f);
glVertex2f(-0.802f, -0.25f);
glVertex2f(-0.802f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.853f, -0.26f);
glVertex2f(-0.853f, -0.36f);
glVertex2f(-0.808f, -0.36f);
glVertex2f(-0.808f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.03*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(199,119,105);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.028*cos(theta)),(-.252+.05*sin(theta)));
}
glEnd();







glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.8305+(.0225*cos(theta)),(-.27+.051*sin(theta)));
}
glEnd();







}



void EveningLeftDownWIndow2()
{
    glTranslatef(.1,0,0);
    EveningLeftDownWindow();
    glLoadIdentity();
}


void EveningLeftTopWIndow1()
{
    glScalef(.45,.45,1);
    glTranslatef(-1.139,.9,0);
    EveningLeftDownWindow();

    glLoadIdentity();
}

void EveningLeftTopWIndow2()
{
    glTranslatef(.21,0,0);
    EveningLeftTopWIndow1();
    glLoadIdentity();

}



void Eveningtopmiddle_window()
{

    glScalef(0.35,.35,1);
    glTranslatef(-1.59,1.1,0);
    Eveninglalalala();
    glLoadIdentity();

}

void Eveningtopmiddle_window2()
{
    glTranslatef(.025,0,0);
    Eveningtopmiddle_window();

      glTranslatef(.05,0,0);
    Eveningtopmiddle_window();

      glTranslatef(.075,0,0);
    Eveningtopmiddle_window();

      glTranslatef(.1,0,0);
    Eveningtopmiddle_window();
//
      glTranslatef(.125,0,0);
    Eveningtopmiddle_window();

    glLoadIdentity();
}



void SecondEveningLeftPart()
{
    glBegin(GL_QUADS);
    glColor3ub(199,119,105);

glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);
//
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);

glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);

glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);



glEnd();


glBegin(GL_QUADS);
glColor3ub(199,119,105);

glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);
    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);
    glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);

glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);

glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);


glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, -0.365f);
    glEnd();
// glLineWidth(3);



    glBegin(GL_QUADS);
glColor3ub(94, 68, 61);


glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.635f, -0.325f);
glVertex2f(-0.635f, -0.305f);
glVertex2f(-0.65f, -0.36f);



glVertex2f(-0.64f, -0.325f);
glVertex2f(-0.37f, -0.325f);
glVertex2f(-0.37f, -0.310f);
glVertex2f(-0.64f, -0.310f);


    glEnd();



}


void EveningMiddle1()
{
    glLineWidth(1.5);
  glScalef(.5,1,1);
    glTranslatef(-.369,.05,0);
glBegin(GL_QUADS);
glColor3ub(199,119,105);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();



    glBegin(GL_LINES);

glColor3ub(94, 68, 61);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

glEnd();

glLoadIdentity();

}


void EveningMiddle2()
{
    glBegin(GL_QUADS);
    glColor3ub(199,119,105);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.619f, -0.31f);
glVertex2f(-0.21f, -0.31f);
glVertex2f(-0.19f, -0.05f);
glVertex2f(-0.619f, -0.06f);





    glEnd();


        glBegin(GL_LINES);
    glColor3ub(94, 68, 61);


    glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);

glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);

    glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

    glVertex2f(-0.19f, -0.04f);
        glVertex2f(-0.64f, -0.04f);
    glEnd();
}


void EveningMiddle3()
{
    glTranslatef(.09,0,0);
    EveningMiddle1();

    glTranslatef(.18,0,0);
    EveningMiddle1();

    glTranslatef(.27,0,0);
    EveningMiddle1();

    glTranslatef(.36,0,0);
    EveningMiddle1();

    glLoadIdentity();
}


void EveningLeftMiddleDownWindow1()
{
    glTranslatef(.245,.05,0);
     glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
//back1
glVertex2f(-0.856f, -0.36f);
glVertex2f(-0.856f, -0.24f);
glVertex2f(-0.803f, -0.24f);
glVertex2f(-0.803f, -0.36f);

//back2
glColor3ub(199,119,105);

glVertex2f(-0.854f, -0.36f);
glVertex2f(-0.854f, -0.25f);
glVertex2f(-0.805f, -0.25f);
glVertex2f(-0.805f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
glVertex2f(-0.85f, -0.26f);
glVertex2f(-0.85f, -0.36f);
glVertex2f(-0.81f, -0.36f);
glVertex2f(-0.81f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.0255*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(199,119,105);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.025*cos(theta)),(-.25+.05*sin(theta)));
}
glEnd();






//
glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.02*cos(theta)),(-.27+.05*sin(theta)));
}
glEnd();
//
//
    glLoadIdentity();

}


void EveningLeftMiddleDownWindow2()
{
    glTranslatef(.09,0,0);
    EveningLeftMiddleDownWindow1();

        glTranslatef(.18,0,0);
    EveningLeftMiddleDownWindow1();

        glTranslatef(.27,0,0);
    EveningLeftMiddleDownWindow1();

        glTranslatef(.36,0,0);
    EveningLeftMiddleDownWindow1();






    glLoadIdentity();
}


void EveningMiddle4()
{

glBegin(GL_POLYGON);
glColor3ub(199,119,105);
glVertex2f(-0.639f, -0.039f);
glVertex2f(-0.625f, -0.039f);
glVertex2f(-0.625f, 0.16f);
glVertex2f(-0.639f, 0.17f);
glVertex2f(-0.639f, -0.039f);
glEnd();



    glTranslatef(.287,.05,0);
     glBegin(GL_LINES);
  glColor3ub(94, 68, 61);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();




}

void EveningMiddle6()
{
    //piller

   glTranslatef(.08,0,0);
   EveningMiddle4();

      glTranslatef(.16,0,0);
   EveningMiddle4();
      glTranslatef(.24,0,0);
   EveningMiddle4();
      glTranslatef(.32,0,0);
   EveningMiddle4();
      glTranslatef(.40,0,0);
   EveningMiddle4();



   glLoadIdentity();
}

void EveningSecondLeftTopWindow1()
{
       glTranslatef(.006,.27,0);
       EveningLeftMiddleDownWindow1();
   glLoadIdentity();
}

void EveningSecondLeftTopWindow2()
{
       glTranslatef(.08,0,0);
       EveningSecondLeftTopWindow1();

        glTranslatef(.16,0,0);
       EveningSecondLeftTopWindow1();

        glTranslatef(.24,0,0);
       EveningSecondLeftTopWindow1();

        glTranslatef(.32,0,0);
       EveningSecondLeftTopWindow1();



        glLoadIdentity();
}



void EveningDiamondShowroom()
{
       glTranslatef(.054,.21,0);
    EveningWhiteDiamond();
      glLoadIdentity();


    glTranslatef(.22,.155,0);
    EveningWhiteDiamond();

    glTranslatef(.02,0,0);
    EveningWhiteDiamond();

    glTranslatef(.02,0,0);
    EveningWhiteDiamond();

    glTranslatef(.05,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();

        glTranslatef(.05,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();

        glTranslatef(.05,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();


            glTranslatef(.05,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();
    glTranslatef(.02,0,0);
    EveningWhiteDiamond();



   glLoadIdentity();
}


void EveningMiddle5()
{
    glBegin(GL_QUADS);
    glColor3ub(199,119,105);
glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.239f);
glVertex2f(-0.64f, 0.239f);




    //toppest
glVertex2f(-0.649f, 0.325f);
glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);
    glEnd();

//2nd toppest
   glBegin(GL_POLYGON);
    glColor3ub(199,119,105);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.648f, 0.26f);
glVertex2f(-0.648f, 0.245f);
glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);
        glVertex2f(-0.649f, 0.325f);
        glVertex2f(-0.649f, 0.26f);

        glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);

glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);


glVertex2f(-0.19f, 0.325f);
glVertex2f(-0.649f, 0.325f);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.230f);

glVertex2f(-0.19f, 0.230f);
glVertex2f(-0.64f, 0.230f);

glVertex2f(-0.64f, 0.230f);
glVertex2f(-0.64f, -0.04f);

///
  glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.65f, 0.26f);


   glVertex2f(-0.6485f, 0.26f);
glVertex2f(-0.65f, 0.245f);


 glVertex2f(-0.6485f, 0.245f);
glVertex2f(-0.62f, 0.245f);

   glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);

    glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);

glVertex2f(-0.19f, 0.23f);
glVertex2f(-0.19f, 0.26f);


///

    glEnd();



}

//LEFT PART END


void EveningRightPart()
{

     EveningSky2();
	 SecondEveningRightPart();
    EveningRight_Down();
    EveningRight_RightMiddle();
    EveningRight_Middle();
    EveningRightUpperWindow();//
     EveningRightTop();
     EveningRight_top();
//
     EveningRightDownWindow();
     EveningRightDownWIndow2();
     EveningRightTopWIndow1();
     EveningRightTopWIndow2();
     EveningRightTopMiddleWindow();
     RightEveningTopMiddleWindow2();
     EveningRightMiddle1();
     EveningRightMiddle2();
     EveningRightMiddle3();
     EveningRightMiddleDownWindow1();
     EveningRightMiddleDownWindow2();
//
//
     EveningRightMiddle4();
     EveningRightMiddle6();
EveningSecondRightTopWindow1();
EveningSecondRightTopWindow2();
EveningDiamondShowroom2();
EveningRightMiddle7();
}

void EveningLeftPart()
{





     EveningSky();
	 SecondEveningLeftPart();
    Eveningleft_down();
    EveningMiddle5();
    EveningleftMiddle();
    EveningLeftUpperWindow();//
     EveningLeftTop();
     EveningLefttop();

    EveningLeftDownWindow();
    EveningLeftDownWIndow2();
    EveningLeftTopWIndow1();
    EveningLeftTopWIndow2();
    Eveningtopmiddle_window();
    Eveningtopmiddle_window2();
    EveningMiddle1();
    EveningMiddle2();
    EveningMiddle3();
    EveningLeftMiddleDownWindow1();
    EveningLeftMiddleDownWindow2();


    EveningMiddle4();
    EveningMiddle6();
EveningSecondLeftTopWindow1();
EveningSecondLeftTopWindow2();
EveningDiamondShowroom();
}




///

void EveningLeft_stair()
{
glBegin(GL_POLYGON);
glColor3ub(199,119,105);

glVertex2f(-0.3f, -0.32f);
glVertex2f(-0.29f, -0.3105f);
glVertex2f(-0.373f, -0.3105f);
glVertex2f(-0.373f, -0.38f);//
glVertex2f(-0.29f, -0.38f);//
glVertex2f(-0.175f, -0.03f);//
glVertex2f(-0.18f, 0.01f);//
glVertex2f(-0.29f, -0.30f);
glEnd();

glLineWidth(2);
// stair_border
    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);

//    glVertex2f(-0.3f, -0.32f);
//glVertex2f(-0.29f, -0.3105f);
glVertex2f(-0.295f, -0.3105f);
glVertex2f(-0.373f, -0.3105f);

glVertex2f(-0.373f, -0.3105f);
glVertex2f(-0.373f, -0.38f);

glVertex2f(-0.373f, -0.38f);//
glVertex2f(-0.29f, -0.38f);

glVertex2f(-0.29f, -0.38f);//
glVertex2f(-0.175f, -0.03f);

glVertex2f(-0.175f, -0.03f);//
glVertex2f(-0.18f, 0.01f);

glVertex2f(-0.18f, 0.01f);
glVertex2f(-0.295f, -0.3105f);
    glEnd();

}

void EveningRight_Stair()
{
glRotatef(180,0,1,0);
glPushMatrix();
EveningLeft_stair();
glPopMatrix();
glLoadIdentity();
}

void EveningStair_Step()
{
    glBegin(GL_QUADS);
    glColor3ub(199,119,105);

glVertex2f(-0.2918f, -0.385f);
glVertex2f(0.2915f, -0.385f);
glVertex2f(0.175f, -0.03f);
glVertex2f(-0.174f, -0.03f);
    glEnd();




    //start step


    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);
glVertex2f(-0.2918f, -0.385f);
glVertex2f(0.2915f, -0.385f);

glVertex2f(-0.29f, -0.38f);
glVertex2f(0.29f, -0.38f);

glVertex2f(-0.289f, -0.375f);
glVertex2f(0.289f, -0.375f);

glVertex2f(-0.288f, -0.370f);
glVertex2f(0.288f, -0.370f);

glVertex2f(-0.284f, -0.360f);
glVertex2f(0.284f, -0.360f);

glVertex2f(-0.283f, -0.358f);
glVertex2f(0.283f, -0.358f);


glVertex2f(-0.279f, -0.348f);
glVertex2f(0.279f, -0.348f);

glVertex2f(-0.278f, -0.346f);
glVertex2f(0.278f, -0.346f);

glVertex2f(-0.275f, -0.336f);
glVertex2f(0.275f, -0.336f);

glVertex2f(-0.274f, -0.334f);
glVertex2f(0.274f, -0.334f);


glVertex2f(-0.271f, -0.324f);
glVertex2f(0.271f, -0.324f);

glVertex2f(-0.270f, -0.322f);
glVertex2f(0.270f, -0.322f);

glVertex2f(-0.267f, -0.312f);
glVertex2f(0.267f, -0.312f);

glVertex2f(-0.266f, -0.310f);
glVertex2f(0.266f, -0.310f);

glVertex2f(-0.263f, -0.300f);
glVertex2f(0.263f, -0.300f);

glVertex2f(-0.262f, -0.298f);
glVertex2f(0.262f, -0.298f);


glVertex2f(-0.259f, -0.288f);
glVertex2f(0.259f, -0.288f);

glVertex2f(-0.256f, -0.278f);
glVertex2f(0.256f, -0.278f);

glVertex2f(-0.255f, -0.276f);
glVertex2f(0.255f, -0.276f);


glVertex2f(-0.252f, -0.266f);
glVertex2f(0.252f, -0.266f);

glVertex2f(-0.251f, -0.262f);
glVertex2f(0.251f, -0.262f);


glVertex2f(-0.248f, -0.252f);
glVertex2f(0.248f, -0.252f);

glVertex2f(-0.247f, -0.250f);
glVertex2f(0.247f, -0.250f);

glVertex2f(-0.244f, -0.240f);
glVertex2f(0.244f, -0.240f);

glVertex2f(-0.243f, -0.238f);
glVertex2f(0.243f, -0.238f);


glVertex2f(-0.240f, -0.228f);
glVertex2f(0.240f, -0.228f);

glVertex2f(-0.239f, -0.226f);
glVertex2f(0.239f, -0.226f);

glVertex2f(-0.236f, -0.216f);
glVertex2f(0.236f, -0.216f);

glVertex2f(-0.231f, -0.212f);
glVertex2f(0.231f, -0.212f);

glVertex2f(-0.23f, -0.202f);
glVertex2f(0.23f, -0.202f);

glVertex2f(-0.228f, -0.200f);
glVertex2f(0.228f, -0.200f);

glVertex2f(-0.227f, -0.190f);
glVertex2f(0.227f, -0.190f);

glVertex2f(-0.226f, -0.188f);
glVertex2f(0.226f, -0.188f);

glVertex2f(-0.225f, -0.186f);
glVertex2f(0.225f, -0.186f);

glVertex2f(-0.222f, -0.176f);
glVertex2f(0.222f, -0.176f);

glVertex2f(-0.221f, -0.172f);
glVertex2f(0.221f, -0.172f);

glVertex2f(-0.219f, -0.162f);
glVertex2f(0.219f, -0.162f);

glVertex2f(-0.218f, -0.160f);
glVertex2f(0.218f, -0.160f);

glVertex2f(-0.216f, -0.150f);
glVertex2f(0.216f, -0.150f);

glVertex2f(-0.215f, -0.148f);
glVertex2f(0.215f, -0.148f);

glVertex2f(-0.213f, -0.138f);
glVertex2f(0.213f, -0.138f);

glVertex2f(-0.212f, -0.136f);
glVertex2f(0.212f, -0.136f);

glVertex2f(-0.210f, -0.126f);
glVertex2f(0.210f, -0.126f);
glVertex2f(-0.209f, -0.124f);
glVertex2f(0.209f, -0.124f);


glVertex2f(-0.207f, -0.114f);
glVertex2f(0.207f, -0.114f);

glVertex2f(-0.206f, -0.112f);
glVertex2f(0.206f, -0.112f);

glVertex2f(-0.204f, -0.102f);
glVertex2f(0.204f, -0.102f);

glVertex2f(-0.203f, -0.100f);
glVertex2f(0.203f, -0.100f);

glVertex2f(-0.200f, -0.090f);
glVertex2f(0.200f, -0.090f);

glVertex2f(-0.199f, -0.088f);
glVertex2f(0.199f, -0.088f);


glVertex2f(-0.195f, -0.078f);
glVertex2f(0.195f, -0.078f);

glVertex2f(-0.191f, -0.072f);
glVertex2f(0.191f, -0.072f);

glVertex2f(-0.187f, -0.062f);
glVertex2f(0.187f, -0.062f);

glVertex2f(-0.186f, -0.060f);
glVertex2f(0.186f, -0.060f);


glVertex2f(-0.186f, -0.060f);
glVertex2f(0.186f, -0.060f);

glVertex2f(-0.183f, -0.05f);
glVertex2f(0.183f, -0.050f);

glVertex2f(-0.182f, -0.048f);
glVertex2f(0.182f, -0.048f);

glVertex2f(-0.179f, -0.038f);
glVertex2f(0.179f, -0.038f);

glVertex2f(-0.178f, -0.036f);
glVertex2f(0.178f, -0.036f);

//glVertex2f(-0.175f, -0.026f);
//glVertex2f(0.175f, -0.026f);
//
//glVertex2f(-0.174f, -0.024f);
//glVertex2f(0.174f, -0.024f);


    glEnd();






}





void EveningMiddleQuad()
{

glBegin(GL_QUADS);
glColor3ub(199,119,105);

glVertex2f(-0.189f, 0.325f);
glVertex2f(-0.189f, -0.05f);
glVertex2f(0.189f, -0.05f);
glVertex2f(0.189f, 0.325f);

//glVertex2f(-0.189f, -0.01f);
//glVertex2f(-0.18f, 0.01f);
//glVertex2f(-0.18f, 0.36f);
//glVertex2f(-0.189f, 0.36f);
    glEnd();




        glBegin(GL_LINES);
    glColor3ub(94, 68, 61);

    glVertex2f(-0.189f, 0.325f);
glVertex2f(-0.189f, -0.05f);
glVertex2f(-0.189f, -0.05f);
glVertex2f(0.189f, -0.05f);
glVertex2f(0.189f, -0.05f);
glVertex2f(0.189f, 0.325f);
glVertex2f(0.189f, 0.325f);
    glVertex2f(-0.189f, 0.325f);



    //base

//glVertex2f(-0.175f, -0.01f);
//
//glVertex2f(-0.18f, -0.03f);
//glVertex2f(-0.148f, -0.03f);
//
//glVertex2f(-0.155f, -0.001f);

    glEnd();

}

void EveningMiddleLeftPiller()
{
glTranslatef(.005,0,0);
        glBegin(GL_QUADS);
    glColor3ub(199,119,105);

    glVertex2f(-0.187f, 0.378f);
glVertex2f(-0.187f, 0.323f);
glVertex2f(-0.142f, 0.323f);
glVertex2f(-0.142f, 0.378f);
    glEnd();

        glBegin(GL_LINES);
glColor3ub(94, 68, 61);

//glVertex2f(-0.189f, -0.01f);
//glVertex2f(-0.175f, 0.01f);
//
//glVertex2f(-0.175f, 0.01f);
//glVertex2f(-0.175f, 0.36f);
//
//glVertex2f(-0.175f, 0.36f);
//glVertex2f(-0.189f, 0.36f);
//
//glVertex2f(-0.189f, 0.36f);
//glVertex2f(-0.189f, -0.01f);

//iiiiiiiiiiiiiii
glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.155f, -0.01f);

glVertex2f(-0.155f, -0.01f);
glVertex2f(-0.155f, 0.38f);

glVertex2f(-0.155f, 0.38f);
glVertex2f(-0.175f, 0.38f);


///

///////////////////////////
glVertex2f(-0.187f, 0.40f);
glVertex2f(-0.187f, -0.01f);

glVertex2f(-0.187f, -0.01f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.175f, 0.41f);

glVertex2f(-0.175f, 0.41f);
glVertex2f(-0.187f, 0.40f);



    glEnd();






  glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.33,0,0);
glBegin(GL_LINES);
glColor3ub(94, 68, 61);

glVertex2f(-0.189f, -0.035f);
glVertex2f(-0.175f, 0.00f);

glVertex2f(-0.175f, 0.00f);
glVertex2f(-0.175f, 0.38f);

glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.189f, 0.38f);

glVertex2f(-0.189f, 0.38f);
glVertex2f(-0.189f, -0.035f);


glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



glLoadIdentity();

    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);

glVertex2f(-0.17f, -.012);
glVertex2f(-0.178f, -0.03f);

glEnd();


}






void EveningMiddleTop()
{
    glScalef(.91,1,1);
    glTranslatef(.71,.05,0);
        glBegin(GL_QUADS);
    glColor3ub(199,119,105);


/////////////////////

glVertex2f(-0.91f, 0.35f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);
/////////////////////
    glEnd();



glBegin(GL_POLYGON);
glColor3ub(199,119,105);

glVertex2f(-0.90f, 0.355f);
glVertex2f(-0.89f, 0.365f);
glVertex2f(-0.89f, 0.375f);
glVertex2f(-0.88f, 0.375f);
glVertex2f(-0.875f, 0.365f);
glVertex2f(-0.87f, 0.355f);


glEnd();


glBegin(GL_LINES);
glColor3ub(94, 68, 61);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.895f, 0.37f);

glVertex2f(-0.895f, 0.37f);
glVertex2f(-0.89f, 0.38f);

glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

    glEnd();


    glLineWidth(2);
        glBegin(GL_LINES);
    glColor3ub(94, 68, 61);

glVertex2f(-0.91f, 0.34f);
glVertex2f(-0.91f, 0.331f);


glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);


glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);


glVertex2f(-0.86f, 0.36f);
glVertex2f(-0.88f, 0.36f);

    glEnd();


        glLoadIdentity();

        /////////////////////

     glScalef(.91,1,1);
    glTranslatef(.74,.11,0);

        double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();




glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(199,119,105);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();


glLoadIdentity();




}



///////////////////////////////////////////////////////////////////
//Tight Middle





void EveningRightMiddleTop()
{
    glRotatef(180,0,1,0);
glPushMatrix();
    glScalef(.91,1,1);
    glTranslatef(.71,.05,0);
        glBegin(GL_QUADS);
    glColor3ub(199,119,105);


/////////////////////

glVertex2f(-0.91f, 0.35f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);
/////////////////////
    glEnd();



glBegin(GL_POLYGON);
glColor3ub(199,119,105);

glVertex2f(-0.90f, 0.355f);
glVertex2f(-0.89f, 0.365f);
glVertex2f(-0.89f, 0.375f);
glVertex2f(-0.88f, 0.375f);
glVertex2f(-0.875f, 0.365f);
glVertex2f(-0.87f, 0.355f);


glEnd();


glBegin(GL_LINES);
glColor3ub(94, 68, 61);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.895f, 0.37f);

glVertex2f(-0.895f, 0.37f);
glVertex2f(-0.89f, 0.38f);

glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

    glEnd();


    glLineWidth(2);
        glBegin(GL_LINES);
    glColor3ub(94, 68, 61);

glVertex2f(-0.91f, 0.34f);
glVertex2f(-0.91f, 0.331f);


glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);


glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);


glVertex2f(-0.86f, 0.36f);
glVertex2f(-0.88f, 0.36f);

    glEnd();


        glLoadIdentity();
        glPopMatrix();
        glLoadIdentity();

        /////////////////////
        glRotatef(180,0,1,0);
glPushMatrix();

     glScalef(.91,1,1);
    glTranslatef(.74,.11,0);

        double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();




glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(199,119,105);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();


glLoadIdentity();
glPopMatrix();
glLoadIdentity();




}




void EveningRightMiddleLeftPiller()
{
    glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.005,0,0);
        glBegin(GL_QUADS);
    glColor3ub(199,119,105);

    glVertex2f(-0.187f, 0.378f);
glVertex2f(-0.187f, 0.323f);
glVertex2f(-0.142f, 0.323f);
glVertex2f(-0.142f, 0.378f);
    glEnd();

        glBegin(GL_LINES);
glColor3ub(94, 68, 61);

//glVertex2f(-0.189f, -0.01f);
//glVertex2f(-0.175f, 0.01f);
//
//glVertex2f(-0.175f, 0.01f);
//glVertex2f(-0.175f, 0.36f);
//
//glVertex2f(-0.175f, 0.36f);
//glVertex2f(-0.189f, 0.36f);
//
//glVertex2f(-0.189f, 0.36f);
//glVertex2f(-0.189f, -0.01f);

//iiiiiiiiiiiiiii
glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.155f, -0.01f);

glVertex2f(-0.155f, -0.01f);
glVertex2f(-0.155f, 0.38f);

glVertex2f(-0.155f, 0.38f);
glVertex2f(-0.175f, 0.38f);


///

///////////////////////////
glVertex2f(-0.187f, 0.40f);
glVertex2f(-0.187f, -0.01f);

glVertex2f(-0.187f, -0.01f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.175f, 0.41f);

glVertex2f(-0.175f, 0.41f);
glVertex2f(-0.187f, 0.40f);



    glEnd();


glPopMatrix();
glLoadIdentity();





  glRotatef(360,0,1,0);
glPushMatrix();
glTranslatef(.325,0,0);
glBegin(GL_LINES);
glColor3ub(94, 68, 61);

glVertex2f(-0.189f, -0.035f);
glVertex2f(-0.175f, 0.00f);

glVertex2f(-0.175f, 0.00f);
glVertex2f(-0.175f, 0.38f);

glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.189f, 0.38f);

glVertex2f(-0.189f, 0.38f);
glVertex2f(-0.189f, -0.035f);


glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



glLoadIdentity();
glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);

glVertex2f(-0.17f, -.012);
glVertex2f(-0.178f, -0.03f);

glEnd();
glPopMatrix();
glLoadIdentity();


}



//////////////////////////////////////////Right Middle End

void EveningMiddleTop1()
{
    glTranslatef(-.005,0,0);
     glBegin(GL_POLYGON);
    glColor3ub(199,119,105);

glVertex2f(-0.10f, 0.325f);
glVertex2f(0.11f, 0.325f);
glVertex2f(0.11f, 0.47f);
glVertex2f(0.07f, 0.49f);
glVertex2f(-0.05f, 0.49f);
glVertex2f(-0.10f, 0.47f);
    glEnd();





    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);
glVertex2f(-0.10f, 0.325f);
glVertex2f(0.11f, 0.325f);
glVertex2f(0.11f, 0.325f);
glVertex2f(0.11f, 0.47f);
glVertex2f(0.11f, 0.47f);
glVertex2f(0.07f, 0.49f);
glVertex2f(0.07f, 0.49f);
glVertex2f(-0.05f, 0.49f);
glVertex2f(-0.05f, 0.49f);
glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.325f);
    glEnd();

    glLoadIdentity();
}


void EveningMiddleTop2()
{
glTranslatef(0,0.0,0);
   glBegin(GL_POLYGON);
    glColor3ub(199,119,105);

    glVertex2f(-0.10f, 0.45f);
glVertex2f(-0.13f, 0.48f);
glVertex2f(-0.06f, 0.51f);
glVertex2f(0.07f, 0.51f);
glVertex2f(0.13f, 0.48f);
glVertex2f(0.11f, 0.45f);
    glEnd();







    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);
          glVertex2f(-0.10f, 0.45f);
glVertex2f(-0.13f, 0.48f);

 glVertex2f(-0.13f, 0.48f);
glVertex2f(-0.06f, 0.51f);


  glVertex2f(-0.06f, 0.51f);
glVertex2f(0.07f, 0.51f);

  glVertex2f(0.07f, 0.51f);
glVertex2f(0.13f, 0.48f);

 glVertex2f(0.13f, 0.48f);
glVertex2f(0.11f, 0.45f);

 glVertex2f(0.11f, 0.45f);
      glVertex2f(-0.10f, 0.45f);

    glEnd();










    glLoadIdentity();

}



void EveningMiddleTop3()
{

    glTranslatef(-0.005,.02,0);
    glBegin(GL_POLYGON);
    glColor3ub(199,119,105);

    glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.487f);//
glVertex2f(-0.05f, 0.515f);
glVertex2f(0.06f, 0.515f);
glVertex2f(0.11f, 0.49f);//
glVertex2f(0.11f, 0.47f);


    glEnd();

glLineWidth(6);

    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);




    glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.487f);//


glVertex2f(-0.10f, 0.487f);//
glVertex2f(-0.05f, 0.515f);

glVertex2f(-0.05f, 0.515f);
glVertex2f(0.06f, 0.515f);


glVertex2f(0.06f, 0.515f);
glVertex2f(0.11f, 0.49f);//


glVertex2f(0.11f, 0.49f);//
glVertex2f(0.11f, 0.47f);


glVertex2f(0.11f, 0.47f);
    glVertex2f(-0.10f, 0.47f);

    glEnd();



    glLoadIdentity();
}





void EveningMiddleTop4()
{

     glBegin(GL_TRIANGLES);

 glColor3ub(94, 68, 61);
 glVertex2f(-0.012,.694);
 glVertex2f(0.012,.694);
 glVertex2f(0,.8);
 glEnd();

 glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(94, 68, 61);
    glVertex2f(0,.75);
    glVertex2f(0,.82);




    glEnd();

 glLineWidth(1.5);

    //////////////////////
    double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(0+(.107*cos(theta)),(.46+.24*sin(theta)));
}
glEnd();



glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(199,119,105);
    theta=i*3.1416/180;
    glVertex2f(0+(.104*cos(theta)),(.46+.236*sin(theta)));
}
glEnd();


glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(0+(.055*cos(theta)),(.46+.24*sin(theta)));
}
glEnd();


glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(199,119,105);
    theta=i*3.1416/180;
    glVertex2f(0+(.052*cos(theta)),(.46+.236*sin(theta)));
}
glEnd();


glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(0+(.02*cos(theta)),(.69+.021*sin(theta)));
}
glEnd();



glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
   glColor3ub(199,119,105);
    theta=i*3.1416/180;
    glVertex2f(0+(.017*cos(theta)),(.694+.012*sin(theta)));
}
glEnd();






}



void EveningMiddleTop5()
{
        glBegin(GL_LINES);
    glColor3ub(94, 68, 61);
    glVertex2f(-0.137f, 0.30f);
glVertex2f(0.137f, 0.30f);

    glVertex2f(-0.137f, 0.288f);
glVertex2f(0.137f, 0.288f);

    glEnd();
}

void EveningMiddleTop6()
{
    glScalef(1.9,1.26,1);
glTranslatef(0.875,.06,0);
glBegin(GL_LINES);
glColor3ub(94, 68, 61);


glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);

//
glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.892f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glEnd();

glLoadIdentity();
}


void EveningMiddleTop7()
{

    glTranslatef(.12,0,0);
    EveningMiddleTop6();
    glLoadIdentity();
}



void EveningTopMiddleWindow1()
{
    glScalef(.7,1.8,1);
    glTranslatef(.68,.34,0);
    glBegin(GL_QUADS);
glColor3ub(94, 68, 61);
//back1
glVertex2f(-0.86f, -0.36f);
glVertex2f(-0.86f, -0.24f);
glVertex2f(-0.80f, -0.24f);
glVertex2f(-0.80f, -0.36f);

glEnd();




double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(94, 68, 61);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.03*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();

glLoadIdentity();

}

void EveningTopMiddleWindow2()
{
    glTranslatef(.214,0,0);
    EveningTopMiddleWindow1();
    glLoadIdentity();


    glScalef(1.7,1,1);
        glTranslatef(.107,0,0);
    EveningTopMiddleWindow1();
    glLoadIdentity();



        glScalef(1.4,.47,1);
        glTranslatef(.107,.723,0);
    EveningTopMiddleWindow1();
    glLoadIdentity();





}

///
void EveningLeftMiddlePart()
{
EveningMiddleTop();
EveningMiddleQuad();
EveningStair_Step();
EveningMiddleLeftPiller();

}


void EveningRightMiddlePart()
{
EveningRightMiddleTop();
EveningRightMiddleLeftPiller();//

EveningLeft_stair();
EveningRight_Stair();

}

void EveningCenter()
{
    EveningLeftMiddlePart();
    EveningRightMiddlePart();


    EveningMiddleTop4();
    EveningMiddleTop3();
    glLineWidth(1.5);
    EveningMiddleTop2();
    EveningMiddleTop1();
    EveningMiddleTop5();
    EveningMiddleTop6();
    EveningMiddleTop7();
    EveningTopMiddleWindow1();
    EveningTopMiddleWindow2();



}

///*** Airplane model***///
void airplane_model()
{
    ///Airplane body
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.3);
	glVertex2f(.01, .9);
	glVertex2f(.06, .9);
	glVertex2f(.09, .84);
	glVertex2f(.01, .84);
	glEnd();

	glBegin(GL_POLYGON);
//    glColor3f(0.8, 0.8, 1);
glColor3ub(222,210,206);
	glVertex2f(.01, .84);
	glVertex2f(.28, .84);
	glVertex2f(.3, .82);
	glVertex2f(.32, .82);
	glVertex2f(.33, .8);
	glVertex2f(.32, .78);
	glVertex2f(.03, .78);
	glVertex2f(.01, .8);
	glVertex2f(.01, .84);
	glEnd();
    ///Airplane lower red part
	glBegin(GL_POLYGON);
    glColor3f(0.6, 0.0, 0.0);
    glVertex2f(.33, .8);
	glVertex2f(.32, .78);
	glVertex2f(.03, .78);
	glVertex2f(.01, .8);
	glEnd();
    ///Airplane windows
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.28, .84);
	glVertex2f(.3, .82);
	glVertex2f(.28, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.2, .83);
	glVertex2f(.21, .83);
	glVertex2f(.21, .82);
	glVertex2f(.2, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.22, .83);
	glVertex2f(.23, .83);
	glVertex2f(.23, .82);
	glVertex2f(.22, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.18, .83);
	glVertex2f(.19, .83);
	glVertex2f(.19, .82);
	glVertex2f(.18, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.16, .83);
	glVertex2f(.17, .83);
	glVertex2f(.17, .82);
	glVertex2f(.16, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.14, .83);
	glVertex2f(.15, .83);
	glVertex2f(.15, .82);
	glVertex2f(.14, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.12, .83);
	glVertex2f(.13, .83);
	glVertex2f(.13, .82);
	glVertex2f(.12, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.1, .83);
	glVertex2f(.11, .83);
	glVertex2f(.11, .82);
	glVertex2f(.1, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.08, .83);
	glVertex2f(.09, .83);
	glVertex2f(.09, .82);
	glVertex2f(.08, .82);
	glEnd();
    ///Airplane wings
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.3);
	glVertex2f(.13, .84);
	glVertex2f(.12, .87);
	glVertex2f(.16, .87);
	glVertex2f(.19, .84);
	glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.3);
	glVertex2f(.13, .78);
	glVertex2f(.12, .75);
	glVertex2f(.16, .75);
	glVertex2f(.19, .78);
	glEnd();
}


void airplane_Rotate(){
    glTranslatef(1,0,0);
    glRotatef(180,0,1,0);
    glPushMatrix();
    airplane_model();
    glPopMatrix();
    glLoadIdentity();

}

void Dynamic_Airplane()
{
    glPushMatrix();
    glTranslatef(position2,0,0);
    airplane_Rotate();
    glPopMatrix();
    glLoadIdentity();
}








///..................////
///Evening End

void Sky2()
{
//sky
    glBegin(GL_QUADS);
    glColor3ub(135,206,250);
    glVertex2f(-1.00f, -0.19f);
glVertex2f(-1.00f, 1.00f);
glVertex2f(1.00f, 1.00f);
glVertex2f(1.00f, -0.19f);



//ground
 glColor3ub(89,189,115);
  glVertex2f(-1.00f, -0.19f);
    glVertex2f(-1, -1);
     glVertex2f(1, -1);
     glVertex2f(1.00f, -0.19f);


    glEnd();


    glRotatef(180,0,1,0);
glPushMatrix();

//Left Middle part
    glBegin(GL_QUADS);
glColor3ub(255, 179, 161);

glVertex2f(-0.90f, 0.18f);
glVertex2f(-0.90f, -0.1f);
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, 0.18f);

glEnd();

glPopMatrix();
glLoadIdentity();


}

//void WhiteDiamond()
//{
//
//        glBegin(GL_QUADS);
//    glColor3ub(255,255,255);
//glVertex2f(-0.84f, 0.145f);
//glVertex2f(-0.845f, 0.135f);
//glVertex2f(-0.84f, 0.125f);
//glVertex2f(-0.835f, 0.135f);
//
//    glEnd();
//
//}

void Right_Down()
{
    glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_QUADS);
    glColor3ub(120, 87, 79);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.91f, -0.38f);
glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.65f, -0.36f);
glEnd();




  glBegin(GL_QUADS);
  glColor3ub(255, 179, 161);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.22,0,0);
  glBegin(GL_QUADS);
  glColor3ub(255, 179, 161);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glLineWidth(2);

glRotatef(180,0,1,0);
glPushMatrix();
//Left Down Border start
glBegin(GL_LINES);

glColor3ub(120, 87, 79);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

//Left Down Border End
glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);

glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);

glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

glVertex2f(-0.65f, -0.11f);
glVertex2f(-0.65f, -0.09f);

glEnd();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.22,0,0);
glBegin(GL_LINES);

glColor3ub(120, 87, 79);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);


//
glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);
glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();




glRotatef(180,0,1,0);
glPushMatrix();
  glBegin(GL_QUADS);
  glColor3ub(255, 179, 161);

glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

//leftDown middle
glVertex2f(-0.87f, -0.112f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.69f, -0.36f);
glVertex2f(-0.69f, -0.112f);

glEnd();


//left down piller start

glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.78f, -0.35f);

glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.77f, -0.35f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.77f, -0.12f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.78f, -0.12f);



glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.785f, -0.36f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.765f, -0.36f);


glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.785f, -0.11f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.765f, -0.11f);

glEnd();
//left down piller End
glPopMatrix();
glLoadIdentity();

}


void Right_Middle()
{

//upper
glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
      glColor3ub(255, 179, 161);
glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);

glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.01,0,0);
//left mddle piller1
glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);


glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);


    glEnd();
    glLoadIdentity();

    glPopMatrix();
    glLoadIdentity();

//left mddle piller border1
glRotatef(180,0,1,0);
glPushMatrix();
 glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);


glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);


glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);


glVertex2f(-0.92f, 0.21f);
glVertex2f(-0.92f, 0.18f);


glEnd();

glPopMatrix();
glLoadIdentity();

//second left piller2

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.025,0,0);

glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();

///3
glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.245,0,0);
 glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.915f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.895f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();

glPopMatrix();
glLoadIdentity();

////////////////

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.22,0,0);

glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();

glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.128,0,0);
 glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//


glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();

glPopMatrix();
glLoadIdentity();



}


void RightUpperWindow()
{
    glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(120, 87, 79);
    glVertex2f(-0.855f, 0.07f);
    glVertex2f(-0.855f, -0.02f);
    glVertex2f(-0.805f, -0.02f);
    glVertex2f(-0.805f, 0.07f);



    //right window
    glVertex2f(-0.755f, 0.07f);
glVertex2f(-0.755f, -0.02f);
glVertex2f(-0.705f, -0.02f);
glVertex2f(-0.705f, 0.07f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

    glVertex2f(-0.87f, 0.07f);
glVertex2f(-0.79f, 0.07f);

glVertex2f(-0.79f, 0.07f);
glVertex2f(-0.81f, 0.09f);

glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.85f, 0.09f);

glVertex2f(-0.85f, 0.09f);
glVertex2f(-0.87f, 0.07f);


//right window top
glVertex2f(-0.77f, 0.07f);
glVertex2f(-0.69f, 0.07f);

glVertex2f(-0.69f, 0.07f);
glVertex2f(-0.71f, 0.09f);

glVertex2f(-0.71f, 0.09f);
glVertex2f(-0.75f, 0.09f);

glVertex2f(-0.75f, 0.09f);
glVertex2f(-0.77f, 0.07f);




//top of window
glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glPopMatrix();
    glLoadIdentity();



    glRotatef(180,0,1,0);
glPushMatrix();

    glTranslatef(.022,0,0);
        glBegin(GL_QUADS);
    glColor3ub(255,255,255);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.1,0,0);
glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();

glBegin(GL_QUADS);
glColor3ub(255,255,255);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

glEnd();
 glPopMatrix();
 glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.12,0,0);
glBegin(GL_QUADS);

glColor3ub(255,255,255);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

glEnd();
glLoadIdentity();
glPopMatrix();

glLoadIdentity();


    glLoadIdentity();

}

void topCircle1()
{
double theta;
glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();

}

void topCircle2()
{
    double theta;

    glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255, 179, 161);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();
}

void RightTop()
{
    glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);
glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);
glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);
glEnd();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(-.02,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

////////////////
glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.01,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//**************
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//**********
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//**********
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();
//************
glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();
glBegin(GL_LINES);
glColor3ub(120, 87, 79);
boolean check=true;
glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);

glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);

glVertex2f(-0.95f, 0.24f);
glVertex2f(-0.91f, 0.21f);

glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);

glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);


//top
glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);

glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);

glVertex2f(-0.91f, 0.33f);
glVertex2f(-0.91f, 0.243f);

glVertex2f(-0.91f, 0.24f);
glVertex2f(-0.91f, 0.36f);

glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.92f, 0.34f);

glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

glVertex2f(-0.92f, 0.24f);
glVertex2f(-0.91f, 0.24f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);


glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);


glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);


glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

//
glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.33f);

glVertex2f(-0.71f, 0.33f);
glVertex2f(-0.70f, 0.33f);

glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.71f, 0.35f);

//


glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.65f, 0.36f);

glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.70f, 0.33f);

glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 179, 161);

glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);


//
glVertex2f(-0.911f, 0.24f);
glVertex2f(-0.911f, 0.36f);
glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

//
glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);

glEnd();



glBegin(GL_POLYGON);
glColor3ub(255, 179, 161);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);


glEnd();

glPopMatrix();
glLoadIdentity();



glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.03,.06,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();



glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255, 179, 161);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glBegin(GL_QUADS);
glColor3ub(255, 179, 161);

glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.331f);
glVertex2f(-0.70f, 0.331f);
glVertex2f(-0.70f, 0.36f);

//


glVertex2f(-0.699f, 0.331f);
glVertex2f(-0.65f, 0.331f);
glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.699f, 0.36f);
glEnd();

glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.21,0,0);

glBegin(GL_POLYGON);
glColor3ub(255, 179, 161);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.21,0,0);
topCircle1();
glLoadIdentity();

glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.21,0,0);
topCircle2();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



}

void Right_top()
{
    glRotatef(180,0,1,0);
    glPushMatrix();

    glScalef(1,.6,1);
    glTranslatef(-.788,.553,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.05f, 0.03f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(-0.04f, 0.03f);
    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(255, 179, 161);
    glVertex2f(-0.05f, 0.015f);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(0.05f, 0.015f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glEnd();
//////////////////////////////////////////////////////////////////////

    glLineWidth(1);
   glBegin(GL_LINES);
   glColor3ub(120, 87, 79);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);

    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f, 0.03f);

    glVertex2f(-0.05f, 0.03f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(0.05f, 0.03f);
    glVertex2f(0.04f, 0.03f);

    glVertex2f(-0.05f, 0.01f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);

    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glVertex2f(-0.04f, 0.05f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(-0.07f, 0.0f);
    glVertex2f(-0.05f, 0.015f);

    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glVertex2f(0.07f, 0.0f);
    glVertex2f(0.05f, 0.015f);
    glEnd();

    glLoadIdentity();
    glPopMatrix();
    glLoadIdentity();


    glRotatef(180,0,1,0);
glPushMatrix();


    glTranslatef(.13,.045,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.007*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


glRotatef(180,0,1,0);
glPushMatrix();

glTranslatef(.13,.045,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255, 179, 161);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.006*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();


}


void RightDownWindow()
{

    glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
//back1
glVertex2f(-0.86f, -0.36f);
glVertex2f(-0.86f, -0.24f);
glVertex2f(-0.80f, -0.24f);
glVertex2f(-0.80f, -0.36f);

//back2
glColor3ub(255, 179, 161);

glVertex2f(-0.858f, -0.36f);
glVertex2f(-0.858f, -0.25f);
glVertex2f(-0.802f, -0.25f);
glVertex2f(-0.802f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.853f, -0.26f);
glVertex2f(-0.853f, -0.36f);
glVertex2f(-0.808f, -0.36f);
glVertex2f(-0.808f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.03*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(255, 179, 161);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.028*cos(theta)),(-.252+.05*sin(theta)));
}
glEnd();







glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.8305+(.0225*cos(theta)),(-.27+.051*sin(theta)));
}
glEnd();

glPopMatrix();
glLoadIdentity();





}



void RightDownWIndow2()
{
    glTranslatef(-.1,0,0);
    RightDownWindow();
    glLoadIdentity();

}


void RightTopWIndow1()
{

    glScalef(.45,.45,1);
    glTranslatef(1.139,.9,0);
    RightDownWindow();
    glLoadIdentity();
}

void RightTopWIndow2()
{

    glTranslatef(-.21,0,0);
    RightTopWIndow1();
    glLoadIdentity();


}


void lalalala()
{

//front
    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, -0.26f);
glVertex2f(-0.85f, -0.36f);
glVertex2f(-0.81f, -0.36f);
glVertex2f(-0.81f, -0.26f);


glEnd();


double theta;





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.02*cos(theta)),(-.27+.05*sin(theta)));
}
glEnd();




}


void RightTopMiddleWindow()
{
glRotatef(180,0,1,0);
glPushMatrix();
    glScalef(0.35,.35,1);
    glTranslatef(-1.59,1.1,0);
    lalalala();
    glLoadIdentity();
    glPopMatrix();
    glLoadIdentity();

}

void RightTopMiddleWindow2()
{
    glTranslatef(-.025,0,0);
    RightTopMiddleWindow();

      glTranslatef(-.05,0,0);
    RightTopMiddleWindow();

      glTranslatef(-.075,0,0);
    RightTopMiddleWindow();

      glTranslatef(-.1,0,0);
    RightTopMiddleWindow();
//
      glTranslatef(-.125,0,0);
    RightTopMiddleWindow();

    glLoadIdentity();
}



void SecondRightPart()
{

glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);

glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
//
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);

glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);

glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);



glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 179, 161);

glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);
    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
    glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);

glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);

glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);


glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, -0.365f);
    glEnd();
// glLineWidth(3);



    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);


glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.635f, -0.325f);
glVertex2f(-0.635f, -0.305f);
glVertex2f(-0.65f, -0.36f);



glVertex2f(-0.64f, -0.325f);
glVertex2f(-0.37f, -0.325f);
glVertex2f(-0.37f, -0.310f);
glVertex2f(-0.64f, -0.310f);


    glEnd();
    glPopMatrix();
    glLoadIdentity();



}


void RightMiddle1()
{
glRotatef(180,0,1,0);
glPushMatrix();
glLineWidth(1.5);

glScalef(.5,1,1);
glTranslatef(-.369,.05,0);
glBegin(GL_QUADS);
glColor3ub(255, 179, 161);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();



    glBegin(GL_LINES);

glColor3ub(120, 87, 79);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

glEnd();

glLoadIdentity();
glPopMatrix();
glLoadIdentity();

}


void RightMiddle2()
{

    glRotatef(180,0,1,0);
glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.619f, -0.31f);
glVertex2f(-0.21f, -0.31f);
glVertex2f(-0.19f, -0.05f);
glVertex2f(-0.619f, -0.06f);





    glEnd();


        glBegin(GL_LINES);
    glColor3ub(120, 87, 79);


    glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);

glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);

    glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

    glVertex2f(-0.19f, -0.04f);
        glVertex2f(-0.64f, -0.04f);
    glEnd();

    glPopMatrix();
    glLoadIdentity();
}


void RightMiddle3()
{
    glTranslatef(-.09,0,0);
    RightMiddle1();

    glTranslatef(-.18,0,0);
    RightMiddle1();

    glTranslatef(-.27,0,0);
    RightMiddle1();

    glTranslatef(-.36,0,0);
    RightMiddle1();

    glLoadIdentity();
}


void RightMiddleDownWindow1()
{

    glRotatef(180,0,1,0);
glPushMatrix();
    glTranslatef(.245,.05,0);
     glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
//back1
glVertex2f(-0.856f, -0.36f);
glVertex2f(-0.856f, -0.24f);
glVertex2f(-0.803f, -0.24f);
glVertex2f(-0.803f, -0.36f);

//back2
glColor3ub(255, 179, 161);

glVertex2f(-0.854f, -0.36f);
glVertex2f(-0.854f, -0.25f);
glVertex2f(-0.805f, -0.25f);
glVertex2f(-0.805f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, -0.26f);
glVertex2f(-0.85f, -0.36f);
glVertex2f(-0.81f, -0.36f);
glVertex2f(-0.81f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.0255*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(255, 179, 161);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.025*cos(theta)),(-.25+.05*sin(theta)));
}
glEnd();






//
glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.02*cos(theta)),(-.27+.05*sin(theta)));
}
glEnd();
//
//
    glLoadIdentity();

    glPopMatrix();
    glLoadIdentity();

}


void RightMiddleDownWindow2()
{
    glTranslatef(-.09,0,0);
    RightMiddleDownWindow1();

        glTranslatef(-.18,0,0);
    RightMiddleDownWindow1();

        glTranslatef(-.27,0,0);
    RightMiddleDownWindow1();

        glTranslatef(-.36,0,0);
    RightMiddleDownWindow1();

    glLoadIdentity();
}


void RightMiddle4()
{
glRotatef(180,0,1,0);
glPushMatrix();

glBegin(GL_POLYGON);
glColor3ub(255, 179, 161);
glVertex2f(-0.639f, -0.039f);
glVertex2f(-0.625f, -0.039f);
glVertex2f(-0.625f, 0.16f);
glVertex2f(-0.639f, 0.17f);
glVertex2f(-0.639f, -0.039f);
glEnd();

glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

    glTranslatef(.287,.05,0);
     glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



}

void RightMiddle6()
{
    //piller


//   glTranslatef(-.08,0,0);
//   RightMiddle4();
//
//      glTranslatef(-.16,0,0);
//   RightMiddle4();
//      glTranslatef(-.24,0,0);
//   RightMiddle4();
//      glTranslatef(-.32,0,0);
//   RightMiddle4();
//      glTranslatef(-.40,0,0);
//   RightMiddle4();

glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.367,0.05,0);

 glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();

   glLoadIdentity();
   glPopMatrix();
   glLoadIdentity();
}

void RightMiddle7()
{
    glTranslatef(-.08,0,0);
    RightMiddle6();
    glLoadIdentity();

        glTranslatef(-.16,0,0);
    RightMiddle6();
    glLoadIdentity();

        glTranslatef(-.24,0,0);
    RightMiddle6();
    glLoadIdentity();

        glTranslatef(-.32,0,0);
    RightMiddle6();
    glLoadIdentity();
}

void SecondRightTopWindow1()
{
       glTranslatef(-.006,.27,0);
       RightMiddleDownWindow1();
   glLoadIdentity();
}

void SecondRightTopWindow2()
{
       glTranslatef(-.08,0,0);
       SecondRightTopWindow1();

        glTranslatef(-.16,0,0);
       SecondRightTopWindow1();

        glTranslatef(-.24,0,0);
       SecondRightTopWindow1();

        glTranslatef(-.32,0,0);
       SecondRightTopWindow1();



        glLoadIdentity();
}

void WhiteDiamond()
{

        glBegin(GL_QUADS);
    glColor3ub(255,255,255);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

}

void DiamondShowroom2()
{
    glRotatef(180,0,1,0);
glPushMatrix();
       glTranslatef(.054,.21,0);
       WhiteDiamond();
      glLoadIdentity();
glPopMatrix();
glLoadIdentity();

glRotatef(180,0,1,0);
glPushMatrix();

    glTranslatef(.22,.155,0);
    WhiteDiamond();

    glTranslatef(.02,0,0);
    WhiteDiamond();

    glTranslatef(.02,0,0);
    WhiteDiamond();

    glTranslatef(.05,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();

        glTranslatef(.05,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();

        glTranslatef(.05,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();


    glTranslatef(.05,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();



   glLoadIdentity();

   glPopMatrix();
   glLoadIdentity();

}





void Right_RightMiddle()
{
    glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);
glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.239f);
glVertex2f(-0.64f, 0.239f);




    //toppest
glVertex2f(-0.649f, 0.325f);
glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);
    glEnd();

//2nd toppest
   glBegin(GL_POLYGON);
    glColor3ub(255, 179, 161);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.648f, 0.26f);
glVertex2f(-0.648f, 0.245f);
glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
        glVertex2f(-0.649f, 0.325f);
        glVertex2f(-0.649f, 0.26f);

        glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);

glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);


glVertex2f(-0.19f, 0.325f);
glVertex2f(-0.649f, 0.325f);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.230f);

glVertex2f(-0.19f, 0.230f);
glVertex2f(-0.64f, 0.230f);

glVertex2f(-0.64f, 0.230f);
glVertex2f(-0.64f, -0.04f);

///
  glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.65f, 0.26f);


   glVertex2f(-0.6485f, 0.26f);
glVertex2f(-0.65f, 0.245f);


 glVertex2f(-0.6485f, 0.245f);
glVertex2f(-0.62f, 0.245f);

   glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);

    glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);

glVertex2f(-0.19f, 0.23f);
glVertex2f(-0.19f, 0.26f);


///

    glEnd();

glPopMatrix();
glLoadIdentity();

}







//LEFT PART START






void Sky()
{


//Left Middle part
    glBegin(GL_QUADS);
glColor3ub(255, 179, 161);

glVertex2f(-0.90f, 0.18f);
glVertex2f(-0.90f, -0.1f);
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, 0.18f);

glEnd();




}

//void WhiteDiamond2()
//{
//        glBegin(GL_QUADS);
//    glColor3ub(255,255,255);
//glVertex2f(-0.84f, 0.145f);
//glVertex2f(-0.845f, 0.135f);
//glVertex2f(-0.84f, 0.125f);
//glVertex2f(-0.835f, 0.135f);
//
//    glEnd();
//
//}

void left_down()
{
    glBegin(GL_QUADS);
    glColor3ub(120, 87, 79);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.91f, -0.38f);
glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.65f, -0.36f);
glEnd();




  glBegin(GL_QUADS);
  glColor3ub(255, 179, 161);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();



glTranslatef(.22,0,0);
  glBegin(GL_QUADS);
  glColor3ub(255, 179, 161);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();

glLoadIdentity();



glLineWidth(2);


//Left Down Border start
glBegin(GL_LINES);

glColor3ub(120, 87, 79);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

//Left Down Border End
glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);

glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);

glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

glVertex2f(-0.65f, -0.11f);
glVertex2f(-0.65f, -0.09f);

glEnd();


glTranslatef(.22,0,0);
glBegin(GL_LINES);

glColor3ub(120, 87, 79);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);


//
glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);
glEnd();
glLoadIdentity();






  glBegin(GL_QUADS);
  glColor3ub(255, 179, 161);

glVertex2f(-0.65f, -0.09f);
glVertex2f(-0.93f, -0.09f);
glVertex2f(-0.93f, -0.11f);
glVertex2f(-0.65f, -0.11f);

//leftDown middle
glVertex2f(-0.87f, -0.112f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.69f, -0.36f);
glVertex2f(-0.69f, -0.112f);

glEnd();


//left down piller start

glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.78f, -0.35f);

glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.77f, -0.35f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.77f, -0.12f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.78f, -0.12f);



glVertex2f(-0.78f, -0.35f);
glVertex2f(-0.785f, -0.36f);

glVertex2f(-0.77f, -0.35f);
glVertex2f(-0.765f, -0.36f);


glVertex2f(-0.78f, -0.12f);
glVertex2f(-0.785f, -0.11f);

glVertex2f(-0.77f, -0.12f);
glVertex2f(-0.765f, -0.11f);

glEnd();
//left down piller End

}


void leftMiddle()
{

//upper

    glBegin(GL_QUADS);
      glColor3ub(255, 179, 161);
glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);

glTranslatef(.01,0,0);
//left mddle piller1
glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);


glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);


    glEnd();
    glLoadIdentity();

//left mddle piller border1
 glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);


glVertex2f(-0.92f, 0.18f);
glVertex2f(-0.64f, 0.18f);


glVertex2f(-0.64f, 0.18f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.92f, 0.21f);


glVertex2f(-0.92f, 0.21f);
glVertex2f(-0.92f, 0.18f);


glEnd();

//second left piller2


glTranslatef(.025,0,0);

glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();


///3

glTranslatef(.245,0,0);
 glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.915f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.895f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();



////////////////


glTranslatef(.22,0,0);

glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);

glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();




glTranslatef(.128,0,0);
 glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//


glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);
glEnd();

glLoadIdentity();





}


void LeftUpperWindow()
{
    glBegin(GL_QUADS);
    glColor3ub(120, 87, 79);
    glVertex2f(-0.855f, 0.07f);
    glVertex2f(-0.855f, -0.02f);
    glVertex2f(-0.805f, -0.02f);
    glVertex2f(-0.805f, 0.07f);



    //right window
    glVertex2f(-0.755f, 0.07f);
glVertex2f(-0.755f, -0.02f);
glVertex2f(-0.705f, -0.02f);
glVertex2f(-0.705f, 0.07f);

    glEnd();


    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

    glVertex2f(-0.87f, 0.07f);
glVertex2f(-0.79f, 0.07f);

glVertex2f(-0.79f, 0.07f);
glVertex2f(-0.81f, 0.09f);

glVertex2f(-0.81f, 0.09f);
glVertex2f(-0.85f, 0.09f);

glVertex2f(-0.85f, 0.09f);
glVertex2f(-0.87f, 0.07f);


//right window top
glVertex2f(-0.77f, 0.07f);
glVertex2f(-0.69f, 0.07f);

glVertex2f(-0.69f, 0.07f);
glVertex2f(-0.71f, 0.09f);

glVertex2f(-0.71f, 0.09f);
glVertex2f(-0.75f, 0.09f);

glVertex2f(-0.75f, 0.09f);
glVertex2f(-0.77f, 0.07f);




//top of window
glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();



    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

    glTranslatef(.022,0,0);
        glBegin(GL_QUADS);
    glColor3ub(255,255,255);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glLoadIdentity();




glTranslatef(.1,0,0);
glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.86f, 0.16f);
glVertex2f(-0.86f, 0.11f);

glVertex2f(-0.86f, 0.11f);
glVertex2f(-0.80f, 0.11f);

glVertex2f(-0.80f, 0.11f);
glVertex2f(-0.80f, 0.16f);

glVertex2f(-0.80f, 0.16f);
glVertex2f(-0.86f, 0.16f);

    glEnd();

        glBegin(GL_QUADS);
    glColor3ub(255,255,255);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();

    glTranslatef(.022,0,0);
        glBegin(GL_QUADS);
    glColor3ub(255,255,255);
glVertex2f(-0.84f, 0.145f);
glVertex2f(-0.845f, 0.135f);
glVertex2f(-0.84f, 0.125f);
glVertex2f(-0.835f, 0.135f);

    glEnd();
    glLoadIdentity();



    glLoadIdentity();

}



void LeftTop()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);
glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);
glEnd();

    glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);
glEnd();


glTranslatef(-.02,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glLoadIdentity();

glTranslatef(.01,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();

glTranslatef(.03,0,0);
glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.835f, 0.21f);
glVertex2f(-0.835f, 0.24f);
glEnd();



glLoadIdentity();




glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.91f, 0.21f);
glVertex2f(-0.85f, 0.21f);

glVertex2f(-0.85f, 0.24f);
glVertex2f(-0.95f, 0.24f);

glVertex2f(-0.95f, 0.24f);
glVertex2f(-0.91f, 0.21f);

glVertex2f(-0.85f, 0.21f);
glVertex2f(-0.64f, 0.21f);

glVertex2f(-0.64f, 0.21f);
glVertex2f(-0.62f, 0.24f);

glVertex2f(-0.62f, 0.24f);
glVertex2f(-0.85f, 0.24f);


//top
glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);

glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);

glVertex2f(-0.91f, 0.33f);
glVertex2f(-0.91f, 0.243f);

glVertex2f(-0.91f, 0.24f);
glVertex2f(-0.91f, 0.36f);

glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.92f, 0.34f);

glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

glVertex2f(-0.92f, 0.24f);
glVertex2f(-0.91f, 0.24f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
//

glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);


glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

//
glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);

glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);


glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

//
glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.33f);

glVertex2f(-0.71f, 0.33f);
glVertex2f(-0.70f, 0.33f);

glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.71f, 0.35f);

//


glVertex2f(-0.70f, 0.33f);
glVertex2f(-0.65f, 0.33f);

glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.65f, 0.36f);

glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.70f, 0.36f);

glVertex2f(-0.70f, 0.36f);
glVertex2f(-0.70f, 0.33f);

glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 179, 161);

glVertex2f(-0.91f, 0.243f);
glVertex2f(-0.65f, 0.243f);
glVertex2f(-0.65f, 0.33f);
glVertex2f(-0.91f, 0.33f);


//
glVertex2f(-0.911f, 0.24f);
glVertex2f(-0.911f, 0.36f);
glVertex2f(-0.92f, 0.34f);
glVertex2f(-0.92f, 0.24f);

//
glVertex2f(-0.91f, 0.36f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);

glEnd();



glBegin(GL_POLYGON);
glColor3ub(255, 179, 161);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);


glEnd();


glTranslatef(.03,.06,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();


glTranslatef(.03,.06,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255, 179, 161);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();






glBegin(GL_QUADS);
glColor3ub(255, 179, 161);

glVertex2f(-0.71f, 0.35f);
glVertex2f(-0.71f, 0.331f);
glVertex2f(-0.70f, 0.331f);
glVertex2f(-0.70f, 0.36f);

//


glVertex2f(-0.699f, 0.331f);
glVertex2f(-0.65f, 0.331f);
glVertex2f(-0.65f, 0.36f);
glVertex2f(-0.699f, 0.36f);
glEnd();








glTranslatef(.21,0,0);


glBegin(GL_POLYGON);
glColor3ub(255, 179, 161);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.89f, 0.37f);
glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glEnd();

glLoadIdentity();


glTranslatef(.21,0,0);
topCircle1();
glLoadIdentity();


glTranslatef(.21,0,0);
topCircle2();
glLoadIdentity();



}

void Lefttop()
{
    glScalef(1,.6,1);

    glTranslatef(-.788,.553,0);
    glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.05f, 0.03f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(-0.04f, 0.03f);
    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(255, 179, 161);
    glVertex2f(-0.05f, 0.015f);
    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(0.05f, 0.015f);
    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glEnd();
//////////////////////////////////////////////////////////////////////

    glLineWidth(1);
   glBegin(GL_LINES);
   glColor3ub(120, 87, 79);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(0.05f, 0.0f);

    glVertex2f(0.05f, 0.01f);
    glVertex2f(0.05f, 0.03f);

    glVertex2f(-0.05f, 0.03f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(0.05f, 0.03f);
    glVertex2f(0.04f, 0.03f);

    glVertex2f(-0.05f, 0.01f);
    glVertex2f(-0.05f, 0.03f);


    glVertex2f(0.04f, 0.03f);
    glVertex2f(0.04f, 0.05f);

    glVertex2f(0.04f, 0.05f);
    glVertex2f(-0.04f, 0.05f);

    glVertex2f(-0.04f, 0.05f);
    glVertex2f(-0.04f, 0.03f);

    glVertex2f(-0.05f, 0.0f);
    glVertex2f(-0.07f, 0.0f);

    glVertex2f(-0.07f, 0.0f);
    glVertex2f(-0.05f, 0.015f);

    glVertex2f(0.05f, 0.0f);
    glVertex2f(0.07f, 0.0f);

    glVertex2f(0.07f, 0.0f);
    glVertex2f(0.05f, 0.015f);
    glEnd();




    glLoadIdentity();

    glTranslatef(.13,.045,0);
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.007*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();

glLoadIdentity();


glTranslatef(.13,.045,0);
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255, 179, 161);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.006*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();

glLoadIdentity();















}


void LeftDownWindow()
{
    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
//back1
glVertex2f(-0.86f, -0.36f);
glVertex2f(-0.86f, -0.24f);
glVertex2f(-0.80f, -0.24f);
glVertex2f(-0.80f, -0.36f);

//back2
glColor3ub(255, 179, 161);

glVertex2f(-0.858f, -0.36f);
glVertex2f(-0.858f, -0.25f);
glVertex2f(-0.802f, -0.25f);
glVertex2f(-0.802f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.853f, -0.26f);
glVertex2f(-0.853f, -0.36f);
glVertex2f(-0.808f, -0.36f);
glVertex2f(-0.808f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.03*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(255, 179, 161);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.028*cos(theta)),(-.252+.05*sin(theta)));
}
glEnd();







glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.8305+(.0225*cos(theta)),(-.27+.051*sin(theta)));
}
glEnd();







}



void LeftDownWIndow2()
{
    glTranslatef(.1,0,0);
    LeftDownWindow();
    glLoadIdentity();
}


void LeftTopWIndow1()
{
    glScalef(.45,.45,1);
    glTranslatef(-1.139,.9,0);
    LeftDownWindow();

    glLoadIdentity();
}

void LeftTopWIndow2()
{
    glTranslatef(.21,0,0);
    LeftTopWIndow1();
    glLoadIdentity();

}



void topmiddle_window()
{

    glScalef(0.35,.35,1);
    glTranslatef(-1.59,1.1,0);
    lalalala();
    glLoadIdentity();

}

void topmiddle_window2()
{
    glTranslatef(.025,0,0);
    topmiddle_window();

      glTranslatef(.05,0,0);
    topmiddle_window();

      glTranslatef(.075,0,0);
    topmiddle_window();

      glTranslatef(.1,0,0);
    topmiddle_window();
//
      glTranslatef(.125,0,0);
    topmiddle_window();

    glLoadIdentity();
}



void SecondLeftPart()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);

glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
//
glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.64f, -0.07f);

glVertex2f(-0.64f, -0.07f);
glVertex2f(-0.64f, 0.19f);

glVertex2f(-0.64f, 0.19f);
glVertex2f(-0.65f, 0.175f);



glEnd();


glBegin(GL_QUADS);
glColor3ub(255, 179, 161);

glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);
    glEnd();



    glLineWidth(1);

    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
    glVertex2f(-0.65f, -0.365f);
glVertex2f(-0.639f, -0.345f);

glVertex2f(-0.639f, -0.345f);
glVertex2f(-0.639f, -0.07f);

glVertex2f(-0.639f, -0.07f);
glVertex2f(-0.65f, -0.1f);


glVertex2f(-0.65f, -0.1f);
glVertex2f(-0.65f, -0.365f);
    glEnd();
// glLineWidth(3);



    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);


glVertex2f(-0.65f, -0.38f);
glVertex2f(-0.635f, -0.325f);
glVertex2f(-0.635f, -0.305f);
glVertex2f(-0.65f, -0.36f);



glVertex2f(-0.64f, -0.325f);
glVertex2f(-0.37f, -0.325f);
glVertex2f(-0.37f, -0.310f);
glVertex2f(-0.64f, -0.310f);


    glEnd();



}


void Middle1()
{
    glLineWidth(1.5);
  glScalef(.5,1,1);
    glTranslatef(-.369,.05,0);
glBegin(GL_QUADS);
glColor3ub(255, 179, 161);
glVertex2f(-0.91f, -0.11f);
glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);
glEnd();



    glBegin(GL_LINES);

glColor3ub(120, 87, 79);


glVertex2f(-0.909f, -0.11f);
glVertex2f(-0.909f, -0.36f);

glVertex2f(-0.91f, -0.36f);
glVertex2f(-0.87f, -0.36f);

glVertex2f(-0.87f, -0.36f);
glVertex2f(-0.87f, -0.11f);

glVertex2f(-0.87f, -0.11f);
glVertex2f(-0.909f, -0.11f);



glVertex2f(-0.91f, -0.32f);
glVertex2f(-0.87f, -0.32f);
glVertex2f(-0.91f, -0.29f);
glVertex2f(-0.87f, -0.29f);
glVertex2f(-0.91f, -0.25f);
glVertex2f(-0.87f, -0.25f);
glVertex2f(-0.91f, -0.21f);
glVertex2f(-0.87f, -0.21f);
glVertex2f(-0.91f, -0.17f);
glVertex2f(-0.87f, -0.17f);
glVertex2f(-0.91f, -0.14f);
glVertex2f(-0.87f, -0.14f);

glEnd();

glLoadIdentity();

}


void Middle2()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.619f, -0.31f);
glVertex2f(-0.21f, -0.31f);
glVertex2f(-0.19f, -0.05f);
glVertex2f(-0.619f, -0.06f);





    glEnd();


        glBegin(GL_LINES);
    glColor3ub(120, 87, 79);


    glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.64f, -0.06f);

glVertex2f(-0.64f, -0.06f);
glVertex2f(-0.20f, -0.06f);

    glVertex2f(-0.20f, -0.06f);
glVertex2f(-0.19f, -0.04f);

    glVertex2f(-0.19f, -0.04f);
        glVertex2f(-0.64f, -0.04f);
    glEnd();
}


void Middle3()
{
    glTranslatef(.09,0,0);
    Middle1();

    glTranslatef(.18,0,0);
    Middle1();

    glTranslatef(.27,0,0);
    Middle1();

    glTranslatef(.36,0,0);
    Middle1();

    glLoadIdentity();
}


void LeftMiddleDownWindow1()
{
    glTranslatef(.245,.05,0);
     glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
//back1
glVertex2f(-0.856f, -0.36f);
glVertex2f(-0.856f, -0.24f);
glVertex2f(-0.803f, -0.24f);
glVertex2f(-0.803f, -0.36f);

//back2
glColor3ub(255, 179, 161);

glVertex2f(-0.854f, -0.36f);
glVertex2f(-0.854f, -0.25f);
glVertex2f(-0.805f, -0.25f);
glVertex2f(-0.805f, -0.36f);


//front
    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
glVertex2f(-0.85f, -0.26f);
glVertex2f(-0.85f, -0.36f);
glVertex2f(-0.81f, -0.36f);
glVertex2f(-0.81f, -0.26f);


glEnd();


double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.0255*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();





glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(255, 179, 161);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.025*cos(theta)),(-.25+.05*sin(theta)));
}
glEnd();






//
glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.02*cos(theta)),(-.27+.05*sin(theta)));
}
glEnd();
//
//
    glLoadIdentity();

}


void LeftMiddleDownWindow2()
{
    glTranslatef(.09,0,0);
    LeftMiddleDownWindow1();

        glTranslatef(.18,0,0);
    LeftMiddleDownWindow1();

        glTranslatef(.27,0,0);
    LeftMiddleDownWindow1();

        glTranslatef(.36,0,0);
    LeftMiddleDownWindow1();






    glLoadIdentity();
}


void Middle4()
{

glBegin(GL_POLYGON);
glColor3ub(255, 179, 161);
glVertex2f(-0.639f, -0.039f);
glVertex2f(-0.625f, -0.039f);
glVertex2f(-0.625f, 0.16f);
glVertex2f(-0.639f, 0.17f);
glVertex2f(-0.639f, -0.039f);
glEnd();



    glTranslatef(.287,.05,0);
     glBegin(GL_LINES);
  glColor3ub(120, 87, 79);

  glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);

//
glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.895f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glVertex2f(-0.915f, 0.18f);
glVertex2f(-0.894f, 0.18f);

glEnd();
glLoadIdentity();




}

void Middle6()
{
    //piller

   glTranslatef(.08,0,0);
   Middle4();

      glTranslatef(.16,0,0);
   Middle4();
      glTranslatef(.24,0,0);
   Middle4();
      glTranslatef(.32,0,0);
   Middle4();
      glTranslatef(.40,0,0);
   Middle4();



   glLoadIdentity();
}

void SecondLeftTopWindow1()
{
       glTranslatef(.006,.27,0);
       LeftMiddleDownWindow1();
   glLoadIdentity();
}

void SecondLeftTopWindow2()
{
       glTranslatef(.08,0,0);
       SecondLeftTopWindow1();

        glTranslatef(.16,0,0);
       SecondLeftTopWindow1();

        glTranslatef(.24,0,0);
       SecondLeftTopWindow1();

        glTranslatef(.32,0,0);
       SecondLeftTopWindow1();



        glLoadIdentity();
}



void DiamondShowroom()
{
       glTranslatef(.054,.21,0);
    WhiteDiamond();
      glLoadIdentity();


    glTranslatef(.22,.155,0);
    WhiteDiamond();

    glTranslatef(.02,0,0);
    WhiteDiamond();

    glTranslatef(.02,0,0);
    WhiteDiamond();

    glTranslatef(.05,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();

        glTranslatef(.05,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();

        glTranslatef(.05,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();


            glTranslatef(.05,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();
    glTranslatef(.02,0,0);
    WhiteDiamond();



   glLoadIdentity();
}


void Middle5()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);
glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.239f);
glVertex2f(-0.64f, 0.239f);




    //toppest
glVertex2f(-0.649f, 0.325f);
glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);
    glEnd();

//2nd toppest
   glBegin(GL_POLYGON);
    glColor3ub(255, 179, 161);
glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.648f, 0.26f);
glVertex2f(-0.648f, 0.245f);
glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);
    glEnd();


    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
        glVertex2f(-0.649f, 0.325f);
        glVertex2f(-0.649f, 0.26f);

        glVertex2f(-0.649f, 0.26f);
glVertex2f(-0.19f, 0.26f);

glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.19f, 0.325f);


glVertex2f(-0.19f, 0.325f);
glVertex2f(-0.649f, 0.325f);

glVertex2f(-0.64f, -0.04f);
glVertex2f(-0.19f, -0.04f);

glVertex2f(-0.19f, -0.04f);
glVertex2f(-0.19f, 0.230f);

glVertex2f(-0.19f, 0.230f);
glVertex2f(-0.64f, 0.230f);

glVertex2f(-0.64f, 0.230f);
glVertex2f(-0.64f, -0.04f);

///
  glVertex2f(-0.19f, 0.26f);
glVertex2f(-0.65f, 0.26f);


   glVertex2f(-0.6485f, 0.26f);
glVertex2f(-0.65f, 0.245f);


 glVertex2f(-0.6485f, 0.245f);
glVertex2f(-0.62f, 0.245f);

   glVertex2f(-0.62f, 0.245f);
glVertex2f(-0.635f, 0.23f);

    glVertex2f(-0.635f, 0.23f);
glVertex2f(-0.19f, 0.23f);

glVertex2f(-0.19f, 0.23f);
glVertex2f(-0.19f, 0.26f);


///

    glEnd();



}

//LEFT PART END


void RightPart()
{

    	 Sky2();
	 SecondRightPart();
    Right_Down();
    Right_RightMiddle();
    Right_Middle();
    RightUpperWindow();//
     RightTop();
     Right_top();
//
     RightDownWindow();
     RightDownWIndow2();
     RightTopWIndow1();
     RightTopWIndow2();
     RightTopMiddleWindow();
     RightTopMiddleWindow2();
     RightMiddle1();
     RightMiddle2();
     RightMiddle3();
     RightMiddleDownWindow1();
     RightMiddleDownWindow2();
//
//
     RightMiddle4();
     RightMiddle6();
SecondRightTopWindow1();
SecondRightTopWindow2();
DiamondShowroom2();
RightMiddle7();
}

void LeftPart()
{





     Sky();
	 SecondLeftPart();
    left_down();
    Middle5();
    leftMiddle();
    LeftUpperWindow();//
     LeftTop();
     Lefttop();

    LeftDownWindow();
    LeftDownWIndow2();
    LeftTopWIndow1();
    LeftTopWIndow2();
    topmiddle_window();
    topmiddle_window2();
    Middle1();
    Middle2();
    Middle3();
    LeftMiddleDownWindow1();
    LeftMiddleDownWindow2();


    Middle4();
    Middle6();
SecondLeftTopWindow1();
SecondLeftTopWindow2();
DiamondShowroom();
}




///

void Left_stair()
{
glBegin(GL_POLYGON);
glColor3ub(255, 179, 161);

glVertex2f(-0.3f, -0.32f);
glVertex2f(-0.29f, -0.3105f);
glVertex2f(-0.373f, -0.3105f);
glVertex2f(-0.373f, -0.38f);//
glVertex2f(-0.29f, -0.38f);//
glVertex2f(-0.175f, -0.03f);//
glVertex2f(-0.18f, 0.01f);//
glVertex2f(-0.29f, -0.30f);
glEnd();

glLineWidth(2);
// stair_border
    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

//    glVertex2f(-0.3f, -0.32f);
//glVertex2f(-0.29f, -0.3105f);
glVertex2f(-0.295f, -0.3105f);
glVertex2f(-0.373f, -0.3105f);

glVertex2f(-0.373f, -0.3105f);
glVertex2f(-0.373f, -0.38f);

glVertex2f(-0.373f, -0.38f);//
glVertex2f(-0.29f, -0.38f);

glVertex2f(-0.29f, -0.38f);//
glVertex2f(-0.175f, -0.03f);

glVertex2f(-0.175f, -0.03f);//
glVertex2f(-0.18f, 0.01f);

glVertex2f(-0.18f, 0.01f);
glVertex2f(-0.295f, -0.3105f);
    glEnd();

}

void Right_Stair()
{
glRotatef(180,0,1,0);
glPushMatrix();
Left_stair();
glPopMatrix();
glLoadIdentity();
}

void Stair_Step()
{
    glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);

glVertex2f(-0.2918f, -0.385f);
glVertex2f(0.2915f, -0.385f);
glVertex2f(0.175f, -0.03f);
glVertex2f(-0.174f, -0.03f);
    glEnd();




    //start step


    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
glVertex2f(-0.2918f, -0.385f);
glVertex2f(0.2915f, -0.385f);

glVertex2f(-0.29f, -0.38f);
glVertex2f(0.29f, -0.38f);

glVertex2f(-0.289f, -0.375f);
glVertex2f(0.289f, -0.375f);

glVertex2f(-0.288f, -0.370f);
glVertex2f(0.288f, -0.370f);

glVertex2f(-0.284f, -0.360f);
glVertex2f(0.284f, -0.360f);

glVertex2f(-0.283f, -0.358f);
glVertex2f(0.283f, -0.358f);


glVertex2f(-0.279f, -0.348f);
glVertex2f(0.279f, -0.348f);

glVertex2f(-0.278f, -0.346f);
glVertex2f(0.278f, -0.346f);

glVertex2f(-0.275f, -0.336f);
glVertex2f(0.275f, -0.336f);

glVertex2f(-0.274f, -0.334f);
glVertex2f(0.274f, -0.334f);


glVertex2f(-0.271f, -0.324f);
glVertex2f(0.271f, -0.324f);

glVertex2f(-0.270f, -0.322f);
glVertex2f(0.270f, -0.322f);

glVertex2f(-0.267f, -0.312f);
glVertex2f(0.267f, -0.312f);

glVertex2f(-0.266f, -0.310f);
glVertex2f(0.266f, -0.310f);

glVertex2f(-0.263f, -0.300f);
glVertex2f(0.263f, -0.300f);

glVertex2f(-0.262f, -0.298f);
glVertex2f(0.262f, -0.298f);


glVertex2f(-0.259f, -0.288f);
glVertex2f(0.259f, -0.288f);

glVertex2f(-0.256f, -0.278f);
glVertex2f(0.256f, -0.278f);

glVertex2f(-0.255f, -0.276f);
glVertex2f(0.255f, -0.276f);


glVertex2f(-0.252f, -0.266f);
glVertex2f(0.252f, -0.266f);

glVertex2f(-0.251f, -0.262f);
glVertex2f(0.251f, -0.262f);


glVertex2f(-0.248f, -0.252f);
glVertex2f(0.248f, -0.252f);

glVertex2f(-0.247f, -0.250f);
glVertex2f(0.247f, -0.250f);

glVertex2f(-0.244f, -0.240f);
glVertex2f(0.244f, -0.240f);

glVertex2f(-0.243f, -0.238f);
glVertex2f(0.243f, -0.238f);


glVertex2f(-0.240f, -0.228f);
glVertex2f(0.240f, -0.228f);

glVertex2f(-0.239f, -0.226f);
glVertex2f(0.239f, -0.226f);

glVertex2f(-0.236f, -0.216f);
glVertex2f(0.236f, -0.216f);

glVertex2f(-0.231f, -0.212f);
glVertex2f(0.231f, -0.212f);

glVertex2f(-0.23f, -0.202f);
glVertex2f(0.23f, -0.202f);

glVertex2f(-0.228f, -0.200f);
glVertex2f(0.228f, -0.200f);

glVertex2f(-0.227f, -0.190f);
glVertex2f(0.227f, -0.190f);

glVertex2f(-0.226f, -0.188f);
glVertex2f(0.226f, -0.188f);

glVertex2f(-0.225f, -0.186f);
glVertex2f(0.225f, -0.186f);

glVertex2f(-0.222f, -0.176f);
glVertex2f(0.222f, -0.176f);

glVertex2f(-0.221f, -0.172f);
glVertex2f(0.221f, -0.172f);

glVertex2f(-0.219f, -0.162f);
glVertex2f(0.219f, -0.162f);

glVertex2f(-0.218f, -0.160f);
glVertex2f(0.218f, -0.160f);

glVertex2f(-0.216f, -0.150f);
glVertex2f(0.216f, -0.150f);

glVertex2f(-0.215f, -0.148f);
glVertex2f(0.215f, -0.148f);

glVertex2f(-0.213f, -0.138f);
glVertex2f(0.213f, -0.138f);

glVertex2f(-0.212f, -0.136f);
glVertex2f(0.212f, -0.136f);

glVertex2f(-0.210f, -0.126f);
glVertex2f(0.210f, -0.126f);
glVertex2f(-0.209f, -0.124f);
glVertex2f(0.209f, -0.124f);


glVertex2f(-0.207f, -0.114f);
glVertex2f(0.207f, -0.114f);

glVertex2f(-0.206f, -0.112f);
glVertex2f(0.206f, -0.112f);

glVertex2f(-0.204f, -0.102f);
glVertex2f(0.204f, -0.102f);

glVertex2f(-0.203f, -0.100f);
glVertex2f(0.203f, -0.100f);

glVertex2f(-0.200f, -0.090f);
glVertex2f(0.200f, -0.090f);

glVertex2f(-0.199f, -0.088f);
glVertex2f(0.199f, -0.088f);


glVertex2f(-0.195f, -0.078f);
glVertex2f(0.195f, -0.078f);

glVertex2f(-0.191f, -0.072f);
glVertex2f(0.191f, -0.072f);

glVertex2f(-0.187f, -0.062f);
glVertex2f(0.187f, -0.062f);

glVertex2f(-0.186f, -0.060f);
glVertex2f(0.186f, -0.060f);


glVertex2f(-0.186f, -0.060f);
glVertex2f(0.186f, -0.060f);

glVertex2f(-0.183f, -0.05f);
glVertex2f(0.183f, -0.050f);

glVertex2f(-0.182f, -0.048f);
glVertex2f(0.182f, -0.048f);

glVertex2f(-0.179f, -0.038f);
glVertex2f(0.179f, -0.038f);

glVertex2f(-0.178f, -0.036f);
glVertex2f(0.178f, -0.036f);

//glVertex2f(-0.175f, -0.026f);
//glVertex2f(0.175f, -0.026f);
//
//glVertex2f(-0.174f, -0.024f);
//glVertex2f(0.174f, -0.024f);


    glEnd();






}





void MiddleQuad()
{

glBegin(GL_QUADS);
glColor3ub(255, 179, 161);

glVertex2f(-0.189f, 0.325f);
glVertex2f(-0.189f, -0.05f);
glVertex2f(0.189f, -0.05f);
glVertex2f(0.189f, 0.325f);

//glVertex2f(-0.189f, -0.01f);
//glVertex2f(-0.18f, 0.01f);
//glVertex2f(-0.18f, 0.36f);
//glVertex2f(-0.189f, 0.36f);
    glEnd();




        glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

    glVertex2f(-0.189f, 0.325f);
glVertex2f(-0.189f, -0.05f);
glVertex2f(-0.189f, -0.05f);
glVertex2f(0.189f, -0.05f);
glVertex2f(0.189f, -0.05f);
glVertex2f(0.189f, 0.325f);
glVertex2f(0.189f, 0.325f);
    glVertex2f(-0.189f, 0.325f);



    //base

//glVertex2f(-0.175f, -0.01f);
//
//glVertex2f(-0.18f, -0.03f);
//glVertex2f(-0.148f, -0.03f);
//
//glVertex2f(-0.155f, -0.001f);

    glEnd();

}

void MiddleLeftPiller()
{
glTranslatef(.005,0,0);
        glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);

    glVertex2f(-0.187f, 0.378f);
glVertex2f(-0.187f, 0.323f);
glVertex2f(-0.142f, 0.323f);
glVertex2f(-0.142f, 0.378f);
    glEnd();

        glBegin(GL_LINES);
glColor3ub(120, 87, 79);

//glVertex2f(-0.189f, -0.01f);
//glVertex2f(-0.175f, 0.01f);
//
//glVertex2f(-0.175f, 0.01f);
//glVertex2f(-0.175f, 0.36f);
//
//glVertex2f(-0.175f, 0.36f);
//glVertex2f(-0.189f, 0.36f);
//
//glVertex2f(-0.189f, 0.36f);
//glVertex2f(-0.189f, -0.01f);

//iiiiiiiiiiiiiii
glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.155f, -0.01f);

glVertex2f(-0.155f, -0.01f);
glVertex2f(-0.155f, 0.38f);

glVertex2f(-0.155f, 0.38f);
glVertex2f(-0.175f, 0.38f);


///

///////////////////////////
glVertex2f(-0.187f, 0.40f);
glVertex2f(-0.187f, -0.01f);

glVertex2f(-0.187f, -0.01f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.175f, 0.41f);

glVertex2f(-0.175f, 0.41f);
glVertex2f(-0.187f, 0.40f);



    glEnd();






  glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.33,0,0);
glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.189f, -0.035f);
glVertex2f(-0.175f, 0.00f);

glVertex2f(-0.175f, 0.00f);
glVertex2f(-0.175f, 0.38f);

glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.189f, 0.38f);

glVertex2f(-0.189f, 0.38f);
glVertex2f(-0.189f, -0.035f);


glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



glLoadIdentity();

    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

glVertex2f(-0.17f, -.012);
glVertex2f(-0.178f, -0.03f);

glEnd();


}






void MiddleTop()
{
    glScalef(.91,1,1);
    glTranslatef(.71,.05,0);
        glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);


/////////////////////

glVertex2f(-0.91f, 0.35f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);
/////////////////////
    glEnd();



glBegin(GL_POLYGON);
glColor3ub(255, 179, 161);

glVertex2f(-0.90f, 0.355f);
glVertex2f(-0.89f, 0.365f);
glVertex2f(-0.89f, 0.375f);
glVertex2f(-0.88f, 0.375f);
glVertex2f(-0.875f, 0.365f);
glVertex2f(-0.87f, 0.355f);


glEnd();


glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.895f, 0.37f);

glVertex2f(-0.895f, 0.37f);
glVertex2f(-0.89f, 0.38f);

glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

    glEnd();


    glLineWidth(2);
        glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

glVertex2f(-0.91f, 0.34f);
glVertex2f(-0.91f, 0.331f);


glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);


glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);


glVertex2f(-0.86f, 0.36f);
glVertex2f(-0.88f, 0.36f);

    glEnd();


        glLoadIdentity();

        /////////////////////

     glScalef(.91,1,1);
    glTranslatef(.74,.11,0);

        double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();




glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255, 179, 161);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();


glLoadIdentity();




}



///////////////////////////////////////////////////////////////////
//Tight Middle





void RightMiddleTop()
{
    glRotatef(180,0,1,0);
glPushMatrix();
    glScalef(.91,1,1);
    glTranslatef(.71,.05,0);
        glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);


/////////////////////

glVertex2f(-0.91f, 0.35f);
glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);
/////////////////////
    glEnd();



glBegin(GL_POLYGON);
glColor3ub(255, 179, 161);

glVertex2f(-0.90f, 0.355f);
glVertex2f(-0.89f, 0.365f);
glVertex2f(-0.89f, 0.375f);
glVertex2f(-0.88f, 0.375f);
glVertex2f(-0.875f, 0.365f);
glVertex2f(-0.87f, 0.355f);


glEnd();


glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.90f, 0.36f);
glVertex2f(-0.895f, 0.37f);

glVertex2f(-0.895f, 0.37f);
glVertex2f(-0.89f, 0.38f);

glVertex2f(-0.89f, 0.38f);
glVertex2f(-0.88f, 0.38f);

glVertex2f(-0.88f, 0.38f);
glVertex2f(-0.875f, 0.37f);

glVertex2f(-0.875f, 0.37f);
glVertex2f(-0.87f, 0.36f);

glVertex2f(-0.87f, 0.36f);
glVertex2f(-0.90f, 0.36f);

    glEnd();


    glLineWidth(2);
        glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

glVertex2f(-0.91f, 0.34f);
glVertex2f(-0.91f, 0.331f);


glVertex2f(-0.91f, 0.331f);
glVertex2f(-0.86f, 0.331f);


glVertex2f(-0.86f, 0.331f);
glVertex2f(-0.86f, 0.36f);


glVertex2f(-0.86f, 0.36f);
glVertex2f(-0.88f, 0.36f);

    glEnd();


        glLoadIdentity();
        glPopMatrix();
        glLoadIdentity();

        /////////////////////
        glRotatef(180,0,1,0);
glPushMatrix();

     glScalef(.91,1,1);
    glTranslatef(.74,.11,0);

        double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.010*cos(theta)),(.33+.015*sin(theta)));
}
glEnd();




glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255, 179, 161);
    theta=i*3.1416/180;
    glVertex2f(-.916+(.008*cos(theta)),(.33+.013*sin(theta)));
}
glEnd();


glLoadIdentity();
glPopMatrix();
glLoadIdentity();




}




void RightMiddleLeftPiller()
{
    glRotatef(180,0,1,0);
glPushMatrix();
glTranslatef(.005,0,0);
        glBegin(GL_QUADS);
    glColor3ub(255, 179, 161);

    glVertex2f(-0.187f, 0.378f);
glVertex2f(-0.187f, 0.323f);
glVertex2f(-0.142f, 0.323f);
glVertex2f(-0.142f, 0.378f);
    glEnd();

        glBegin(GL_LINES);
glColor3ub(120, 87, 79);

//glVertex2f(-0.189f, -0.01f);
//glVertex2f(-0.175f, 0.01f);
//
//glVertex2f(-0.175f, 0.01f);
//glVertex2f(-0.175f, 0.36f);
//
//glVertex2f(-0.175f, 0.36f);
//glVertex2f(-0.189f, 0.36f);
//
//glVertex2f(-0.189f, 0.36f);
//glVertex2f(-0.189f, -0.01f);

//iiiiiiiiiiiiiii
glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.155f, -0.01f);

glVertex2f(-0.155f, -0.01f);
glVertex2f(-0.155f, 0.38f);

glVertex2f(-0.155f, 0.38f);
glVertex2f(-0.175f, 0.38f);


///

///////////////////////////
glVertex2f(-0.187f, 0.40f);
glVertex2f(-0.187f, -0.01f);

glVertex2f(-0.187f, -0.01f);
glVertex2f(-0.175f, -0.01f);

glVertex2f(-0.175f, -0.01f);
glVertex2f(-0.175f, 0.41f);

glVertex2f(-0.175f, 0.41f);
glVertex2f(-0.187f, 0.40f);



    glEnd();


glPopMatrix();
glLoadIdentity();





  glRotatef(360,0,1,0);
glPushMatrix();
glTranslatef(.325,0,0);
glBegin(GL_LINES);
glColor3ub(120, 87, 79);

glVertex2f(-0.189f, -0.035f);
glVertex2f(-0.175f, 0.00f);

glVertex2f(-0.175f, 0.00f);
glVertex2f(-0.175f, 0.38f);

glVertex2f(-0.175f, 0.38f);
glVertex2f(-0.189f, 0.38f);

glVertex2f(-0.189f, 0.38f);
glVertex2f(-0.189f, -0.035f);


glEnd();
glLoadIdentity();
glPopMatrix();
glLoadIdentity();



glLoadIdentity();
glRotatef(180,0,1,0);
glPushMatrix();

    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);

glVertex2f(-0.17f, -.012);
glVertex2f(-0.178f, -0.03f);

glEnd();
glPopMatrix();
glLoadIdentity();


}



//////////////////////////////////////////Right Middle End

void MiddleTop1()
{
    glTranslatef(-.005,0,0);
     glBegin(GL_POLYGON);
    glColor3ub(255, 179, 161);

glVertex2f(-0.10f, 0.325f);
glVertex2f(0.11f, 0.325f);
glVertex2f(0.11f, 0.47f);
glVertex2f(0.07f, 0.49f);
glVertex2f(-0.05f, 0.49f);
glVertex2f(-0.10f, 0.47f);
    glEnd();





    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
glVertex2f(-0.10f, 0.325f);
glVertex2f(0.11f, 0.325f);
glVertex2f(0.11f, 0.325f);
glVertex2f(0.11f, 0.47f);
glVertex2f(0.11f, 0.47f);
glVertex2f(0.07f, 0.49f);
glVertex2f(0.07f, 0.49f);
glVertex2f(-0.05f, 0.49f);
glVertex2f(-0.05f, 0.49f);
glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.325f);
    glEnd();

    glLoadIdentity();
}


void MiddleTop2()
{
glTranslatef(0,0.0,0);
   glBegin(GL_POLYGON);
    glColor3ub(255, 179, 161);

    glVertex2f(-0.10f, 0.45f);
glVertex2f(-0.13f, 0.48f);
glVertex2f(-0.06f, 0.51f);
glVertex2f(0.07f, 0.51f);
glVertex2f(0.13f, 0.48f);
glVertex2f(0.11f, 0.45f);
    glEnd();







    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
          glVertex2f(-0.10f, 0.45f);
glVertex2f(-0.13f, 0.48f);

 glVertex2f(-0.13f, 0.48f);
glVertex2f(-0.06f, 0.51f);


  glVertex2f(-0.06f, 0.51f);
glVertex2f(0.07f, 0.51f);

  glVertex2f(0.07f, 0.51f);
glVertex2f(0.13f, 0.48f);

 glVertex2f(0.13f, 0.48f);
glVertex2f(0.11f, 0.45f);

 glVertex2f(0.11f, 0.45f);
      glVertex2f(-0.10f, 0.45f);

    glEnd();










    glLoadIdentity();

}



void MiddleTop3()
{

    glTranslatef(-0.005,.02,0);
    glBegin(GL_POLYGON);
    glColor3ub(255, 179, 161);

    glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.487f);//
glVertex2f(-0.05f, 0.515f);
glVertex2f(0.06f, 0.515f);
glVertex2f(0.11f, 0.49f);//
glVertex2f(0.11f, 0.47f);


    glEnd();

glLineWidth(6);

    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);




    glVertex2f(-0.10f, 0.47f);
glVertex2f(-0.10f, 0.487f);//


glVertex2f(-0.10f, 0.487f);//
glVertex2f(-0.05f, 0.515f);

glVertex2f(-0.05f, 0.515f);
glVertex2f(0.06f, 0.515f);


glVertex2f(0.06f, 0.515f);
glVertex2f(0.11f, 0.49f);//


glVertex2f(0.11f, 0.49f);//
glVertex2f(0.11f, 0.47f);


glVertex2f(0.11f, 0.47f);
    glVertex2f(-0.10f, 0.47f);

    glEnd();



    glLoadIdentity();
}





void MiddleTop4()
{

     glBegin(GL_TRIANGLES);

 glColor3ub(120, 87, 79);
 glVertex2f(-0.012,.694);
 glVertex2f(0.012,.694);
 glVertex2f(0,.8);
 glEnd();

 glLineWidth(4);
    glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
    glVertex2f(0,.75);
    glVertex2f(0,.82);




    glEnd();

 glLineWidth(1.5);

    //////////////////////
    double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(0+(.107*cos(theta)),(.46+.24*sin(theta)));
}
glEnd();



glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(255, 179, 161);
    theta=i*3.1416/180;
    glVertex2f(0+(.104*cos(theta)),(.46+.236*sin(theta)));
}
glEnd();


glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(0+(.055*cos(theta)),(.46+.24*sin(theta)));
}
glEnd();


glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(255, 179, 161);
    theta=i*3.1416/180;
    glVertex2f(0+(.052*cos(theta)),(.46+.236*sin(theta)));
}
glEnd();


glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(0+(.02*cos(theta)),(.69+.021*sin(theta)));
}
glEnd();



glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
   glColor3ub(255, 179, 161);
    theta=i*3.1416/180;
    glVertex2f(0+(.017*cos(theta)),(.694+.012*sin(theta)));
}
glEnd();






}



void MiddleTop5()
{
        glBegin(GL_LINES);
    glColor3ub(120, 87, 79);
    glVertex2f(-0.137f, 0.30f);
glVertex2f(0.137f, 0.30f);

    glVertex2f(-0.137f, 0.288f);
glVertex2f(0.137f, 0.288f);

    glEnd();
}

void MiddleTop6()
{
    glScalef(1.9,1.26,1);
glTranslatef(0.875,.06,0);
glBegin(GL_LINES);
glColor3ub(120, 87, 79);


glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.91f, -0.07f);


glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.90f, -0.07f);

glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.90f, 0.17f);

glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.91f, 0.17f);

//
glVertex2f(-0.91f, -0.07f);
glVertex2f(-0.918f, -0.09f);


glVertex2f(-0.90f, -0.07f);
glVertex2f(-0.892f, -0.09f);
//
glVertex2f(-0.918f, -0.09f);
glVertex2f(-0.89f, -0.09f);



glVertex2f(-0.91f, 0.17f);
glVertex2f(-0.915f, 0.18f);


glVertex2f(-0.90f, 0.17f);
glVertex2f(-0.894f, 0.18f);

glEnd();

glLoadIdentity();
}


void MiddleTop7()
{

    glTranslatef(.12,0,0);
    MiddleTop6();
    glLoadIdentity();
}



void TopMiddleWindow1()
{
    glScalef(.7,1.8,1);
    glTranslatef(.68,.34,0);
    glBegin(GL_QUADS);
glColor3ub(120, 87, 79);
//back1
glVertex2f(-0.86f, -0.36f);
glVertex2f(-0.86f, -0.24f);
glVertex2f(-0.80f, -0.24f);
glVertex2f(-0.80f, -0.36f);

glEnd();




double theta;

glBegin(GL_POLYGON);
for(int i=0;i<180;i++)
{
    glColor3ub(120, 87, 79);
    theta=i*3.1416/180;
    glVertex2f(-.83+(.03*cos(theta)),(-.245+.051*sin(theta)));
}
glEnd();

glLoadIdentity();

}

void TopMiddleWindow2()
{
    glTranslatef(.214,0,0);
    TopMiddleWindow1();
    glLoadIdentity();


    glScalef(1.7,1,1);
        glTranslatef(.107,0,0);
    TopMiddleWindow1();
    glLoadIdentity();



        glScalef(1.4,.47,1);
        glTranslatef(.107,.723,0);
    TopMiddleWindow1();
    glLoadIdentity();





}

///
void LeftMiddlePart()
{
MiddleTop();
MiddleQuad();
Stair_Step();
MiddleLeftPiller();




}


void RightMiddlePart()
{
RightMiddleTop();
RightMiddleLeftPiller();

Left_stair();
Right_Stair();

}

void Center()
{
    LeftMiddlePart();
    RightMiddlePart();


    MiddleTop4();
    MiddleTop3();
    glLineWidth(1.5);
    MiddleTop2();
    MiddleTop1();
    MiddleTop5();
    MiddleTop6();
    MiddleTop7();
    TopMiddleWindow1();
    TopMiddleWindow2();



}

void cloud1()
{
    double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255,255,255);
    theta=i*3.1416/180;
    glVertex2f(-0.94+(.05*cos(theta)),(0.77+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255,255,255);
    theta=i*3.1416/180;
    glVertex2f(-0.86+(.05*cos(theta)),(0.77+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255,255,255);
    theta=i*3.1416/180;
    glVertex2f(-0.78+(.05*cos(theta)),(0.77+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255,255,255);
    theta=i*3.1416/180;
    glVertex2f(-0.90+(.05*cos(theta)),(0.85+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255,255,255);
    theta=i*3.1416/180;
    glVertex2f(-0.82+(.05*cos(theta)),(0.85+.075*sin(theta)));
}
glEnd();

}



void cloud2()
{
    double theta;
    glTranslatef(.4,0,0);


glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255,255,255);
    theta=i*3.1416/180;
    glVertex2f(-0.86+(.05*cos(theta)),(0.77+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255,255,255);
    theta=i*3.1416/180;
    glVertex2f(-0.78+(.05*cos(theta)),(0.77+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255,255,255);
    theta=i*3.1416/180;
    glVertex2f(-0.82+(.05*cos(theta)),(0.85+.075*sin(theta)));
}
glEnd();
glLoadIdentity();

}

void cloud3()
{
        glPushMatrix();
    glTranslatef(position,0,0);
    double theta;
    glTranslatef(1.2,-.2,0);


glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255,255,255);
    theta=i*3.1416/180;
    glVertex2f(-0.86+(.05*cos(theta)),(0.77+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255,255,255);
    theta=i*3.1416/180;
    glVertex2f(-0.78+(.05*cos(theta)),(0.77+.075*sin(theta)));
}
glEnd();

glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255,255,255);
    theta=i*3.1416/180;
    glVertex2f(-0.82+(.05*cos(theta)),(0.85+.075*sin(theta)));
}
glEnd();
glLoadIdentity();
    glPopMatrix();

glLoadIdentity();

}


///*** Airplane model***///
void Eveningairplane_model()
{
    ///Airplane body
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.5);
	glVertex2f(.01, .9);
	glVertex2f(.06, .9);
	glVertex2f(.09, .84);
	glVertex2f(.01, .84);
	glEnd();
	glBegin(GL_POLYGON);
    glColor3f(0.8, 0.8, 1.5);
	glVertex2f(.01, .84);
	glVertex2f(.28, .84);
	glVertex2f(.3, .82);
	glVertex2f(.32, .82);
	glVertex2f(.33, .8);
	glVertex2f(.32, .78);
	glVertex2f(.03, .78);
	glVertex2f(.01, .8);
	glVertex2f(.01, .84);
	glEnd();
    ///Airplane lower red part
	glBegin(GL_POLYGON);
    glColor3f(0.8, 0.0, 0.0);
    glVertex2f(.33, .8);
	glVertex2f(.32, .78);
	glVertex2f(.03, .78);
	glVertex2f(.01, .8);
	glEnd();
    ///Airplane windows
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.28, .84);
	glVertex2f(.3, .82);
	glVertex2f(.28, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.2, .83);
	glVertex2f(.21, .83);
	glVertex2f(.21, .82);
	glVertex2f(.2, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.22, .83);
	glVertex2f(.23, .83);
	glVertex2f(.23, .82);
	glVertex2f(.22, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.18, .83);
	glVertex2f(.19, .83);
	glVertex2f(.19, .82);
	glVertex2f(.18, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.16, .83);
	glVertex2f(.17, .83);
	glVertex2f(.17, .82);
	glVertex2f(.16, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.14, .83);
	glVertex2f(.15, .83);
	glVertex2f(.15, .82);
	glVertex2f(.14, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.12, .83);
	glVertex2f(.13, .83);
	glVertex2f(.13, .82);
	glVertex2f(.12, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.1, .83);
	glVertex2f(.11, .83);
	glVertex2f(.11, .82);
	glVertex2f(.1, .82);
	glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);
	glVertex2f(.08, .83);
	glVertex2f(.09, .83);
	glVertex2f(.09, .82);
	glVertex2f(.08, .82);
	glEnd();
    ///Airplane wings
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.5);
	glVertex2f(.13, .84);
	glVertex2f(.12, .87);
	glVertex2f(.16, .87);
	glVertex2f(.19, .84);
	glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.5);
	glVertex2f(.13, .78);
	glVertex2f(.12, .75);
	glVertex2f(.16, .75);
	glVertex2f(.19, .78);
	glEnd();
}


void Eveningairplane_Rotate(){
    glTranslatef(1,0,0);
    glRotatef(180,0,1,0);
    glPushMatrix();
    Eveningairplane_model();
    glPopMatrix();
    glLoadIdentity();

}

void EveningDynamic_Airplane()
{
    glPushMatrix();
    glTranslatef(position2,0,0);
    Eveningairplane_Rotate();
    glPopMatrix();
    glLoadIdentity();
}

void Cloud()
{
    glPushMatrix();
    glTranslatef(position,0,0);
    cloud1();
    cloud2();
    cloud3();

    glPopMatrix();

glLoadIdentity();

}

void Sun()
{
double theta;
glBegin(GL_POLYGON);
for(int i=0;i<360;i++)
{
    glColor3ub(255,255,0);
    theta=i*3.1416/180;
    glVertex2f(0.68+(.05*cos(theta)),(.82+.075*sin(theta)));
}
glEnd();
}

void Sun_Shine()
{
    glPushMatrix();
    glTranslatef(0,position3,0);
    Sun();
    glPopMatrix();
    glLoadIdentity();
}


void sound()
{
    PlaySound("morning.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}
void Rainsound()
{
    PlaySound("rain.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);

}

void sound2()
{
    PlaySound(NULL, NULL, SND_ASYNC|SND_FILENAME);
}

void Day() {
	glClearColor(1,1,1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
    RightPart();
    LeftPart();
    //Sun_Shine();
    Sun();
    Cloud();
    EveningDynamic_Airplane();
    Center();
 glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient[] = {0,3.5,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.

    Morningtree1();
    Morningtree2();
    Morningtree3();
    MorningRightTree();
    glDisable(GL_LIGHTING);//Disable Light Effect
	glFlush();  // Render now
}
void DayDemo(int x);
void Morning()
{
    //sound();
   	glClearColor(1,1,1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
    MorningRightPart();
    MorningLeftPart();

    //Dynamic_Airplane();
    MorningCenter();
      glEnable(GL_LIGHTING);//Enable Light Effect

  GLfloat global_ambient[] = {0,2.5,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.

    Morningtree1();
    Morningtree2();
    Morningtree3();
    MorningRightTree();
    glDisable(GL_LIGHTING);//Disable Light Effect

	glFlush();  // Render now
	//glutTimerFunc(10000,DayDemo,0);

}


void Night()
{
   	glClearColor(1,1,1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
    NightRightPart();
    NightLeftPart();
    //NightSun_Shine();
    //Dynamic_Airplane();
    MoonRotate();
    NightCenter();
    St();
    Star();
 glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient[] = {0,1.5,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.

    Morningtree1();
    Morningtree2();
    Morningtree3();
    MorningRightTree();
    glDisable(GL_LIGHTING);//Disable Light Effect
	glFlush();  // Render now
}
void Cloudy()
{
   	glClearColor(1,1,1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
    CloudyRightPart();
    CloudyLeftPart();
    rainyCloud();
    CloudyCenter();
     Rain();
      glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient[] = {0,2,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.

    Morningtree1();
    Morningtree2();
    Morningtree3();
    MorningRightTree();
    glDisable(GL_LIGHTING);//Disable Light Effect
	glFlush();  // Render now
}
void Evening()
{

   	glClearColor(1,1,1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
    EveningRightPart();
    EveningLeftPart();

    Dynamic_Airplane();
    EveningCenter();
  glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient[] = {0,2.2,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.

    Morningtree1();
    Morningtree2();
    Morningtree3();
    MorningRightTree();
    glDisable(GL_LIGHTING);//Disable Light Effect
	glFlush();  // Render now

}

void NightRain()
{

    	glClearColor(1,1,1, 1);
	glClear(GL_COLOR_BUFFER_BIT);
    NightRightPart();
    NightLeftPart();
    //NightSun_Shine();
    //Dynamic_Airplane();
    //MoonRotate();
    NightCenter();
    //St();
    //Star();
    Rain();
     glEnable(GL_LIGHTING);//Enable Light Effect
  GLfloat global_ambient[] = {0,1.5,0.0, 0.1};//ambient RGBA intensity of light
  glLightModelfv(GL_LIGHT_MODEL_AMBIENT, global_ambient);//A lighting model parameter.

    Morningtree1();
    Morningtree2();
    Morningtree3();
    MorningRightTree();
    glDisable(GL_LIGHTING);//Disable Light Effect

    glFlush();
}

//void MorningDemo(int x);
//
//void NightRainDemo(int x)
//{
//    //sound();
//
//   glutDisplayFunc(NightRain);
//
//     glutTimerFunc(5000,MorningDemo,0);
//}
//
//void NightDemo(int x)
//{
//Rainsound();
//   glutDisplayFunc(Night);
//
//     glutTimerFunc(5000,NightRainDemo,0);
//}
//
//void EveningDemo(int x)
//{
//    sound2();
//    glutDisplayFunc(Evening);
//
//    glutTimerFunc(5000,NightDemo,0);
//}
//
//void RainyDemo(int x)
//{
//    glutDisplayFunc(Cloudy);
//   // sound2();
//    glutTimerFunc(5000,EveningDemo,0);
//}
//
//void DayDemo(int x)
//{
//    sound2();
//    glutDisplayFunc(Day);
//    Rainsound();
//   // sound();
//    glutTimerFunc(5000,RainyDemo,0);
//}
//
//void MorningDemo(int x)
//{
//     glutDisplayFunc(Morning);
//}






void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {


    case 'd':
        sound2();
        glutDisplayFunc(Day);
        break;
    case 'n':
         sound2();
         glutDisplayFunc(Night);
         break;
    case 'm':
                  sound2();
        glutDisplayFunc(Morning);
        sound();
        break;
    case 'r':
        sound2();
         glutDisplayFunc(Cloudy);
         Rainsound();
         break;

    case 'e':
               sound2();
         glutDisplayFunc(Evening);
         break;
    case 'b':
         sound2();
         glutDisplayFunc(NightRain);
         Rainsound();
         break;

glutPostRedisplay();
	}

}

int main(int argc, char** argv)
{
    cout<<"Press m for morning mode"<<endl;
    cout<<"Press d for day mode"<<endl;
    cout<<"Press r for rainy mode"<<endl;
    cout<<"Press e for evening mode"<<endl;
    cout<<"Press n for night mode"<<endl;
    cout<<"Press b for night rain mode"<<endl;
    sound();
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(Morning); // Register display callback handler for window re-paint
	glutKeyboardFunc(handleKeypress);
	glutTimerFunc(100, update, 0);
	glutTimerFunc(100, update2, 0);
	glutTimerFunc(100, update3, 0);
	glutTimerFunc(100, update4, 0);
    //glutTimerFunc(100, update5, 0);
	glutMainLoop();           // Enter the event-processing loop
	glutIdleFunc(Idle);
	return 0;
}
