#include <stdio.h>

char* my_strcat(char* pd, char* ps); // �Լ� ����

int main(void)
{
	char str[80] = "apple";
	my_strcat(str, "pie");

	printf("%s", str);

	return 0;
}

char* my_strcat(char* pd, char* ps)
{
	char* po = pd; // �迭�� ó�� ��ġ ����

	while (*pd != '\0') // pd�� �� ������ ��ġ�� �̵�
	{
		pd++;
	}
	while (*ps != '\0') // ������ʹ� ���ڿ� ����� ����
	{
		*pd = *ps;
		pd++;
		ps++;
	}
	*pd = '\0';
	return po;
}