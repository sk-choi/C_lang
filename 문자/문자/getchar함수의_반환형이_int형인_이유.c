#include <stdio.h>

int main(void)
{
	unsigned char data = 255; // getchar 함수가 파일로부터 읽은 데이터
	int res; // getchar 함수가 반환할 데이터
	char ch; // 반환값을 저장할 변수
	//int ch;

	res = data; // getchar 함수가 파일로부터 읽은 데이터를 int형 변수에 대입후 반환
	printf("반환된 데이터의 값 : %d\n", res);

	ch = res; // 반환한 값을 char 변수에 대입.

	if (ch == -1)
		printf("반환값 255가 -1과 같다!");
	else
		printf("반환값 255는 -1이 아니다!");

	return 0;
}

// 반환값을 저장할 변수 ch를 char형으로 선언할 경우.
// char형의 크기가 1바이트이기 때문에 그 안에서는 255와 -1의 구분이 사라진다. 255 = 11111111, -1 = 11111111
// 따라서 int형으로 ch를 선언하면 4바이트 크기 내에서 구분이 가능해지므로
// getchar의 반환형이 int인 것이다.