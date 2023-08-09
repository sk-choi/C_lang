#include <stdio.h>

int main(void)
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0; 
}

//중첩 반복문 사용시 주의점
//for (i = 0; i < 3; i++) // <-1번 for문 
//{
//	for (i = 0; i < 5; i++) // 2번 for문
//	{
//		printf("*");
//	}
//	printf("\n");
//}
// 이 코드에서는 별이 다섯 번만 출력이 된다.
// 1번 for문과 2번 for문의 제어변수가 같으므로
// 2번 for문의 반복이 끝났을 때는 i가 5가 됨.
// 이후에 다시 바깥쪽 1번 for문의 증감식으로 올라가 i값이 6으로 증가하게 됨
// 그래서 조건 검사를 하면 거짓이 되므로 반복을 끝내게 된다.


