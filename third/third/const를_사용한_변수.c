// 변수는 저장 공간이므로 언제든지 그 값을 변경 가능하지만,
// const는 예외적으로 초기화 된 값을 변경할 수 없다.

#include <stdio.h>

int main(void)
{
	int income = 0; // 소득액 초기화
	double tax; // 세금
	const double tax_rate = 0.12; // 세율 초기화

	// tax_rate = 0.13; -> 값 변경 불가.
	income = 456; //소득액 저장
	tax = income * tax_rate; // 세금 계산
	printf("세금은 : %.1lf입니다.\n", tax);

	return 0;
}

// const를 사용하면 이후에는 값을 바꿀 수 없으므로, 반드시 선언과 동시에 초기화 해야 한다.
// 초기화하지 않으면 변수의 쓰레기 값이 계속 사용되며, 만약 초기화 이후에 값을 바꾸고자 하면 컴파일 과정에서 에러 메세지가 발생한다.

// 예약어와 식별자:
// 예약어는 컴파일러와 사용 방법이 약속된 언어.
// 식별자는 필요에 따라 만들어 사용하는 단어.
// ex. int age;에서 int는 예약어, age는 식별자.