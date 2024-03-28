// 구조체 변수는 대입 연산이 가능하므로 함수의 인수로 주거나 함수에서
// 여러 개의 값을 구조체로 묶어 동시에 반환하는 것이 가능하다.

// 예를 들어 두 변수의 값을 바꾸는 함수에는 포인터가 필요하지만
// 구조체 변수를 사용해 값을 주고 받으면 포인터 없이도 두 변수의 값을 바꾸는 함수를 
// 만들 수 있다.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

struct vision // 로봇의 시력을 저장할 구조체
{
	double left; // 왼쪽 눈
	double right; // 오른쪽 눈
};

struct vision exchange(struct vision robot); // 두 시력을 바꾸는 함수

int main(void)
{
	struct vision robot; // 구조체 변수 선언

	printf("시력 입력 : ");
	scanf("%lf%lf", &(robot.left), &(robot.right)); // 시력 입력
	robot = exchange(robot); // 교환 함수 호출
	printf("바뀐 시력 : %.1lf	%.1lf\n", robot.left, robot.right);

	return 0;
}

struct vision exchange(struct vision robot)
{
	double temp; // 교환을 위한 임시 변수
	
	temp = robot.left; // 좌우 시력 교환
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}

