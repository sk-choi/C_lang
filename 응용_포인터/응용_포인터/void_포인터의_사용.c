// 가리키는 자료형이 일치하는 포인터에만 주소를 대입할 수 있음
// 가리키는 자료형이 다른 주소를 저장하는 경우라면 void 포인터를 사용해야 함.

#include <stdio.h>

int main(void)
{
	int a = 10; // int형 변수
	double b = 3.5; // double형 변수
	void* vp; // void 포인터

	vp = &a; // int형 변수의 주소 저장
	printf("a : %d\n", *(int*)vp);
	
	vp = &b; // double형 변수의 주소 저장
	printf("b : %.1lf\n", *(double*)vp);

	printf("a의 주소값 : %u\n", &a);
	printf("a의 주소 + 1의 값 : %u\n", (int*)vp + 1); //a의 주소값보다 4가 큰 주소 값 출력

	return 0;
}

// void 포인터는 가리키는 자료형이 정해져 있지 않으므로
// 어떤 주소도 저장 가능하다.
// 또한 같은 이유로 간접 참조 연산이나 정수를 더하는 포인터 연산이 불가능하다.
// 간접 참조 연산을 하려면 몇 바이트를 어떤 형태로 읽어야 하는지 알아야 하는데 
// 어떤 주소가 올지 알 수 없으므로 연산이 불가능하다.
// 정수연산도 마찬가지
// 그렇기 때문에 void 포인터는 원하는 형태로 변환해 사용해야 한다.

// printf("a : %d\n", *(int*)vp);
// printf("b : %.1lf\n", *(double*)vp);


