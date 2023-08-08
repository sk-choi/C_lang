// 10진법: 0~9까지의 수로 수를 표기
// 8진법: 0~7까지의 수로 수를 표기
//16진법: 0~15까지의 수로 수를 표기(0~9,A,B,C,D,E,F로 표기)

//C언어에서는 10진수 12를 8진수 014, 16진수 0xc로 표기함.

#include <stdio.h>

int main(void)
{
	printf("%d\n", 12);
	printf("%d\n", 014);
	printf("%d\n", 0xc);

	printf("%o\n", 12);
	printf("%x\n", 12);
	printf("%X\n", 12);

	return 0;
}