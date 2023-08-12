// �迭�� ���� �Է��ϴ� �Լ��� �迭�� ���� ����ϴ� �Լ��� ��������� ����.
// �ٸ�, �Է� �Լ��� �����͸� ������ �迭�� ��ġ�� �ʿ��ϹǷ� �Լ� �ȿ��� �����͸� ���� ����Ѵ�.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);
void ouput_ary(double* pa, int size); //�迭 ����ϴ� �Լ� ������

int main(void)
{
	double ary[5];
	double max; // �ִ��� ������ ����
	int size = sizeof(ary) / sizeof(ary[0]); // �迭 ����� ���� ���
	
	input_ary(ary, size); // �迭�� �� �Է�
	max = find_max(ary, size); // �迭�� �ִ� ��ȯ
	printf("�迭�� �ִ� : %.1f\n", max);

	ouput_ary(ary, size);

	return 0;
}

void input_ary(double* pa, int size) // double �����͸� �Ű������� ����
{
	int i;

	printf("%d���� �Ǽ��� �Է� : ", size);
	for (i = 0; i < size; i++) // size�� ���� ���� �ݺ� Ƚ�� ����
	{
		scanf("%lf", pa + i); // &pa[i]�� ����, �Է��� �迭 ����� �ּҸ� ����
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;

	max = pa[0]; // ù ��° �迭 ����� ���� �ִ����� ����
	for (i = 1; i < size; i++) // �� ��° �迭 ��Һ��� max�� ��
	{
		if (pa[i] > max) max = pa[i]; // ���ο� �迭 ����� ���� max���� ũ�� ����
	}

	return max; // �ִ� ��ȯ
}

void ouput_ary(double* pa, int size) // �迭 ����ϴ� �Լ� ������
{
	int i;
	
	for (i = 0; i < size; i++)
	{
		printf("%.1lf  ", * (pa + i)); // �迭�� ���� ����ؾ� �ϴ� �ش� �ּ��� ���� ����ϴ� *(pa + i)�� ���� ���� �´�. pa[i]�� ����!
	}
}


