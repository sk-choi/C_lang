#include<stdio.h>

int main(void)
{
	double apple; //�Ǽ���
	int banana; //����
	int orange; //����

	apple = 5.0 / 2.0;
	banana = 5 / 2;
	orange = 5 % 2;

	printf("apple : %.1lf\n", apple);
	printf("banana : %d\n", banana);
	printf("orange : %d\n", orange);

	return 0;
}

// ������ ������ �ᱣ���� ���� �Ǵ� �Ǽ��� �� �� �����Ƿ� �� ���� �����ϴ� ������ �׿� �°� ����ؾ� �Ѵ�.
// ���� 9���� ���� ����� �Ǽ��̹Ƿ� double�� ������,  10���� ���� ����� �����̹Ƿ� int�� ������ ������.
// ����/�Ǽ��� ���� �ǿ������� ���°� �ٸ��ų� �Ǽ��� ������ ������ �����ϸ� ���� ����������.