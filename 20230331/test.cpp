#include <Windows.h>
#include <gl/GL.h>
#include <gl/GLU.h>
#include <gl/glut.h>

void MyDisplay(){
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_POLYGON);
	glVertex3f(-0.5, -0.5, 0.0);
	glVertex3f(-0.5, 0.5, 0.0);
	glVertex3f(0.5, 0.5, 0.0);
	glVertex3f(0.5, -0.5, 0.0);
	glEnd();
	glFlush();


}

int main(void) {
	glutCreateWindow("OpenGL Window Example");
	glutDisplayFunc(MyDisplay);
	glutMainLoop();
	return 0;
}