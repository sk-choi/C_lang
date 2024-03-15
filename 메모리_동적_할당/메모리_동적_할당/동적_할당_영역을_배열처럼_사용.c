#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int)); // 저장공간 20 바이트 할당
	if (pi == NULL) // 메모리가 부족할 때의 예외처리 구문
	{
		printf("메모리가 부족합니다!\n");
		exit(1);
	}
	printf("다섯 명의 나이를 입력하세요 : ");

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &pi[i]);
		sum += pi[i];
	}
	printf("다섯 명의 평균 나이 : %.1lf\n", (sum / 5.0)); // 평균 나이 출력
	free(pi); // 할당한 메모리 영역 반환

	return 0;
}