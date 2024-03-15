// 메모리의 동적 할당 시에 malloc 함수 외에도 calloc, realloc 함수가 존재.

// calloc 함수는 할당한 공간을 0으로 초기화
// realloc 함수는 크기를 조절

// 메모리를 동적으로 할당하고 0으로 초기화된 메모리 공간을 얻고자 할 때 
// calloc 함수를 사용하면 편리하다. 

// calloc 함수 원형

// void* calloc(unsigned int, unsigned int); (void *는 반환값, unsigned int는 매개변수)

// 그리고 메모리를 동적할당 하다보면, 처음에 예측한 크기가 너무 크거나 작을 수 있는데,
// realloc 함수로 저장 공간의 크기를 조절할 수 있다.

// realloc 함수 원형
// void* realloc(void*, unsigned int);

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int* pi; //할당한 저장 공간을 연결할 포인터
	int size = 5; //한 번에 할당할 저장 공간의 크기, int형 변수 5개씩
	int count = 0; //현재 입력된 양수 개수
	int num; //양수를 입력할 변수
	int i; //반복제어 변수

	pi = (int*)calloc(size, sizeof(int)); // 포인터 변수에 메모리 할당
	while (1)
	{
		printf("양수만 입력하세요 => ");
		scanf("%d", &num);
		if (num <= 0) break;
		if (count == size)
		{
			size += 5;
			pi = (int*)realloc(pi, size * sizeof(int)); //pi에 추가적으로 size만큼의 메모리 공간 재할당. re + allocation
		}
		pi[count++] = num;
	}
	for (i = 0; i < count; i++)
	{
		printf("%5d", pi[i]);
	}
	free(pi); // 동적 할당 메모리 반납

	return 0;

}

// calloc 함수는 할당된 저장 공간을 모두 0으로 초기화하므로 0으로 초기화가 필요한 경우 이 함수를 사용하면
// 따로 초기화하는 수고를 덜 수 있다.

// 만약 저장 공간의 크기를 조정해야 한다면 realloc 함수를 사용하면 된다.
// realloc 함수는 이미 할당한 저장 공간의 포인터와 조정할 저장 공간의 전체 크기를 준다.
// pi = (int *)realloc(pi, 10 * sizeof(int)); 에서 알 수 있듯이
// 프로그램 실행 중에 입력된 양수가 5개를 넘으면 size가 10으로 증가하므로 저장 공간은 10개로 늘어난다.
// 저장 공간을 늘리는 경우 이미 입력한 값은 그대로 유지되며 추가된 공간에는 쓰레기 값이 존재.
// 저장 공간을 줄이는 경우라면 입력된 데이터는 잘려 나감.
// 저장 공간의 크기를 조정한 후에는 다시 그 주소를 반환하므로 포인터에 저장해 사용.

// 이미 사용하던 저장 공간의 위치를 포인터가 기억하더라도
// 재할당 과정에서 메모리의 위치가 바뀔 수 있으므로 항상 realloc 함수가 반환하는 주소를 
// 다시 포인터에 저장해 사용하는 것이 좋다.

