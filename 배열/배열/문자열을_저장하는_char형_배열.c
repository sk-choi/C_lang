// 단어를 컴퓨터에서 데이터로 처리하려면 메모리에 문자를 순서에 맞게 연속으로 저장해야 함.
// 결국 배열이 단어를 저장하기 위한 가장 좋은 방법.
// 그리고 모든 알파벳 문자는 한 바이트로 충분히 표현할 수 있으니 char형 배열을 사용하는 것이 좋음.


//char형 배열의 선언과 초기화
//char형 배열을 선언할 때 꼭 기억해야 할 점은 저장할 문자열의 길이보다 최소한 하나 이상 크게
//배열을 선언해야 한다는 것

// 이렇게 여분의 공간이 필요한 이유는 널 문자(\0)를 저장하기 위해서이다.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char str[80] = "applejam"; //문자열 초기화

	printf("최초 문자열 : %s\n", str); //문자열 초기화 출력
	printf("문자열 입력 : ");
	scanf("%s", str); // 새로운 문자열 입력
	printf("입력 후 문자열 : %s\n", str); // 입력된 문자열 출력

	// 널 문자를 통해서 문자열의 끝을 표시한다.
	// printf함수는 배열의 크기와 상관 없이 초기화된 문자열만을 정확히 출력하는데,
	// 이는 char형 배열에서 널문자가 나올 때까지만 출력하도록 만들어졌기 때문이다.
	// 이런 규칙은 문자열을 처리하는 모든 함수에 적용된다.

	// scanf함수로 문자열을 입력 받을 때에도 널 문자가 사용됨.
	// scanf함수가 배열의 처음부터 grape만 입력했다면. 출력결과는 grapejam이어야 함.
	// 그러나 scanf함수는 사용자가 입력한 문자열 다음에 자동으로 널 문자를 추가해서 문자열의 끝을 표시.

	// scanf가 정말로 입력 문자열 다음에 널 문자 추가하는지 확인 
	printf("6번째 문자열 : %s\n", str[5]);
	return 0;
}

// char형 배열 선언 시 주의할 점.

// 1. 배열의 크기는 최대한 넉넉하게 선언한다.
// 2. 배열 요소의 개수는 최소한 '문자열 길이 +1'이어야 한다.

