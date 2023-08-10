#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int score[5]; 
	int i;
	int total = 0;
	double avg;
	int count; // 배열 요소의 개수를 저장할 변수

	count = sizeof(score) / sizeof(score[0]); // 배열 요소의 개수 계산 -> 배열 전체 크기(20바이트) / 배열 요소 하나의 크기(4바이트) = 5

	// 이렇게 구한 배열 요소의 개수를 각 반복문의 반복 횟수로 사용하면,
	// 나중에 배열 선언문에서 요소의 개수를 바꾸더라도 나머지 코드를 수정할 필요가 없다.
    // 반복문 뿐만 아니라 배열 요소의 개수가 필요한 모든 곳에 count를 사용함.

	for (i = 0; i < count; i++) // 11행에서 계산한 count만큼 반복
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < count; i++) // 11행에서 계산한 count만큼 반복
	{
		total += score[i];
	}
	avg = total / (double)count; // 총합을 count로 나누어 평균 계산, total과 count가 모두 int형이므로 결과를 소수점 아래까지 구할려면 형 변환 연산자로
								// (double)을 사용해 실수 연산이 되도록 함.

	for (i = 0; i < count; i++) // 11행에서 계산한 count만큼 반복
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("평균 : %.1lf\n", avg);

	return 0;
}