# define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("학점 입력 : ");
	scanf("%c", &grade);
	printf("이름 입력 : ");
	scanf("%s", name);
	printf("%s의 학점은 %c입니다.\n", name, grade);

	return 0;
}

// 문자열을 char 배열에 %s 변환 문자를 사용해 입력하는데.
// 문자열을 입력할 때는 배열명에 &를 붙이지 않는다.
// 또한 스페이스나 엔터, 탭 등을 만나면 바로 전까지만 저장되므로 공백 없이 입력해야 함.

// 문자열의 크기를 20바이트로 정의했으므로 최대 19자리의 문자열을 입력할 수 있음.
// 문자열에선 문자열의 끝을 표시하기 위해 널 문자를 사용. (scanf함수가 자동으로 붙여줌)
// 한글은 한 자당 2바이트를 차지하므로 9자까지 입력가능.