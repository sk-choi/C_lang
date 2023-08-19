#include <stdio.h>

int my_strcmp(char* pa, char* pb); // 함수 선언
// pa가 pb보다 사전에 나중에 나오면 1
// pa가 pb보다 사전에 먼저 나오면 -1
// pa == pb이면 0

int main(void)
{
	char str1[80] = "apple";
	char str2[80] = "air";

	printf("%d\n",my_strcmp(str1, str2));
}

int my_strcmp(char* pa, char* pb)
{
	while ((*pa == *pb) && (*pa != '\0')) //두 문자가 같으나 널 문자가 아닌 경우(두 문자 다르면 반복문 멈추게 됨)
	{									// 결국 조건문을 통해서 문자가 다른 부분부터 비교를 할 수 있게 됨
		pa++; //다음 문자로 이동
		pb++; //다음 문자로 이동
	}

	// 반복문 이후 이 시점에서는 두 문자가 다르거나 둘 다 널 문자임
	if (*pa > *pb) return 1;
	else if (*pa < *pb) return -1;
	else return 0;

}