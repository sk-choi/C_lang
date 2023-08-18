// strncpy �Լ��� ���ڿ��� ������ �� ������ ���� ������ �� ����.
// ���� ��� ���ڿ� "apple pie"�� �տ��� 5���� ���ڸ� char �迭�� �����Ѵٸ�, ������ ���� ���.
// ex. strncpy(str, "apple-pie", 5); <- ���� ������� �迭��, ������ ���ڿ�, ������ ���� ��.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[20] = "mango tree"; // �迭 �ʱ�ȭ

	strncpy(str, "apple-pie", 5); // "apple-pie"���� �ټ� ���ڸ� ����
	//str[5] = '\0'; // -> apple�θ� ���̵��� ��.
	printf("%s\n", str);

	return 0;
}

// ���� ������� Ȯ���� �� �ֵ��� strncpy �Լ��� ������ ���ڿ����� ������ ������ŭ ���ڸ� �����ϰ�
// �� ���ڴ� �������� �ʴ´�.
// ���� str �迭���� mango�� apple�� �ٲ�Ƿ� �ᱹ str �迭�� ����� ���ڿ��� "apple tree"�� �ȴ�.
// ���� str �迭�� ���ڿ� "apple"�θ� ���̵��� �Ϸ��� apple�� ������ �Ŀ� ���� ���ڸ� ������ �����ؾ� ��.
