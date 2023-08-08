#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, c = 10;
	int res; //결과값을 저장할 변수

	res = (a > b); //a>b는 거짓이므로 결과값은 0

	printf("a > b : %d\n", res);
	res = (a >= b);
	printf("a >= b : %d\n", res);
	res = (a < b);
	printf("a < b : %d\n", res);
	res = (a <= b);
	printf("a <= b : %d\n", res);
	res = (a <= c);
	printf("a <= c : %d\n", res);
	res = (a == b);
	printf("a == b : %d\n", res);
	res = (a != c);
	printf("a != c : %d\n", res);

	return 0;
}