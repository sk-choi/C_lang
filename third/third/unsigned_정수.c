// unsigned 정수 자료형
// 정수형은 보통 양수와 음수 모두를 저장하지만, 양수만을 저장하면 두 배 넓은 범위의 값을 저장할 수 있다.
// 나이와 같이 음수가 없는 데이터를 저장할 때, unsigned를 사용하면 효율적.
// unsigned가 없으면 자동으로 signed로 선언된다.
// unsigned 자료형을 사용할 때는 출력 시 변환 문자 사용에 주의해야 한다. 
// d를 사용할 경우 음수가 출력될 가능성이 존재하며, 음수를 저장하고 %u로 출력하면 양수가 출력됩니다.

#include<stdio.h>

int main(void)
{
	unsigned int a;

	a = 4294967295;
	printf("%d\n", a); // 1. a를 unsigned int형으로 선언했는데 출력 문자를  %u가 아닌 %d로 사용
	a = -1;
	printf("%u\n", a); // 2. a를 음수로 선언했는데 출력문자를 %d가 아닌 %u로 사용

	return 0;
}

// 실행결과를 보면 입력값과 정반대로 출력된 것을 알 수 있는데, %d는 부호까지 생각해 십진수로 출력하는 변환문자.
// %u는 부호 없는 10진수로 출력하는 변환문자.
// 음수의 변환을 생각해본다면 컴퓨터가 연산하는 2진법에서는 음수를 2의 보수로 처리한다.
// 즉 -1이 메모리에 저장된 형태와 4294967295가 저장된 형태가 "11111111 11111111 11111111 11111111" 로 같다.
// 근데 이제 이렇게 저장된 형태가 같은 상황에서 %d는 부호를 고려해서 출력을 하므로(맨앞의 부호비트가 1이므로 음수라 판단해서) 1의 경우엔 -1이 출력됨.
// 반대로 2의 경우엔 부호를 신경 쓰지 않고 출력을 하므로 (맨앞의 부호비트가 1이어도 부호를 신경쓰지 않아서)4294967295 가 출력됨.

