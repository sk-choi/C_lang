#include <stdio.h>

int main(void)
{
	int a = 10, b = 15, total; //���� ����� �ʱ�ȭ
	double avg; //����� ������ ����
	int* pa, * pb; //������ ���� ���� (�����ʹ� �ּҸ� �����ϴ� ������� ��������!)
	int* pt = &total; //������ ����� �ʱ�ȭ
	double* pg = &avg; //double�� ������ ����� �ʱ�ȭ

	pa = &a; // ������ pa�� ����a�� �ּ� ����
	pb = &b; // ������ pb�� ����b�� �ּ� ����

	*pt = *pa + *pb; //a�� b���� ���� total�� ����. (*pt = total, *pa = a, *pb = b) 

	//�׳� pt, pa, pb�� �ϸ� �ּҰ� ���

	*pg = *pt / 2.0; //������ pb�� ���� b�� �ּ� ����.

	//printf("�ּ� : %p, %p, %p\n", pt, pa, pb);
	printf("�� ������ �� : %d, %d\n", *pa, *pb); //a ���� b�� ��� 
	printf("�� ������ �� : %d\n", *pt); // total�� ���
	printf("�� ������ ��� : %.1lf\n", *pg); // avg�� ���

	return 0;

}