#include <stdio.h>


int main(void)
{
	char* dessert = "apple";
	printf("오늘 후식은 %s입니다.\n", dessert);

	//printf함수의 %s 변환 문자는 포인터 연산으로 문자열을 출력.
	//즉, printf 함수에서 %s 변환 문자를 사용하면 결과적으로 함수 안에서 다음 코드와 같은 일을 수행.

	while (*dessert != '\0')
	{
		putchar(*dessert);
		dessert++;
	}
}