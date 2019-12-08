#include<windows.h>
#include <GL/glut.h>
#include<math.h>


void init(void)
{
	glClearColor(0.0, 0.0, 0.0, 0.0);	// Set display window colour to white

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(0.0, 400.0, 0.0, 400.0);
}
void circle(int x, int y, float r)
{
    float theta;
    int i;
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x+r*cos(theta),y+r*sin(theta));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();
}

void halfCircle(int x, int y, float r)
{
    float theta;
    int i;
	glBegin(GL_POLYGON);
	for(i=0;i<180;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(x+r*cos(theta),y+r*sin(theta));  // here (250,250) is the center and 150 is the radius
	}
	glEnd();
}
void rainbow(void)
{
    glColor3f(1.0, 0.0, 0.0);
    halfCircle(110,220,170);

    glColor3f(1.0, 0.5, 0.0);
    halfCircle(110,220,167);

    glColor3f(1.0, 1.0, 0.0);
    halfCircle(110,220,164);

    glColor3f(0.0, 1.0, 0.0);
    halfCircle(110,220,161);

    glColor3f(0.0, 1.0, 1.0);
    halfCircle(110,220,158);

    glColor3f(0.0, 0.0, 1.0);
    halfCircle(110,220,155);

    glColor3f(0.309804, 0.184314, 0.309804);
    halfCircle(110,220,152);

    glColor3f(0.118, 0.565, 1.000);
    halfCircle(110,220,149);
}
void sun()
{

	glColor3f(1.0, 0.743, 0.0);
	//glColor3f(0.930, 0.341, 0.016);
    circle(350,350,20);

}
void revir(void)
{

	//glColor3f(0.518, 0.647, 0.809);
	//glColor3f(0.255, 0.412, 0.882);
	glColor3f(0.0, 0.251, 0.467);

	glBegin(GL_QUADS);
		glVertex2i(0, 60);
		glVertex2i(0, 0);
		glVertex2i(400, 0);
		glVertex2i(400, 160);

	glEnd();
}
void road(void)
{

	glColor3f(0, 0, 0);

	glBegin(GL_QUADS);
		glVertex2i(0, 110);
		glVertex2i(0, 70);
		glVertex2i(400, 160);
		glVertex2i(400, 200);

	glEnd();

    glColor3f(1, 1, 1);
    glLineWidth(4);
    glBegin(GL_LINES);

		glVertex2i(10, 93);
		glVertex2i(60, 104);

		glVertex2i(80, 110);
		glVertex2i(130, 120);

		glVertex2i(150, 125);
		glVertex2i(200, 136);

		glVertex2i(220, 142);
		glVertex2i(270, 152);

		glVertex2i(290, 158);
		glVertex2i(340, 169);

		glVertex2i(360, 175);
		glVertex2i(400, 184);



	glEnd();
}
void fild(void)
{

	glColor3f(0.357, 0.533, 0.176);

	glBegin(GL_QUADS);

		glVertex2i(0, 220);
		glVertex2i(0, 60);
		glVertex2i(400, 160);
		glVertex2i(400, 220);

	glEnd();
}
void hill(void)
{

	glColor3f(0.627, 0.322, 0.176);

	glBegin(GL_POLYGON);

        glVertex2i(0, 260);
		glVertex2i(0, 220);
		glVertex2i(50, 220);
		glVertex2i(25, 280);

	glEnd();

	glBegin(GL_POLYGON);

        glVertex2i(39, 220);
		glVertex2i(110, 220);
		glVertex2i(80, 290);

	glEnd();

    glBegin(GL_POLYGON);

        glVertex2i(100, 220);
		glVertex2i(130, 220);
		glVertex2i(115, 270);

	glEnd();


    glBegin(GL_POLYGON);

        glVertex2i(120, 220);
		glVertex2i(150, 220);
		glVertex2i(130, 270);

	glEnd();


    glBegin(GL_POLYGON);

        glVertex2i(140, 220);
		glVertex2i(210, 220);
		glVertex2i(180, 290);

	glEnd();


    glBegin(GL_POLYGON);

        glVertex2i(190, 220);
		glVertex2i(280, 220);
		glVertex2i(230, 280);

	glEnd();


    glBegin(GL_POLYGON);

        glVertex2i(250, 220);
		glVertex2i(350, 220);
		glVertex2i(300, 280);

	glEnd();


    glBegin(GL_POLYGON);

        glVertex2i(330, 220);
		glVertex2i(400, 220);
		glVertex2i(400, 250);
		glVertex2i(370, 270);

	glEnd();
}

void sky(void)
{

	glColor3f(0.0, 0.518, 0.812);

	glBegin(GL_QUADS);

        glVertex2i(0, 400);
		glVertex2i(0, 220);
		glVertex2i(400, 220);
		glVertex2i(400, 400);

	glEnd();
}

void man(void)
{
    glColor3f(1.0, 1.0, 1.0);
    circle(49,160,10);   ///head

    glLineWidth(8);
	glBegin(GL_LINES);    ///body


        glVertex2i(52, 130);
		glVertex2i(48, 150);
        glEnd();

    glBegin(GL_LINES);   ///right leg

        glVertex2i(52, 130);
		glVertex2i(58, 110);
        glEnd();

    glBegin(GL_LINES);   ///left leg

        glVertex2i(52, 130);
		glVertex2i(46, 110);
        glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);   ///left heand

        glVertex2i(50, 141);
		glVertex2i(53, 149);


		glVertex2i(53, 149);
		glVertex2i(62, 147);
        glEnd();

    glLineWidth(4);
    glBegin(GL_LINES);   ///left heand

        glVertex2i(50, 141);
		glVertex2i(60, 138);

		glVertex2i(60, 138);
		glVertex2i(62, 147);
        glEnd();

    glLineWidth(2);
    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_LINES);   ///umberalla

        glVertex2i(62, 147);
		glVertex2i(51, 210);

        glEnd();

    glColor3f(0.0, 0.0, 0.0);
    halfCircle(53,180,27);
}

void tree_1(void)
{
    //glColor3f(0.52, 0.37, 0.26);
    glColor3f(0.227, 0.168, 0.062);
    glLineWidth(15);
	glBegin(GL_LINES);
        glVertex2i(30, 130);
		glVertex2i(30, 190);
        glEnd();

    //glColor3f(0.0, 0.5, 0.0);
    glColor3f(0.420, 0.431, 0.055);
    glBegin(GL_TRIANGLES);
        glVertex2i(15, 170);
		glVertex2i(45, 170);
		glVertex2i(30, 200);
        glEnd();

    glBegin(GL_TRIANGLES);
        glVertex2i(15, 160);
		glVertex2i(45, 160);
		glVertex2i(30, 200);
        glEnd();

}
void tree_4(void)
{
    int x=30,y=20;
    //glColor3f(0.52, 0.37, 0.26);
    glColor3f(0.227, 0.168, 0.062);
    glLineWidth(15);
	glBegin(GL_LINES);
        glVertex2i(30+x, 130+y);
		glVertex2i(30+x, 190+y);
        glEnd();

    //glColor3f(0.0, 0.5, 0.0);
    glColor3f(0.420, 0.431, 0.055);
    glBegin(GL_TRIANGLES);
        glVertex2i(15+x, 170+y);
		glVertex2i(45+x, 170+y);
		glVertex2i(30+x, 200+y);
        glEnd();

    glBegin(GL_TRIANGLES);
        glVertex2i(15+x, 160+y);
		glVertex2i(45+x, 160+y);
		glVertex2i(30+x, 200+y);
        glEnd();

}
void tree_5(void)
{
    int x=-10,y=30;
    glColor3f(0.52, 0.37, 0.26);
    //glColor3f(0.227, 0.168, 0.062);
    glLineWidth(15);
	glBegin(GL_LINES);
        glVertex2i(30+x, 130+y);
		glVertex2i(30+x, 190+y);
        glEnd();

    glColor3f(0.0, 0.5, 0.0);
    //glColor3f(0.420, 0.431, 0.055);
    glBegin(GL_TRIANGLES);
        glVertex2i(15+x, 170+y);
		glVertex2i(45+x, 170+y);
		glVertex2i(30+x, 200+y);
        glEnd();

    glBegin(GL_TRIANGLES);
        glVertex2i(15+x, 160+y);
		glVertex2i(45+x, 160+y);
		glVertex2i(30+x, 200+y);
        glEnd();

}


void tree_6(void)
{
    int x=80,y=20;
    glColor3f(0.52, 0.37, 0.26);
    //glColor3f(0.227, 0.168, 0.062);
    glLineWidth(15);
	glBegin(GL_LINES);
        glVertex2i(30+x, 130+y);
		glVertex2i(30+x, 190+y);
        glEnd();

    glColor3f(0.0, 0.5, 0.0);
    //glColor3f(0.420, 0.431, 0.055);
    glBegin(GL_TRIANGLES);
        glVertex2i(15+x, 170+y);
		glVertex2i(45+x, 170+y);
		glVertex2i(30+x, 200+y);
        glEnd();

    glBegin(GL_TRIANGLES);
        glVertex2i(15+x, 160+y);
		glVertex2i(45+x, 160+y);
		glVertex2i(30+x, 200+y);
        glEnd();

}
void tree_7(void)
{
    int x=130,y=20;
    //glColor3f(0.52, 0.37, 0.26);
    glColor3f(0.227, 0.168, 0.062);
    glLineWidth(15);
	glBegin(GL_LINES);
        glVertex2i(30+x, 130+y);
		glVertex2i(30+x, 190+y);
        glEnd();

    //glColor3f(0.0, 0.5, 0.0);
    glColor3f(0.420, 0.431, 0.055);
    glBegin(GL_TRIANGLES);
        glVertex2i(15+x, 170+y);
		glVertex2i(45+x, 170+y);
		glVertex2i(30+x, 200+y);
        glEnd();

    glBegin(GL_TRIANGLES);
        glVertex2i(15+x, 160+y);
		glVertex2i(45+x, 160+y);
		glVertex2i(30+x, 200+y);
        glEnd();

}


void tree_2(void)
{
    glColor3f(0.52, 0.37, 0.26);
    //glColor3f(0.91, 0.76, 0.65);
    glLineWidth(10);
	glBegin(GL_LINES);
        glVertex2i(250, 170);
		glVertex2i(250, 200);
        glEnd();

    glColor3f(0.0, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(235, 180);
		glVertex2i(265, 180);
		glVertex2i(250, 220);
        glEnd();

}

void tree_3(void)
{
    glColor3f(0.52, 0.37, 0.26);
    //glColor3f(0.91, 0.76, 0.65);
    glLineWidth(9);
	glBegin(GL_LINES);
        glVertex2i(350, 195);
		glVertex2i(350, 220);
        glEnd();


    glColor3f(0.0, 0.5, 0.0);
    glBegin(GL_TRIANGLES);
        glVertex2i(340, 210);
		glVertex2i(360, 210);
		glVertex2i(350, 230);
        glEnd();

    glBegin(GL_TRIANGLES);
        glVertex2i(340, 206);
		glVertex2i(360, 206);
		glVertex2i(350, 230);
        glEnd();




}


float man_move = 0.0f;
float y=0.0f;
void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
    revir();
    fild();
    sky();
    rainbow();
    hill();
    road();
    tree_5();
    tree_1();
    tree_2();
    tree_3();
    tree_4();
    tree_6();
    tree_7();
    //man();
    sun();

    ///
    glPushMatrix();
    glTranslatef(man_move,y,0.0);
    man();
    glPopMatrix();
    man_move +=0.4;
    y +=0.1;
    if(man_move > 400)
    {
        man_move = 0;
        y =0;


    }
    ///
	glFlush();



}
void update(int value)
{
    glutPostRedisplay();
    glutTimerFunc(25, update, 0);
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						// Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	// Set display mode

	glutInitWindowPosition(100, 100);				// Set window position
	glutInitWindowSize(1000, 600);					// Set window size
	glutCreateWindow("Computer Graphics Project:");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(display);		// Send graphics to display window
	glutTimerFunc(25,update,0);
	glutMainLoop();					// Display everything and wait

	return 0;
}
