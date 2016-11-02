#include<GL/glut.h>

void MyDisplay(){
	//버퍼의 초기화-> 배경지우기 -> 생상 버퍼 지우기
	glClear(GL_COLOR_BUFFER_BIT);
	//그리기 모드를 시작함을 알리는 함수 -> 이하 정점을 찍는 함수
	glBegin(GL_POLYGON);
		//정점을 3개 받으며 f형태로 받음
		glVertex3f(-0.5, -0.5, 0.0);
		glVertex3f(0.5, -0.5, 0.0);
		glVertex3f(0.5, 0.5, 0.0);
		glVertex3f(-0.5, 0.5, 0.0);
	//gl시작 함수가 있기에 종료함수가 필요
	glEnd();
	//프로세서 전달 함수이다.
	glFlush();
}
int main(int argc, char** argv){
	//우분투에서는 Init함수로 생성을 해주어야함
	glutInit(&argc, argv);
	//윈도우 창을 생성하며 타이틀을 생성해주는 함수
	glutCreateWindow("OpenGL Drawing Example");
	//화면을 표현하기 위한 메소드를 호출하는 함수
	glutDisplayFunc(MyDisplay);
	
	glutMainLoop();
	
	return 0;
}
