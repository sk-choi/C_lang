// scanf 함수는 입력한 문자를 메모리의 1바이트 공간에 저장하도록 설계되었음.
// 따라서 int형 변수를 사용하면 나머지 3바이트에 있는 쓰레기 값으로 인해
// 입력한 문자의 아스키 코드 값을 바로 사용할 수 없게 됨.

// 이 경우 입력한 int형 변수를 별도의 char형 변수에 대입해 입력한 문자만을 사용하도록 해야 함.
// 결국 문자를 입력하는 경우에는 가능한 한 char형 변수를 사용하는 것이 좋다.

// 문자만 입출력하는 경우는 문자 전용 함수를 쓰는 것이 효율적
// getchar 함수와 putchar함수는 문자 전용 입출력 함수로 원형은 아래와 같음.

// int getchar(void); <- 매개변수가 없고 입력한 문자를 반환
// int putchar(int); <- 출력할 문자를 인수로 줌

#include <stdio.h>

int main(void)
{
	int ch; //ch2; // 입력문자를 저장할 변수

	ch = getchar(); // 함수가 반환하는 문자를 바로 저장
	//ch2 = getchar();
	printf("입력한 문자 : ");
	putchar(ch); // 입력한 문자 출력
	//printf("\n");
	//putchar(ch2);
	putchar('\n'); // 개행 문자 출력

	return 0;
}


// getchar 함수는 매개변수가 없으므로 괄호만 사용해 호출.
// 호출된 함수는 키보드로 입력한 문자의 아스키 코드 값을 반환, 반환값은 int형 변수로 받는다.
// 반환값은 필요에 따라 char형 변수나 배열에 옮겨 문자나 문자열로 사용.

// getchar 함수는 scanf 함수와 마찬가지로 공백문자, 탭 문자, 개행 문자도 입력. (이들 옵션을 제외하는 옵션은 없다.)

// putchar함수는 '문자 상수'나 문자의 '아스키 코드 값'을 인수로 주면 해당 문자를 화면에 출력. (숫자를 문자로 변환)
// 그리고 출력한 문자를 다시 반환하며, 출력 과정에서 에러가 발생하면 -1을 반환.

// getchar 함수의 반환형이 int형인 이유는 문자 의외의 값도 반환하기 때문.
// 문자의 입력이 끝나면 -1을 반환하는데, 이 값을 문자와 정확히 구분하기 위해 반환형으로 int형을 사용.
// 아스키 코드의 값의 버위가 0~127이므로 -1과 겹치지 않기 때문.
// 하지만 데이터를 입력하는 경로가 키보드가 아닌 파일로 바뀌고 반환하는 값이 255라면
// 파일의 데이터를 모두 읽은 경우 반환하는 -1과 구분이 불가능할 수 있음.
// -1은 모든 비트가 1인 상태로 저장되므로 1바이트 크기의 공간에서는 255와 -1을 표현하는 비트열이 같기 때문.

// 따라서 문자를 반복 입력하는 경우, 반환값을 일단 int형 변수에 저장하고 -1과 비교한 후
// -1이 아니면 별도의 char형 변수에 옮겨 사용하는 것이 좋다.