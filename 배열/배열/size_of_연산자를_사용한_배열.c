#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int score[5]; 
	int i;
	int total = 0;
	double avg;
	int count; // �迭 ����� ������ ������ ����

	count = sizeof(score) / sizeof(score[0]); // �迭 ����� ���� ��� -> �迭 ��ü ũ��(20����Ʈ) / �迭 ��� �ϳ��� ũ��(4����Ʈ) = 5

	// �̷��� ���� �迭 ����� ������ �� �ݺ����� �ݺ� Ƚ���� ����ϸ�,
	// ���߿� �迭 ���𹮿��� ����� ������ �ٲٴ��� ������ �ڵ带 ������ �ʿ䰡 ����.
    // �ݺ��� �Ӹ� �ƴ϶� �迭 ����� ������ �ʿ��� ��� ���� count�� �����.

	for (i = 0; i < count; i++) // 11�࿡�� ����� count��ŭ �ݺ�
	{
		scanf("%d", &score[i]);
	}

	for (i = 0; i < count; i++) // 11�࿡�� ����� count��ŭ �ݺ�
	{
		total += score[i];
	}
	avg = total / (double)count; // ������ count�� ������ ��� ���, total�� count�� ��� int���̹Ƿ� ����� �Ҽ��� �Ʒ����� ���ҷ��� �� ��ȯ �����ڷ�
								// (double)�� ����� �Ǽ� ������ �ǵ��� ��.

	for (i = 0; i < count; i++) // 11�࿡�� ����� count��ŭ �ݺ�
	{
		printf("%5d", score[i]);
	}
	printf("\n");

	printf("��� : %.1lf\n", avg);

	return 0;
}