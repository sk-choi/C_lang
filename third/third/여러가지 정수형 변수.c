#include <stdio.h>

int main(void)
{
	short sh = 3267;
	int in = 2147483647;
	long ln = 2147483647;
	long long lln = 123451234512345;

	printf("short�� ���� ��� : %d\n", sh);
	printf("int�� ���� ��� : %d\n", in);
	printf("long int�� ���� ��� : %ld\n", ln); //long int�� ld�� ���
	printf("long long int�� ���� ��� : %lld\n", lln); //long long int�� lld�� ���

	printf("long long���� ũ�� : %lld����Ʈ\n", sizeof(long long)); //sizeof()�� ����ؼ� long long���� ũ�� ���

	return 0;
}

// Ư���� ��찡 �ƴϸ� �������� int�� ���
// long���� ū ���� ������ �� ���

// char <= short <= int <= long <= long long

