// 입력 버퍼 지우기
// scanf와 getchar 함수는 같은 버퍼를 사용하며 입력 데이터를 공유.

// 따라서 앞서 실행한 입력 함수가 버퍼에 남겨 둔 데이터를 그 이후에 수행되는 함수가 잘못 가져갈 가능성이 있음

// 따라서 버퍼에 남아 있는 불필요한 데이터는 미리 제거하는 것이 좋다.

// 버퍼에 남아 있는 문자들을 모두 입력해서 사용하지 않고 버리면 버퍼의 내용을 지우는 것이 가능하다.

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)
{
	int num, grade; // 학번과 학점을 저장할 변수

	printf("학번 입력 : ");
	scanf("%d", &num); // 학번 입력
	//getchar(); // 버퍼에 남아 있는 개행 문자 제거
	printf("학점 입력 : ");
	grade = getchar(); // 학점 입력
	printf("학번 : %d, 학점 : %c", num, grade);

	return 0;
}

// 1. scanf 함수는 일단 버퍼로부터 입력을 시도. 처음에는 버퍼가 비어 있으므로 키보드로부터 입력받기 위해 대기
// 2. 여기서 315를 입력하고 enter를 누르면 315와 개행문자가 함께 버퍼에 저장됨.
// 3. 문자열 "315"는 정수로 변환되어 변수 num에 저장되고 버퍼에는 개행 문자만 남음.
// 4. 이 개행문자가 이후의 입력에 영향을 줄 수 있으므로 getchar 함수를 추가로 호출해 버퍼에 남아 있던 개행문자 제거.
// getchar함수가 없으면 개행문자가 버퍼에 남아있어서 다음(학점)을 입력 받을 수 없음

// ! 문자 입출력 함수에는 fgetc와 fputc도 있음.
// 이들은 호출할 때 추가적인 인수가 필요한데 
// fgetc는 stdin을 주고 fputc는 stdout을 준다.
// 별도로 인수를 주는 것 외에는 getchar, putchar 함수와 기능은 같다.
// stdin : standard input, stdout : 출력 버퍼의 이름.