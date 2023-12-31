// 컴파일러는 같은 문자열을 여러 번 사용할 경우
// 하나의 문자열만 메모리에 저장하고
// 그 주소를 공유하도록 번역
// 따라서 같은 문자열을 계속 사용해도 프로그램의 크기가 커지는 일은 없다.

#include <stdio.h>

int main(void)
{
	char* pa = "apple";
	char* pb = "apple";
	printf("%p, %p", pa, pb);
}

// 단, 컴파일러가 불필요한 메모리 사용을 줄이기 위해 지원하는 최적화 기능이므로
// 컴파일러에 따라 다르게 구현될 수 있음. 