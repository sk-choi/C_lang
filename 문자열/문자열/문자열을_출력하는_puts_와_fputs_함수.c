// 화면에 문자열만을 출력할 때는 전용 출력 함수인 puts와 fputs함수를 사용

// puts 함수 원형 : int puts(const char *str) // 문자열을 출력하고 자동 줄 바꿈

// fputs 함수 원형 : int fputs(const char *str, FILE *stream) // 문자열을 출력하고 줄 바꾸지 않음

// puts 함수와 fputs 함수 모두 정상 출력된 경우 0을 반환하고,
// 출력에 실패하면 -1(EOF)를 반환한다.

#include <stdio.h>

int main(void)
{
	char str[80] = "apple juice"; // 배열에 문자열 초기화
	char* ps = "banana"; // 포인터에 문자열 연결

	puts(str); // apple juice 출력하고 줄 바꿈
	fputs(ps, stdout); // banana에 이어 milk 출력
	puts("milk"); // banana에 이어 milk 출력

	return 0;
}

// puts와 fputs 함수는 문자열의 시작 위치부터 널 문자가 나올 때까지 모든 문자를 출력
// 따라서 17행과 같이 char 배열의 배열명이나
// 18행과 같이 문자열 상수를 연결하고 있는 포인터를 인수로 줄 수 있음.
// 19행처럼 문자열 상수를 직접 사용하는 것도 가능.

// 어떤 경우든 문자열에서 첫 번째 문자의 주소가 되므로 결국 문자열이 출력됨.
// puts 함수는 fputs 함수와 달리 문자열을 출력한 후에 자동으로 줄을 바꿔주므로 편함.
// 하지만 줄을 바꾸고 싶지 않을 때에는 적당하지 않음.

// 실행결과를 보았을 때, apple juice는 put로 출력해 출력 후 자동으로 줄이 바뀜.
// banana는 fputs로 출력해 banana가 출력된 후에 milk가 바로 이어서 출력됨. (자동 줄바꿈 없음)