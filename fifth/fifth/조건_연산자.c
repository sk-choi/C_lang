#include <stdio.h>

int main(void)
{
	int a = 10, b = 20, res;

	res = (a > b) ? a : b; // a와 b 중에 큰 값이 res에 저장
	printf("큰 값 : %d\n", res);

	return 0;
}

// 먼저 (a>b)를 수행.
// a는 10이고, b는 20이므로 >연산의 결과는 거짓을 뜻하는 0이 됨.
// 조건 연산자에서 조건식이 거짓이면 세 번째 피연산자 값이 선택됨.
// 결국 res는 b값인 20