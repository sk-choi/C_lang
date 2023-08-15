// scanf 함수의 반환값과 비교하는 값으로 -1 대신 EOF를 쓸 수 있다.
// stdio.h 헤더 파일에는 소스 코드에 있는 EOF라는 이름을 -1로 바꾸는 전처리 지시자가 있다.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int res; // scanf 함수의 반환값을 저장할 변수
	char ch; // 문자를 입력할 변수

	while (1)
	{
		res = scanf("%c", &ch); //scanf 함수의 반환값을 res에 저장
		if (res == EOF) break; // EOF는 -1로 바뀌므로 결국 res와 -1을 비교한다.
		printf("%c", ch);
	}

	return 0;
}

// EOF는 End of File이라는 뜻이므로 -1 대신에 입력의 끝을 의미하는 이름으로 EOF를 사용하면 좀 더 읽기 쉬운 코드를 작성할 수 있다.