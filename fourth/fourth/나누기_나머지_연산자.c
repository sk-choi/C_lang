#include<stdio.h>

int main(void)
{
	double apple; //실수형
	int banana; //정수
	int orange; //정수

	apple = 5.0 / 2.0;
	banana = 5 / 2;
	orange = 5 % 2;

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	return 0;
}

// 나눗셈 연산은 결괏값이 정수 또는 실수가 될 수 있으므로 그 값을 저장하는 변수도 그에 맞게 사용해야 한다.
// 따라서 9행의 연산 결과는 실수이므로 double형 변수에,  10행의 연산 결과는 정수이므로 int형 변수에 저장함.
// 정수/실수와 같이 피연산자의 형태가 다르거나 실수를 정수형 변수에 저장하면 얘기는 복잡해진다.