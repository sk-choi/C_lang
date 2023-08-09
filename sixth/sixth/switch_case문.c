// 여러 개의 상수 중 조건에 해당하는 하나를 골라 실행하는 것이 switch~case문이다.
// switch~case문을 쓸 때는 2가지 규칙을 꼭 지켜야 한다.

//규칙1. 조건식으로 정수식만 사용해야 함.
//규칙2. 기본적으로 case는 break문을 포함(break는 해당 블록을 탈출하는데 사용. 여기선 switch문을 빠져나올 때 사용)

#include <stdio.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank)
	{
	case 1:
		m = 300;
		break;
	case 2:
		m = 200;
		break;
	case 3:
		m = 100;
		break;
	default:
		m = 10;
		break;
	}
	printf("m : %d\n", m);

	return 0;
}

// case와 default는 건너뛸 위치를 표시하는 레이블(label)의 역할을 함.

// break는 필요에 따라 생략할 수 있다.  