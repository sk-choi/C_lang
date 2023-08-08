#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.4;

	printf("int형 변수의 크기 : %zd\n", sizeof(a));
	printf("double형 변수의 크기 : %zd\n", sizeof(b));
	printf("정수형 상수의 크기 : %zd\n", sizeof(10));
	printf("수식의 결괏값의 크기 : %zd\n", sizeof(1.5 + 3.4));
	printf("char 자료형의 크기 : %zd\n", sizeof(char));

	size_t c = 10;


	printf("c의 크기 : %zd", c);

	return 0;
}

//그냥 %d로 출력하면 뭔가 빌드는 되고 정상적으로 출력도 되지만 
//warning message가 뜬다. 형식이 size_t라고 뜨는데
// %d가 아닌 %zd로 사용하면 경고 없이 깔끔하게 출력됨.
//찾아보니 크기를 의미하는 매개변수나 반환값은 size_t를 사용하므로 크기를 의미하는 변수는 size_t로 선언하는 것이 좋다고 한다.
