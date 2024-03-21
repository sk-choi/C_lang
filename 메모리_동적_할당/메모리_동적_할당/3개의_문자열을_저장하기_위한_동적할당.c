// 정수 하나를 저장하기 위해 동적할당을 사용하는 것은 비효율적.
// 사전의 단어를 저장한다고 했을 때
// 문자열 배열을 통해 단어를 저장한다면 안전한 방법으로 가장 큰 크기의 문자열 배열을 선언하여
// 단어를 저장할 것이고 
// 이것은 비효율적인 공간 활용이 될 것이다.
// 따라서 단어의 길이만큼 메모리를 할당하는 것이 가장 효율적인 방안일 것이다.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
	char temp[80]; // 임시 char 배열 선언
	char* str[3]; // 동적 할당 영역을 연결할 포인터 문자열 배열 선언
	int i; // 반복 제어 변수

	for (i = 0; i < 3; i++)
	{
		printf("문자열을 입력하세요 : ");
		gets(temp); // 문자열 입력
		str[i] = (char*)malloc(strlen(temp) + 1); // 문자열 저장 공간 할당, (입력한 문자의 길이 + 널 문자) 만큼 공간 할당
		strcpy(str[i], temp); // 동적 할당 영역에 문자열 복사
		// printf("%d\n", strlen(temp)); 
	}

	for (i = 0; i < 3; i++)
	{
		printf("%s\n", str[i]); // 입력된 문자열 출력
	}

	for (i = 0; i < 3; i++)
	{
		free(str[i]); // 동적 할당 영역 반환
	}

	return 0;
}