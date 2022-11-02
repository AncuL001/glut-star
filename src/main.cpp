#include <GL/glut.h>

GLvoid display()
{
  glClear(GL_COLOR_BUFFER_BIT);
  glColor3f(0.0,0.0,0.0);
  glPointSize(8.0);
  glLineWidth(5.0);
  glBegin(GL_LINE_LOOP);
    glVertex2f(0.0f, 0.75f);
    glVertex2f(0.18f, 0.24f);
    glVertex2f(0.71f, 0.23f);
    glVertex2f(0.28f, -0.1f);
    glVertex2f(0.44f, -0.6f);
    glVertex2f(0.0f, -0.3f);
    glVertex2f(-0.44f, -0.6f);
    glVertex2f(-0.28f, -0.1f);
    glVertex2f(-0.71f, 0.23f);
    glVertex2f(-0.18f, 0.24f);
    glVertex2f(0.0f, 0.75f);
  glEnd();
  glFlush();
}

void init(void)
{
  glClearColor(1.0,1.0,1.0,1.0);
}

int main(int argc, char* argv[])
{
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  GLint height = glutGet(GLUT_SCREEN_HEIGHT);
  glutInitWindowSize(int(height * 0.8), int(height * 0.8));
  glutCreateWindow("Star");

  glutDisplayFunc( display );
  init();

  glutMainLoop();

  return 0;
}
