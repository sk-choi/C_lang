#include <stdio.h>

int main(void)
{
	int a = 10, b = 20;
	int res;

	res = (++a, ++b);

	printf("a:%d, b:%d\n", a, b);
	printf("res:%d\n", res);

	return 0;
}

// �޸� �����ڴ� ���� �����ں��� �켱������ ���� ������ ������.
// ���� ���� �����ڿ� �Բ� ����� ���� �ݵ�� ��ȣ�� �ʿ��ϴ�.
// ���� res = ++a, ++b;���� res = ++a �����Ŀ� ++b ������ ����ȴ�.