// 문자열의 크기는 일정하지 않다.
// 따라서 컴파일러는 문자열 상수를 독특한 방법으로  처리.
// 컴파일 과정에서 문자열을 char 배열 형태로 따로 보관하고
// 문자열 상수가 있던 곳에는 배열의 위치 값을 사용.
// 예를 들어 문자열 "apple"은 문자 'a'가 저장된 메모리의 주소 값으로 바뀐다.

#include <stdio.h>

int main(void)
{
	printf("apple이 저장된 시작 주소 값 : %p\n", "apple"); // 주소 값 출력
	printf("두 번째 문자의 주소 값 : %p\n", "apple" + 1); // 주소 값 출력
	printf("첫 번째 문자 : %c\n", *"apple"); // 간접 참조 연산
	printf("두 번째 문자 : %c\n", *("apple" + 1)); // 포인터 연산식
	printf("배열로 표현한 세 번째 문자 : %c\n", "apple"[2]); // 배열 표현식

	return 0;
}

// 문자열 "apple"은 배열 형태로 따로 저장되고 printf 함수의 인수로 그 첫번째 문자의 주소가 사용됨.
// printf 함수에서 %p로 출력하면 그 값을 16진수로 확인할 수 있다.
// p는 주로 포인터를 출력할 때 사용하는 변환 문자며 포인터 값을 16진수 대문자로 출력.

// 결국 문자열은 컴파일 과정에서 char 변수의 주소로 바뀌므로 직접 포인터 연산을 수행할 수 있음.
// 정수를 더하면 다음 문자의 주소를 구할 수 있고, 13행처럼 간접 참조 연산을 수행하면 첫 번째 문자가 됨.

// 주의해야 할 점.
// 주소로 접근해서 문자열을 바꿔서는 안됨.
// 즉, * "apple" = 't';와 같이 첫 번째 문자가 저장된 공간에 다른 문자를 대입해 그 값을 바꾸려는 시도는 위험.
// 연산 자체는 문제가 없으므로 정상적으로 컴파일되지만, 실행할 때 운영체제에 의해서 강제 종료될 가능성이 있음.
// 운영체제는 문자열 상수를 읽기 전용 메모리 영역에 저장함. 따라서 그 값을 바꾸는 명령의 실행을 제한.

// 문자열을 주소로 바꾸면 포인터 연산을 통해 문자열의 시작 위치부터 길이 제한 없이 사용할 수 있음.
// 이 경우 문자열의 끝을 알아야 하므로 문자열의 끝을 표시하기 위해 널 문자를 사용.
// 따라서 컴파일러는 문자열 상수를 따로 저장할 때 마지막에 항상 널 문자를 붙여 줌.

