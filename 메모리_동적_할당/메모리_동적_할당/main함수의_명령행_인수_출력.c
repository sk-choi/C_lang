// 프로그램의 실행 방법은 운영체제마다 다른데
// 윈도우에서는 바탕화면의 프로그램을 더블 클릭,
// 도스나 유닉스에서는 명령행에 실행 파일의 이름을 직접 입력

// 명령행에서 프로그램을 실행시킬 때 프로그램 이름 외에도 프로그램에 필요한 정보를 함께 줄 수 있다.
// 이것을 명령행 인수라고 한다.

#include <stdio.h>

int main(int argc, char** argv)
{
	int i; // 명령행 인수를 받을 매개변수

	for (i = 0; i < argc; i++) // 인수 개수만큼 반복
	{
		printf("%s\n", argv[i]); // 인수로 받은 문자열 출력
	}

	return 0;
}

// argc : argument count
// argv : argument vector

// 명령행을 입력했다면, 명령행 인수의 개수는 argc에 저장이 되고
// 명령행에서 입력한 문자열의 위치는 argv에 저장이 된다.
// 명령행에서 프로그램을 실행시키면 운영체제는 명령행 인수를 가공해 문자열의 형태로 메모리에 저장
// 그리고 포인터 배열로 연결한 후에 포인터 배열의 시작 위치를 실행 프로그램의 main 함수에 넘긴다. 
// 이 때 명령행 인수의 개수도 함께 전달된다.