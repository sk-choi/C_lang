// break는 반복문 안에서 사용하는 제어문이다.
// 반복문 안에서 반복을 즉시 끝낼 때 사용하며,
// 모든 반복문이 조건식이 거짓일 때 반복이 끝나는 것과 다르게
// break를 사용하면 중간에서 임의로 반복을 끝낼 수 있다.

#include <stdio.h>

int main(void)
{
	int i;
	int sum = 0;

	for (i = 1; i <= 10; i++)
	{
		sum += i;
		if (sum > 30) break;
	}

	printf("누적한 값 : %d\n", sum);
	printf("마지막으로 더한 값 : %d\n", i);

	return 0;
}