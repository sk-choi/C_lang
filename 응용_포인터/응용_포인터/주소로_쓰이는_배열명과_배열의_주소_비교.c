#include <stdio.h>

int main(void)
{
	int ary[5];

	printf("	ary의 값 : %u\t", ary);
	printf("  ary의 주소 : %u\n", &ary);
	printf("	ary + 1  : %u\t", ary + 1);
	printf("	&ary + 1 : %u\n", &ary + 1);

	return 0;
}

// ary가 주소로 쓰일 때와 ary에 주소 연산자를 사용한 &ary의 값은 모두 배열의 시작 위치이다.
// 그러나 가리키는 대상이 다르므로 두 주소에 1을 더한 결과는 다르다.
// ary 자체가 주소로 쓰일 때는 첫 번째 요소를 가리키므로 가리키는 대상의 크기는 4가 된다.
// 반면에 배열의 주소 &ary는 배열 전체를 가리키므로 가리키는 대상의 크기는 20이 된다.