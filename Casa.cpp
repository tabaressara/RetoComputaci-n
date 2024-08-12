#include "Casa.h"

void Casa::DibujarCasa(float x, float y, float z) 
{
	glPushMatrix();
		glTranslatef(x, y, z);

		glPushMatrix();
			glTranslatef(0, 3, 0);
			glBegin(GL_TRIANGLES);
				glVertex3f(1, 0, 0);
				glVertex3f(0, 1, 0);
				glVertex3f(-1, 0, 0);
			glEnd();
		glPopMatrix();

        glPushMatrix();
			glRotatef(30, 0, 0, -3);
			glTranslatef(-3, 0, 0);
			glutSolidCube(1);
        glPopMatrix();

        glPushMatrix();
			glTranslatef(3, 3, 0);
			glRotatef(45, 1, 1, 0);
			glutSolidCube(1);
        glPopMatrix();

	glPopMatrix();
}