#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <string.h> //문자열 관련 함수 원형을 모아 놓은 헤더파일

int main(void)
{
	char str1[80] = "cat";
	char str2[80];

	strcpy(str1, "tiger"); // str1 배열에 "tiger"복사
	strcpy(str2, str1); // str2 배열에 str1 배열의 문자열 복사
	printf("%s, %s\n", str1, str2);

	return 0;
}

// strcpy 함수는 char형 배열에 새로운 문자열을 저장하는 함수로, 저장할 문자열의 길이를 파악해 딱 그 길이만큼만 char형 배열에 문자열을 복사.
// 물론 문자열 끝에 널 문자도 자동으로 붙여 준다.

// string.h는 문자열을 다루는 함수들의 원형을 모아 놓은 것으로 strcpy 함수에 접근하기 위해 사용된다.
// strcpy 함수의 기본 사용법은 다음과 같다.
// strcpy(저장될 배열명, 저장할 문자열) ex. strcpy(str1, "tiger"); (o), strcpy("lion", "tiger"); (x)

//char형 배열에 저장된 문자열을 다른 char형 배열에 대입하기.
//
//ex. strcpy(str2, str1);

//int main(void)
//{
//	char str[80];
//	str = "apple";
//
//	printf("%s", str);
//}

// 이 코드는 실행이 되지 않는데,
// 대입 연산자 왼쪽에 사용한 배열명이 컴파일 과정에서 배열이 할당된 메모리의 주소 값으로 바뀌기 때문. 
// ex.메모리 주소가 100이라면 100 = "apple"인 꼴.

// 100은 상수라서 대입연산자의 왼쪽에 올 수 없기에 컴파일 과정에서 에러가 발생.

// 다만 strcpy함수에서 사용할 수 있는 것은 strcpy 함수가 그 위치로 이동해 메모리의 공간을 사용하도록 구현되어 있기 때문.
// 이 문제를 정확히 이해하기 위해서는 배열과 포인터의 관계를 알아야 한다.
// 여기서는 대입 연산자의 왼쪽에 배열명이 올 수 없다는 사실만 기억하자.

