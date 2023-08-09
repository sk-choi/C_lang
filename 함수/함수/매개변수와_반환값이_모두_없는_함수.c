#include <stdio.h>

void print_line(void); // 함수 선언

int main(void)
{
	print_line(); // 함수 호출
	printf("학번        이름        전공        학점\n");
	print_line(); // 함수 호출

	return 0;
}

void print_line(void)
{
	int i;
	for (i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}

// print_line()함수 정의에 return이 없다.
// 또 함수를 호출할 때 값을 부여하지 않으며, 호출은 수식의 일부가 아닌 독립된 문장으로 쓰인다.
// print_line 함수는 매개변수가 없는 함수와 반환형이 없는 함수의 특징을 모두 포함하는 함수이다.