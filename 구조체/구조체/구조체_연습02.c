#include <stdio.h>
//#include <string.h>

char my_strcpy(char* st1, char* str2);

struct Human {
    int age; //����
    int height; //Ű
    int weight; //������
    char name[10]; //�̸�
    int add(int& a, int& b) //c������ ����ü���� �Լ��� ������ �� ����.
    {
        int c = *a + *b;

        return c;
    }
};

int main() {
    struct Human Psi;

    Psi.age = 99;
    Psi.height = 185;
    Psi.weight = 80;
    my_strcpy(Psi.name, "Psi");
    Psi.add(1, 2);

    printf("Psi�� ���� ���� \n");
    printf("���� : %d\n", Psi.age);
    printf("Ű   : %d\n", Psi.height);
    printf("������: %d\n", Psi.weight);
    printf("�̸�  : %s\n", Psi.name);
    printf("���ϱ�: %d\n", Psi.add());

    return 0;
}

char my_strcpy(char* str1, char* str2)
{
    char str_p = *str1;
    while (*str2 != '\0')
    {
        *str1 = *str2;
        *str1++;
        *str2++;
    }
    *str1 = '\0';
    return str_p;
}

