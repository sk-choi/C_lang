#include <stdio.h>

int main(void)
{
	printf("Be happy\n"); //\n(new_line): 줄을 바꾼다.
	printf("12345678901234567890\n");

	printf("My\tfrieond\n"); //\t(tab): 출력 위치를 다음 탭 위치로 옮긴다.

	printf("Goot\bd\tchance\n"); //\b(backspace): 출력위치를 한 칸 왼쪽으로 옮긴다.

	printf("Cow\rW\a\n"); //\r(carriage return): 출력위치를 한 칸 왼쪽으로 옮긴다.
						  //\a(alert): bell 소리를 낸다.
}