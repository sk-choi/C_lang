// ���� �Ҵ��� ���� ������ �Լ��� ó���� ���� �Ҵ��� ������ ������ �� ����� �Ѵ�.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_str(char** ps); // ���� �Ҵ� ������ ���ڿ��� ����ϴ� �Լ�

int main(void)
{
	char temp[80]; // �ӽ� char �迭
	char* str[21] = { 0 }; // ���ڿ��� ������ ������ �迭, �� �����ͷ� �ʱ�ȭ, ���� ���� ���ڿ� ��� �迭
	int i = 0; // �ݺ� ���� ����

	while (i < 20)
	{
		printf("���ڿ��� �Է��ϼ��� : ");
		gets(temp); //���ڿ� �Է�
		if (strcmp(temp, "end") == 0) break; // end�� �ԷµǸ� �ݺ� ����
		str[i] = (char*)malloc(strlen(temp) + 1); // ���ڿ� ���� ���� �Ҵ�
		strcpy(str[i], temp); // ���� �Ҵ� ������ ���ڿ� ����
		i++;
	}
	print_str(str); // �Է��� ���ڿ� ���

	for (i = 0; str[i] != NULL; i++) // str�� ����� ���ڿ��� ���� ������
	{
		free(str[i]); // ���� �޸� �Ҵ� ��ȯ
	}

	return 0;
}

void print_str(char** ps) // ���� ������ ����
{
	while (*ps != NULL) // ������ �迭�� ���� �� �����Ͱ� �ƴ� ���ȸ� �ݺ�
	{
		printf("%s\n", *ps); // ps�� ����Ű�� ���� ������ �迭�� ���
		ps++; // ps�� ���� �迭�� ��Ҹ� ����Ų��.
	}
}