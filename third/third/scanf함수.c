//scanf함수는 키보드에서 입력한 값을 변수에 저장할 때 사용.
//변수의 형태에 맞는 변환 문자를 사용하고 입력할 변수 앞에 &를 붙이면 됨.
// ex. scanf("%d", &a);

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int a;

	scanf("%d", &a);
	printf("입력된 값 : %d\n", a);

	return 0;
}

// scanf함수에서 변수명을 지정할 때는 &를 붙여야 한다.
// scanf함수에서 사용한 변환 문자와 맞는 형태의 데이터를 입력해야 한다.
