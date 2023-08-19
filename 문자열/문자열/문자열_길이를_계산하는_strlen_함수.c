// 문자열을 저장하는 char 배열은 다양한 길이의 문자열을 저장할 수 있도록
// 충분히 크게 선언해서 사용.
// 따라서 배열에 저장된 문자열의 길이는 배열의 크기와 다를 수 있음.
// 만약 배열에 저장된 문자열의 실제 길이를 알고 싶다면 strlen 함수를 사용.
// ex. strlen(str)

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80], str2[80]; // 두 문자열을 입력할 배열
	char* resp; // 문자열이 긴 배열을 선택할 포인터

	printf("2개의 과일 이름 입력 : ");
	scanf("%s%s", str1, str2); // 2개의 문자열 입력
	if (strlen(str1) > strlen(str2)) // 배열에 입력된 문자열의 길이 비교
		resp = str1; // 첫 번째 배열이 긴 경우 선택
	else
		resp = str2; // 두 번째 배열이 긴 경우 선택
	printf("이름이 긴 과일은 : %s\n", resp); // 선택된 배열의 문자열 출력
	
	return 0;
}

// strlen 함수는 배열에 저장된 문자열에서 널 문자가 나올 때까지 문자 수를 세어 반환.
// 따라서 배열의 큭와는 상관 없이 실제 저장된 문자열의 길이를 확인할 수 있음.

// sizeof 연산자와 strlen 함수를 혼동할 수 있는데,
// sizeof 연산자는 배열에 저장된 문자열 길이와는 상관 없이 배열 전체 크기를 계산.
// ex. char str[80] = "apple";에서 sizeof(str)를 사용하면 80이 출력. strlen(str)은 5를 출력.