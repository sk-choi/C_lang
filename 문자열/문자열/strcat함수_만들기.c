#include <stdio.h>

char* my_strcat(char* pd, char* ps); // 함수 선언

int main(void)
{
	char str[80] = "apple";
	my_strcat(str, "pie");

	printf("%s", str);

	return 0;
}

char* my_strcat(char* pd, char* ps)
{
	char* po = pd; // 배열의 처음 위치 보관

	while (*pd != '\0') // pd를 널 문자의 위치로 이동
	{
		pd++;
	}
	while (*ps != '\0') // 여기부터는 문자열 복사와 같음
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';
	return po;
}