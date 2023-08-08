#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int res;

	res = (++a, ++b);

	printf("a:%d, b:%d\n", a, b);
	printf("res:%d\n", res);

	return 0;
}

// 콤마 연산자는 대입 연산자보다 우선순위가 늦은 유일한 연산자.
// 따라서 대입 연산자와 함께 사용할 때는 반드시 괄호가 필요하다.
// 따라서 res = ++a, ++b;에서 res = ++a 연산후에 ++b 연산이 수행된다.