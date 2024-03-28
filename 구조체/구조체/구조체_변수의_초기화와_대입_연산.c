// 구조체 변수도 일반 변수와 같이 선언과 동시에 초기화할 수 있다.
// 단, 여러 개의 멤버를 초기화 하므로 배열 초기화와 비슷한 방법을 사용한다.
// 즉, 초깃값을 중괄호로 묶고 각 멤버의 형태에 맞는 값으로 초기화한다.

#include <stdio.h>

struct student // 학생 구조체 선언
{
	int id; // 학번
	char name[20]; // 이름
	double grade; // 학점
};

int main(void)
{
	struct student s1 = { 315, "홍길동", 2.4 }, // 구조체 변수 선언과 초기화 (멤버 선언 순서와 같은 자료형 순서)
	               s2 = { 316, "이순신", 3.7 },
				   s3 = { 317, "세종대왕", 4.4 };

	struct student max; // 최고 학점을 저장할 구조체 변수

	max = s1; // s1을 최고 학점으로 가정
	if (s2.grade > max.grade) max = s2; // s2가 더 높으면 max에 대입
	if (s3.grade > max.grade) max = s3; // s3가 더 높으면 max에 대입

	printf("학번 : %d\n", max.id); // 최고 학점 학생의 학번 출력
	printf("이름 : %s\n", max.name); // 최고 학점 학생의 이름 출력
	printf("학점 : %.1lf\n", max.grade); // 최고 학점 학생의 학점 출력

	return 0;

}

// 구조체를 사용하면 서로 다른 자료형도 베열처럼 사용할 수 있다!