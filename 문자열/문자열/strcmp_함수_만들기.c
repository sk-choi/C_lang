#include <stdio.h>

int my_strcmp(char* pa, char* pb); // �Լ� ����
// pa�� pb���� ������ ���߿� ������ 1
// pa�� pb���� ������ ���� ������ -1
// pa == pb�̸� 0

int main(void)
{
	char str1[80] = "apple";
	char str2[80] = "air";

	printf("%d\n",my_strcmp(str1, str2));
}

int my_strcmp(char* pa, char* pb)
{
	while ((*pa == *pb) && (*pa != '\0')) //�� ���ڰ� ������ �� ���ڰ� �ƴ� ���(�� ���� �ٸ��� �ݺ��� ���߰� ��)
	{									// �ᱹ ���ǹ��� ���ؼ� ���ڰ� �ٸ� �κк��� �񱳸� �� �� �ְ� ��
		pa++; //���� ���ڷ� �̵�
		pb++; //���� ���ڷ� �̵�
	}

	// �ݺ��� ���� �� ���������� �� ���ڰ� �ٸ��ų� �� �� �� ������
	if (*pa > *pb) return 1;
	else if (*pa < *pb) return -1;
	else return 0;

}