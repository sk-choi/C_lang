#include <stdio.h>

int main(void)
{
	int a = 10;
	double b = 3.4;

	printf("int�� ������ ũ�� : %zd\n", sizeof(a));
	printf("double�� ������ ũ�� : %zd\n", sizeof(b));
	printf("������ ����� ũ�� : %zd\n", sizeof(10));
	printf("������ �ᱣ���� ũ�� : %zd\n", sizeof(1.5 + 3.4));
	printf("char �ڷ����� ũ�� : %zd\n", sizeof(char));

	size_t c = 10;


	printf("c�� ũ�� : %zd", c);

	return 0;
}

//�׳� %d�� ����ϸ� ���� ����� �ǰ� ���������� ��µ� ������ 
//warning message�� ���. ������ size_t��� �ߴµ�
// %d�� �ƴ� %zd�� ����ϸ� ��� ���� ����ϰ� ��µ�.
//ã�ƺ��� ũ�⸦ �ǹ��ϴ� �Ű������� ��ȯ���� size_t�� ����ϹǷ� ũ�⸦ �ǹ��ϴ� ������ size_t�� �����ϴ� ���� ���ٰ� �Ѵ�.
