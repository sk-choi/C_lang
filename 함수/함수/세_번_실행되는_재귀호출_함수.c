#include <stdio.h>

void fruit(int count);

int main(void)
{
	fruit(1); // 처음 호출하므로 1을 인수로 준다.

	return 0;
}

void fruit(int count) // 호출 회수를 매개변수에 저장
{
	printf("apple\n");
	if (count == 3) return; // 호출 횟수가 3이면 반환하고 끝낸다.
	fruit(count + 1); // 재호출할 때 호출 횟수를 1 증가
}

// fruit 함수를 첫 번째로 호출하면서 인수로 1을 준다.
// 재귀호출 전에 호출 횟수를 검사해 세 번째면 곧바로 반한되도록 if문을 넣는다.
// 결국 if문의 조건이 참이게 되면 함수가 바로 반환되므로 재귀호출이 중단되고 
// 조건이 거짓이게 되면 16행으로 넘어가 호출 횟수를 1증가 시킨 다음 재호출한다.