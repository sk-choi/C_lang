// �Ű������� ���� �Լ�
// Ű����� ���� �Է��ϸ� ����� ��ȯ�ϴ� �Լ��� ����ٰ� �ϸ�
// ȣ���� �Լ��κ��� ���� ���� �ʿ䰡 �����Ƿ� �Ű������� �ʿ� ����.
// �� �� �Ű������� �ڸ����� void�� ����Ѵ�.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int get_num(void); // �Լ� ���� (�Ű������� ���� ��ȯ���� �ִ�.)

int main(void)  
{
	int result;

	result = get_num(); // �Լ� ȣ��, ��ȯ���� result�� ����
	printf("��ȯ�� : %d\n", result); // ��ȯ�� ���
	return 0;
}

int get_num(void) // �Ű������� ���� ��ȯ���� �ִ�.
{
	int num; // Ű���� �Է°��� ������ ����

	printf("��� �Է� : "); // �Է� �ȳ� �޼���
	scanf("%d", &num); // Ű���� �Է�

	while (num < 0)
	{
		printf("����� �Է��ϼ���!\n");
		printf("��� �Է� : ");
		scanf("%d", &num);
	}

	return num; // �Է��� �� ��ȯ
}