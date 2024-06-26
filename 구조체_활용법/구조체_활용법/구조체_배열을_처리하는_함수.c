// 구조체 배열은 배열 요소가 구조체 변수일 뿐 지금까지 살펴본 배열과 다르지 않다.
// 구조체 배열의 이름은 첫 번째 요소의 주소이므로 구조체 변수를 가리킨다.
// 따라서 구조체 배열의 이름을 인수로 받는 함수는 구조체 포인터를 매개변수로 선언한다.

#include <stdio.h>

struct address // 주소록을 만들 구조체 선언
{
	char name[20]; // 이름을 저장할 멤버
	int age; // 나이를 저장할 멤버
	char tel[20]; // 전화번호를 저장할 멤버
	char addr[80]; // 주소를 저장할 멤버
};

void print_list(struct address* lp);

int main(void)
{
	struct address list[5] = { // 요소가 5개인 구조체 배열 선언
		{"홍길동", 23, "111-1111", "울릉도 독도"},
		{"이순신", 35, "222-2222", "서울 건천동"},
		{"장보고", 19, "333-3333", "완도 청해진"},
		{"유관순", 15, "444-4444", "충남 천안"},
		{"안중근", 45, "555-5555", "황해도 해주"}
	};

	print_list(list);

	return 0;
}

void print_list(struct address* lp) // 매개변수는 구조체 포인터
{
	int i; // 반복 제어 변수

	for (i = 0; i < 5; i++) // 배열 요소의 개수만큼 반복
	{
		printf("%10s%5d%15s%20s\n", // 각 배열 요소의 멤버 출력
			(lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
	}
}

// 배열이 포인터와 관련이 있다는 점에서, 
// 그리고 배열의 이름이 주소와 관련되었다는 점에서,
// 구조체 배열 역시 함수의 인자로 들어갈 때에는 *연산자를 넣어야 한다.
// lp[i].name = (*(lp+i)).name = (lp+i)->name

