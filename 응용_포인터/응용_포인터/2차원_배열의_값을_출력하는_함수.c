// 2차원 배열을 출력하는 함수에는 배열 포인터가 필요하다.
#include <stdio.h>

void print_ary(int(*)[4]);

int main(void)
{
	int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

	print_ary(ary); // 배열명을 인수로 주고 함수 호출

	return 0;
}

void print_ary(int(*pa)[4]) // 매개변수는 배열 포인터
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%5d", pa[i][j]); // pa를 2차원 배열처럼 사용
		}
		printf("\n");
	}
}

// 2차원 배열 요소의 2가지 의미

// 2차원 배열에는 2가지 의미의 배열 요소가 있다.
// 개념적으로는 2차원 배열의 요소는 1차원 배열이지만, 실제로 데이터가 저장되는 공간은 1차원 배열의 요소이다.
// 따라서 2차원 배열에서 '배열 요소'는 논리적으로 1차원의 부분배열을 뜻하고 물리적으로는 실제 데이터를 저장하는 부분배열의 요소를 의미.

// ex. int ary[3][4];
// 2차원 배열의 논리적 배열 요소의 개수는? 3개
// 2차원 배열의 물리적 배열 요소의 개수는? 12개

// 2차원 배열의 요소를 참조하는 원리

// 2차원 배열은 1차원 배열과 같이 모든 저장공간이 메모리에 연속으로 할당.
// 이 공간을 2차원의 논리적 공간으로 사용할 수 있는 것은 배열명이 1차원 배열의 주소로서 
// 1차원 배열 전체를 가리키기 때문.
// 따라서 배열 포인터를 쓰면 1차원의 물리적 공간을 2차원의 논리적 구조로 사용할 수 있다.

// int ary[3][4]에서 일곱번째 물리적 요소를 참조하는 경우는 다음과 같다. (배열의 주소는 100부터 시작한다고 가정)
// 일곱번째 물리적 요소는 ary[1]에 속하므로 먼저 ary[1]의 시작 위치를 구해야 한다.
// ary는 첫 번째 부분배열의 주소이므로 ary에 1을 더하면 두 번째 부분배열 ary[1]의 주소를 구할 수 있다.

// ary + 1 => 100 + (1 * sizeof(ary[0])) =>  100 + (1 * 16) => 116

// 여기서 쉽게 116번지에 2를 더해서 일곱번째 물리적 배열 요소의 위치를 구할 수 있을 것 같지만,
// (ary + 1) + 2의 값은  ary + 3이 되므로 계산 규칙에 따라 148번지가 된다.

// ary + 1의 결과인 116번지는 두 번째 부분배열 전체를 가리키는 주소이다.
// 즉, 주소 ary에 정수를 더한 값도 주소이며 가리키는 자료형도 변하지 않는다.
// 따라서 116번지에 간접 참조 연산을 사용해 두 번째 부분배열을 구하는 과정이 필요.

// *(ary + 1) => ary[1]

// *(ary + 1)의 연산 결과는 다섯 번째 물리적 요소의 주소가 되므로 여기에 2를 더하면, 124 번지를 구할 수 있다.

// *(ary + 1) + 2 => *(ary + 1) + (2 * sizeof(ary[1][0])) => 116 + (2 * 4) => 124

// 연산의 결과값인 124번지는 일곱 번째 물리적 배열 요소의 주소
// 그 요소를 쓰기 위해서는 마지막으로 간접 참조 연산을 수행.

// * (*(ary + 1) + 2) => ary[1][2]

// 2차원 배열 int ary[3][4]; 에서 다음 주소는 모두 같은 값을 가진다.

// &ary : 2차원 배열의 전체주소
// ary : 첫 번째 부분배열의 주소
// &ary[0] : 첫 번째 부분배열의 주소
// ary[0] : 첫 번째 부분배열의 첫 번째 배열 요소의 주소
// &ary[0][0] : 첫 번째 부분배열의 첫 번째 배열 요소의 주소

// 하지만 sizeof 연산을 수행하면 크기가 다르다.
 
// sizeof(ary) : 배열 전체의 크기 48 바이트
// sizeof(&ary[0]) : 주소의 크기 4바이트
// sizeof(ary[0]) : 부분배열 전체의 크기 16바이트
// sizeof(&ary[0][0]) : 주소의 크기 4바이트