#include <stdio.h>

int my_strlen(char *ps); // �Լ� ����

int main(void)
{
	char str[80] = "apple";
	printf("%d\n", my_strlen(str));

}

int my_strlen(char* ps)
{
	int count = 0;
	while (*ps != '\0') //ps�� *ps�� �ٸ���...! ps�� �ּҰ�, *ps�� �� �ּҰ��� �Ҵ�� ��.
	{
		ps++;
		count++;
	}

	return count;
}