// 포인터는 주소를 저장하는 일정한 크기의 메모리 공간입니다.
// 따라서 언제든지 다른 주소를 저장하거나 포인터끼리 대입할 수 있다. 
// 그러나 일반 변수와는 달리 대입 연산에 엄격한 기준이 적용된다.


// 주소와 포인터의 차이: 주소는 변수에 할당된 메모리 저장 공간의 시작 주소 값 자체.
//						 포인터는 그 값을 저장하는 또 다른 메모리 공간

// 주소와 포인터의 크기는 sizeof 연산자로 확인 가능.

#include <stdio.h>

int main(void)
{
	char ch;
	int in;
	double db;

	char* pc = &ch; //ch의 주소 가리킴.
	int* pi = &in; //in의 주소 가리킴.
	double* pd = &db; //db의 주소 가리킴.

	printf("char형 변수의 주소 크기 : %d\n", sizeof(&ch));
	printf("int형 변수의 주소 크기 : %d\n", sizeof(&in));
	printf("double형 변수의 주소 크기 : %d\n", sizeof(&db));

	printf("char * 포인터의 크기 : %d\n", sizeof(pc));
	printf("int * 포인터의 크기 : %d\n", sizeof(pi));
	printf("double * 포인터의 크기 : %d\n", sizeof(pd));

	printf("char * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pc));
	printf("int * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pi));
	printf("double * 포인터가 가리키는 변수의 크기 : %d\n", sizeof(*pd));

	return 0;

}

// x64에서 포인터의 크기는 8바이트
// x32에서 포인터의 크기는 4바이트
