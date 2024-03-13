#include <stdio.h>
//#include <string.h>

char my_strcpy(char* st1, char* str2);

struct Human {
    int age; //나이
    int height; //키
    int weight; //몸무게
    char name[10]; //이름
    int add(int& a, int& b) //c언어에서는 구조체에서 함수를 선언할 수 없다.
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

    printf("Psi에 대한 정보 \n");
    printf("나이 : %d\n", Psi.age);
    printf("키   : %d\n", Psi.height);
    printf("몸무게: %d\n", Psi.weight);
    printf("이름  : %s\n", Psi.name);
    printf("더하기: %d\n", Psi.add());

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

