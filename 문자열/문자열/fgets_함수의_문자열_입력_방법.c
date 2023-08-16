// scanf와 gets 함수는 입력되는 문자열의 크기가 배열 크기를 넘어설 위험성이 있음.
// 이렇게 문자열의 크기가 배열보다 커지면 할당되지 않은 메모리 공간을 침범해 실행 중인 프로그램에 에러가 발생할 수 있다.
// 안전하게 문자열을 입력하려면 배열 크기를 확인하는 fgets 함수를 사용하는 것이 좋다.

// fgets 함수 원형 : fgets(str, sizeof(str), stdin);  <- 순서대로 배열명, 배열의 크기 확인(최대로 '배열의 크기 -1', 표준 입력(stdin은 키보드에 연결된 표준 입력 버퍼를 사용하라는 뜻)


#include <stdio.h>
// 나중에 입력할 공간 <- sting.h 헤더 파일 include
#include <string.h>

int main(void)
{
	char str[80];

	printf("공백이 포함된 문자열 입력 :");
	fgets(str, sizeof(str), stdin); // 문자열 입력

	// 나중에 입력할 공간 <- 개행문자 제거 코드 입력
	str[strlen(str) - 1] = '\0';

	printf("입력된 문자열은 %s입니다\n", str); // 문자열 출력

	return 0;
}

// fgets함수는 gets함수와 다르게 enter를 누를 때 개행문자까지 버퍼에 저장한다.
// gets함수가 개행문자를 널문자로 변환한거랑 다르게 fget 함수는 
// 개행문자까지 배열에 저장하고 마지막에 널 문자를 붙임.
// ex. apple jam\n\0

// 개행문자를 제거하기 위해선 strlen 함수를 사용
// strlen 함수는 배열명을 인수로 받아 널 문자 이전까지의 문자 수를 세어 반환
// 사용할 때는 string.h 헤더 파일을 include 해야 한다.

// str[strlen(str) - 1] = '\0';
// strlen 함수를 통해서 널 문자 이전까지의 문자수-1 번째에 위치한 개행문자를 널문자로 바꿔줌.
// 즉, apple jam을 입력한다면 9번째에 개행문자가 존재하므로 이것을 널문자로 바꿔준다.
