// scanf �Լ��� ��ȯ���� ���ϴ� ������ -1 ��� EOF�� �� �� �ִ�.
// stdio.h ��� ���Ͽ��� �ҽ� �ڵ忡 �ִ� EOF��� �̸��� -1�� �ٲٴ� ��ó�� �����ڰ� �ִ�.
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int res; // scanf �Լ��� ��ȯ���� ������ ����
	char ch; // ���ڸ� �Է��� ����

	while (1)
	{
		res = scanf("%c", &ch); //scanf �Լ��� ��ȯ���� res�� ����
		if (res == EOF) break; // EOF�� -1�� �ٲ�Ƿ� �ᱹ res�� -1�� ���Ѵ�.
		printf("%c", ch);
	}

	return 0;
}

// EOF�� End of File�̶�� ���̹Ƿ� -1 ��ſ� �Է��� ���� �ǹ��ϴ� �̸����� EOF�� ����ϸ� �� �� �б� ���� �ڵ带 �ۼ��� �� �ִ�.