// char 배열은 문자열을 저장하는 변수의 역할을 하며, 이를 문자열로 쉽게 초기화할 수 있다.
// 문자열을 바꾸려면 문자열을 하나씩 옮기는 번거로운 일을 수행해야 한다.
// 하나씩 대입하는 방법 외에 문자열을 한 번에 대입하는 방법도 존재.
// 바로 strcpy 함수를 이용.
// strcpy(str1, str2) -> str1: 복사 받을 곳, str2: 복사할 내용

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h> // strcpy를 사용하기 위해 include

int main(void)
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char *ps1 = "banana";
	char *ps2 = str2;
	
	printf("최초 문자열 : %s\n", str1);
	strcpy(str1, str2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps1);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, ps2);
	printf("바뀐 문자열 : %s\n", str1);

	strcpy(str1, "banana"); // 문자열 상수 사용
	printf("바뀐 문자열 : %s\n", str1);

	return 0;
}

// strcpy 함수는 복사받을 곳의 배열명을 첫번째 인수로 주고 복사할 문자열을 두 번째 인수로 준다.
// 문자열을 복사하는 방식은 문자열의 첫 번째 문자부터 널 문자가 나올 때까지 문자를 하나씩 배열에 옮겨 저장
// strcpy의 첫 번째 인수는 char 배열이나 그 배열명을 저장한 포인터만 가능.
// 문자열 상수는 값을 바꿀 수 없으므로 첫 번째 인수로 사용하면 프로그램을 실행할 때 에러가 발생.

// 중요1. 첫 번째 인수로는 char 배열이나 배열명을 저장한 포인터만 사용할 수 있음.
// 중요2. 두 번째 인수로는 문자열의 시작 위치를 알 수 있다면 어떤 것이든 사용할 수 있음.

