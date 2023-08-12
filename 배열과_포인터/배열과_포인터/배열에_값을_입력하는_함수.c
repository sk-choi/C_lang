// 배열에 값을 입력하는 함수도 배열의 값을 출력하는 함수와 구현방법은 같다.
// 다만, 입력 함수는 데이터를 저장할 배열의 위치가 필요하므로 함수 안에서 포인터를 직접 사용한다.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);
void ouput_ary(double* pa, int size); //배열 출력하는 함수 만들어보기

int main(void)
{
	double ary[5];
	double max; // 최댓값을 저장할 변수
	int size = sizeof(ary) / sizeof(ary[0]); // 배열 요소의 개수 계산
	
	input_ary(ary, size); // 배열에 값 입력
	max = find_max(ary, size); // 배열의 최댓값 반환
	printf("배열의 최댓값 : %.1f\n", max);

	ouput_ary(ary, size);

	return 0;
}

void input_ary(double* pa, int size) // double 포인터를 매개변수로 선언
{
	int i;

	printf("%d개의 실수값 입력 : ", size);
	for (i = 0; i < size; i++) // size의 값에 따라 반복 횟수 결정
	{
		scanf("%lf", pa + i); // &pa[i]도 가능, 입력할 배열 요소의 주소를 전달
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0]; // 첫 번째 배열 요소의 값을 최댓값으로 설정
	for (i = 1; i < size; i++) // 두 번째 배열 요소부터 max와 비교
	{
		if (pa[i] > max) max = pa[i]; // 새로운 배열 요소의 값이 max보다 크면 대입
	}

	return max; // 최댓값 반환
}

void ouput_ary(double* pa, int size) // 배열 출력하는 함수 만들어보기
{
	int i;
	
	for (i = 0; i < size; i++)
	{
		printf("%.1lf  ", * (pa + i)); // 배열의 값을 출력해야 하니 해당 주소의 값을 출력하는 *(pa + i)를 쓰는 것이 맞다. pa[i]도 가능!
	}
}


