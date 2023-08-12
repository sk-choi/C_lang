#include <stdio.h>

void print_ary(int* pa, int size);

int main(void)
{
	int ary1[5] = { 10, 20, 30, 40, 50 };
	int ary2[7] = { 10, 20, 30, 40, 50, 60,70 };

	print_ary(ary1, 5);
	printf("\n");
	print_ary(ary2, sizeof(ary2) / sizeof(ary2[0]));

	return 0;
}

void print_ary(int* pa, int size)
{
	int i;

	for (i = 0; i < size; i++)
	{
		printf("%d ", pa[i]);
	}
}

// 함수를 호출할 때 주는 배열 요소의 개수는 sizeof 연산자로 구할 수 있다.
// sizeof 연산자에 배열명을 사용하면 배열 전체의 크기를 계산하므로 이 값을 배열 요소 하나의 크기로 나누어 배열 요소의 개수를 구한다.
// ex. print_ary(ary2, sizeof(ary2) / sizeof(ary2[0]));  // 전체 배열의 길이 나누기 배열 요소 하나의 크기.