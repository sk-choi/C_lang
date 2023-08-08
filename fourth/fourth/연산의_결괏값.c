#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	a + b;
	printf("%d + %d = %d\n", a, b, a+b); //연산 결과를 따로 저장하지 않음.

	res = a + b;
	printf("%d + %d = %d\n", a, b, res);

	return 0;

}

// 연산의 결과를 어떻게 처리하느냐는 전적으로 프로그래머의 선택.
// 연산의 결과를 DB에 저장하거나 네트워크로 전송할 수 있기 때문에 연산의 결과는 알맞게 사용하면 된다.
