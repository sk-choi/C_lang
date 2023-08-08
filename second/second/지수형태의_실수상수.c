#include <stdio.h>

//정규화(nomalization) 표기법: 소수점을 0이 아닌 유효 숫자 한자리를 사용하여 지수형태로 바꾼것.

int main(void)
{
	printf("%.1lf\n", 1e6); //지수형태의 실수를 소수점 형태로 출력
	printf("%.7lf\n", 3.14e-5); //소수점 이하 7자리까지 출력
	printf("%le\n", 0.0000314); //소수점 형태의 실수를 지수형태로 출력
	printf("%.2le\n", 0.0000314); //지수 형태로 소수점 이하 둘째 자리까지 출력

	return 0;


}