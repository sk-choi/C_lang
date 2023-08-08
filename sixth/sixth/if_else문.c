#include <stdio.h>

int main(void)
{
	int a = 10;

	if (a >= 0)
	{
		a = 1;
	}
	else
	{
		a = -1;
	}

	printf("a : %d\n", a);

	return 0;
}

// 두 실행문 중 하나만 실행되며, 반드시 하나는 실행되는 구조를 갖는다.
// 규칙: if~else문의 규칙: else에는 조건을 사용하지 않는다. / 실행할 문장이 두 문장이면 반드시 중괄호로 묶어야 한다. / 
// 경우에 따라 if문을 두 번 사용하는 것보다 if ~ else 문을 한 번 사용하는 것이 좋다.