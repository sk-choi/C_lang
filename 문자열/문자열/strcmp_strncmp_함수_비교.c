// 문자열을 비교할 때는 strcmp와 strncmp 함수를 사용한다.
// strcmp 함수는 두 문자열의 사전 순서를 판단해 그 결과를 반환.
// ex. strcmp(str1, str2);
// str1이 str2 보다 사전에 나중에 나오면 1 반환
// str1이 str2 보다 사전에 먼저 나오면 -1 반환
// str1과 str2가 같은 문자열이면 0 반환

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름 : ");

	if (strcmp(str1, str2) > 0) // str1이 str2보다 크면(사전에 나중에 나오면(사전 순서)) 
	{
		printf("%s\n", str1); // str1 출력
		//printf("같다.\n");
	}
	else // str1이 str2보다 크지 않으면 
	{
		printf("%s\n", str2); // str2 출력
		//printf("다르다.\n");
	}

	return 0;
}

// strcmp 함수는 두 문자열에서 우선 첫 문자의 아스키 코드 값을 비교.
// 아스키 코드 값은 알파벳 순서에 따라 커지므로 아스키 코드 값이 크면 사전의 뒤에 나오는 문자열이 됨.
// 첫 문자가 같으면 다음 문자의 아스키 코드 값을 차례로 비교.

// 사전 순서를 판단한 결과는 반환값으로 알려준다.

// strncmp 함수는 비교할 문자 수를 세 번째 인수로 지정할 수 있음 ex. strncmp(str1, str2, 3)
// 근데 strcmp 함수도 된다?

// strcmp 함수를 사용하기 위해선 단어의 대소문자 여부를 일치 시켜야 한다.


