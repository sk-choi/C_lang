// strncpy 함수는 문자열을 복사할 때 문자의 수를 지정할 수 있음.
// 예를 들어 문자열 "apple pie"의 앞에서 5개의 문자만 char 배열에 복사한다면, 다음과 같이 사용.
// ex. strncpy(str, "apple-pie", 5); <- 각각 복사받을 배열명, 복사할 문자열, 복사할 문자 수.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20] = "mango tree"; // 배열 초기화

	strncpy(str, "apple-pie", 5); // "apple-pie"에서 다섯 문자만 복사
	//str[5] = '\0'; // -> apple로만 쓰이도록 함.
	printf("%s\n", str);

	return 0;
}

// 실행 결과에서 확인할 수 있듯이 strncpy 함수는 복사할 문자열에서 지정한 개수만큼 문자를 복사하고
// 널 문자는 저장하지 않는다.
// 따라서 str 배열에서 mango만 apple로 바뀌므로 결국 str 배열에 저장된 문자열은 "apple tree"가 된다.
// 만약 str 배열이 문자열 "apple"로만 쓰이도록 하려면 apple을 복사한 후에 따로 문자를 별도로 저장해야 함.
