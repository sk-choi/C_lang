#include <stdio.h>

void print_line(void); // �Լ� ����

int main(void)
{
	print_line(); // �Լ� ȣ��
	printf("�й�        �̸�        ����        ����\n");
	print_line(); // �Լ� ȣ��

	return 0;
}

void print_line(void)
{
	int i;
	for (i = 0; i < 50; i++)
	{
		printf("-");
	}
	printf("\n");
}

// print_line()�Լ� ���ǿ� return�� ����.
// �� �Լ��� ȣ���� �� ���� �ο����� ������, ȣ���� ������ �Ϻΰ� �ƴ� ������ �������� ���δ�.
// print_line �Լ��� �Ű������� ���� �Լ��� ��ȯ���� ���� �Լ��� Ư¡�� ��� �����ϴ� �Լ��̴�.