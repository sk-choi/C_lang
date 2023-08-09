// while, for문은 조건식을 먼저 확인하는 반면
// do~while문은 일단 반복할 문장을 수행한 후에 조건을 검사.

#include <stdio.h>

int main(void)
{
	int a = 1;

	do
	{
		a = a * 2;
	} while (a < 10);
	printf("a : %d\n", a);

	return 0;
}

// do~while문은 조건식과 관계없이 반복할 문장을 최소 한 번은 실행.
// while문은 조건을 만족해야 실행문을 실행하므로 조건식이 거짓이면 실행문을 한번도 실행하지 않고 바로 반복문을 빠져나감.
// 반면에 do~while문은 실행문이 조건식 앞에 있으므로 조건과 관계없이 실행문을 최소한 한 번은 실행.
