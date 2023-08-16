// 문자열 상수의 경우 값을 바꿀 수 없다.(상수라서 당연히 바꿀 수 없음)
// 바꿀 수 있는 문자열을 쓰기 위해선 char 배열을 사용해야 함.
// 배열에 문자를 입력하기 위해서 scanf 함수를 사용할 수 있다.

// scanf 함수는 %s를 사용해 공백이 없는 연속된 문자를 입력 받음.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	char str[80];

	printf("문자열 입력 : ");
	scanf("%s", str); // %s를 사용하고 배열명을 준다.
	printf("첫 번째 단어 : %s\n", str); // 배열에 입력된 문자열 출력
	scanf("%s", str);
	printf("버퍼에 남아 있는 두 번째 단어 : %s\n", str);

	return 0;
}

// scanf 함수는 버퍼를 사용하므로 키보드로 입력한 문자열은 enter를 누를 때 버퍼에 저장됨.
// 그 후에 scanf 함수는 버퍼에서 문자열을 가져와 배열에 저장.
// 중간에 공백, 탭, 개행 문자가 있으면 그 이전까지만 저장.

// 배열에 저장한 문자열의 끝에는 널 문자를 붙여서 문자열을 완성.
// 나머지 문자열은 버퍼에 남아있으며 다음에 호출되는 함수가 나머지 문자열을 호출해 입력에 사용.
// 버퍼에 문자열이 남아 있으므로 키보드로부터 문자열을 새로 입력 받지 않고 버퍼에 남아 있는 문자열을 가져와 배열에 저장.

// scanf 함수를 사용할 때 몇 글자를 입력할 수 있을까?
// scanf 함수는 문자열을 저장할 배열의 크기를 알지 못한다.
// scanf 함수는 주소인 배열명을 인수로 받으므로 오로지 배열의 시작 위치만 알고 있다.
// 그 시작위치의 주소 값을 증가시키면서 버퍼로부터 가져온 문자열을 배열에 저장.

// 만약 배열의 크기보다 큰 문자열을 입력하면 포인터 연산을 통해 할당된 메모리 공간을 넘어서 저장.
// 이 경우엔 메모리 침범이 발생하므로 프로그램 에러가 발생. -> 비정상 동작을 할 가능성이 커짐.

// 따라서 scanf 함수로 문자열을 입력할 때는 널 문자까지 고려해 배열의 크기를 넘지 않도록 주의.