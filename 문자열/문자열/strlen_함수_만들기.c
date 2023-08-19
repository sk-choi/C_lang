#include <stdio.h>

int my_strlen(char *ps); // 함수 선언

int main(void)
{
	char str[80] = "apple";
	printf("%d\n", my_strlen(str));

}

int my_strlen(char* ps)
{
	int count = 0;
	while (*ps != '\0') //ps와 *ps는 다르다...! ps는 주소값, *ps는 그 주소값에 할당된 값.
	{
		ps++;
		count++;
	}

	return count;
}