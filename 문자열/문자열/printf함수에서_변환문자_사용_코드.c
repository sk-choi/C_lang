#include <stdio.h>


int main(void)
{
	char* dessert = "apple";
	printf("���� �Ľ��� %s�Դϴ�.\n", dessert);

	//printf�Լ��� %s ��ȯ ���ڴ� ������ �������� ���ڿ��� ���.
	//��, printf �Լ����� %s ��ȯ ���ڸ� ����ϸ� ��������� �Լ� �ȿ��� ���� �ڵ�� ���� ���� ����.

	while (*dessert != '\0')
	{
		putchar(*dessert);
		dessert++;
	}
}