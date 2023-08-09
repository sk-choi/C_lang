#include <stdio.h>

void print_char(char ch, int count); //함수 선언

int main(void)
{
	print_char('@', 5); //문자와 숫자를 주고 함수 호출

	return 0;
}

void print_char(char ch, int count) //매개변수는 있으나 반환형은 없다.
{
	int i;

	for (i = 0; i < count; i++) //i는 0부터 count-1까지 증가, count번 반복
	{
		printf("%c", ch); //매개변수 ch에 받은 문자 출력
	}

	return; //반환형이 없다.

}

// return의 역할이 값을 돌려주는 일인데, 돌려줄 값이 없으므로 자연스럽게 혼자 쓰인다.
// 심지어 return문 자체를 생략하는 것도 가능하다. return문이 없어도 함수의 코드를 모두 수행하면 호출한 곳으로 자동으로 돌아감.

// 만약 함수 실행 중간에 돌아가야 한다면, return문을 함수 어디서든 사용할 수 있다.
// 예를 들어 count의 값이 10보다 큰 경우 바로 함수를 끝내고 싶다면,
// 함수 중간에 return문을 사용하면 된다.

//void print_char(char ch, int count)
//{
//	int i;
//	if (count > 10) return;
//	for (i = 0; i < count; i++)
//	{
//		printf("%c", ch);
//	}
//	return;
//}

// 반환형이 void인 함수는 컴파일러가 반환값이 없다고 가정해 호출한 위치에 반환값을 저장할 공간을 준비하지 않았음.
// 따라서 return문에 값을 사용하면 컴파일러가 경고 메세지를 출력.
// 같은 이유로 반환값이 없는 함수는 호출 문장을 수식의 일부로 사용 불가.