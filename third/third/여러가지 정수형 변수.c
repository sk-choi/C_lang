#include <stdio.h>

int main(void)
{
	short sh = 3267;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short형 변수 출력 : %d\n", sh);
	printf("int형 변수 출력 : %d\n", in);
	printf("long int형 변수 출력 : %ld\n", ln); //long int는 ld로 출력
	printf("long long int형 변수 출력 : %lld\n", lln); //long long int는 lld로 출력

	printf("long long형의 크기 : %lld바이트\n", sizeof(long long)); //sizeof()를 사용해서 long long형의 크기 출력

	return 0;
}

// 특별한 경우가 아니면 정수형은 int를 사용
// long형은 큰 값을 저장할 때 사용

// char <= short <= int <= long <= long long

