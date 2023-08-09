// ���� ���� ��� �� ���ǿ� �ش��ϴ� �ϳ��� ��� �����ϴ� ���� switch~case���̴�.
// switch~case���� �� ���� 2���� ��Ģ�� �� ���Ѿ� �Ѵ�.

//��Ģ1. ���ǽ����� �����ĸ� ����ؾ� ��.
//��Ģ2. �⺻������ case�� break���� ����(break�� �ش� ����� Ż���ϴµ� ���. ���⼱ switch���� �������� �� ���)

#include <stdio.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}
	printf("m : %d\n", m);

	return 0;
}

// case�� default�� �ǳʶ� ��ġ�� ǥ���ϴ� ���̺�(label)�� ������ ��.

// break�� �ʿ信 ���� ������ �� �ִ�.  