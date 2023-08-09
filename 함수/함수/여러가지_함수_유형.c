// 매개변수가 없는 함수
// 키보드로 수를 입력하면 양수를 반환하는 함수를 만든다고 하면
// 호출한 함수로부터 값을 받을 필요가 없으므로 매개변수도 필요 없다.
// 이 때 매개변수의 자리에는 void를 사용한다.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int get_num(void); // 함수 선언 (매개변수가 없고 반환형만 있다.)

int main(void)  
{
	int result;

	result = get_num(); // 함수 호출, 반환값은 result에 저장
	printf("반환값 : %d\n", result); // 반환값 출력
	return 0;
}

int get_num(void) // 매개변수가 없고 반환형만 있다.
{
	int num; // 키보드 입력값을 저장할 변수

	printf("양수 입력 : "); // 입력 안내 메세지
	scanf("%d", &num); // 키보드 입력

	while (num < 0)
	{
		printf("양수를 입력하세요!\n");
		printf("양수 입력 : ");
		scanf("%d", &num);
	}

	return num; // 입력한 값 반환
}