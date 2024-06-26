// 개별적으로 할당된 구조체 변수를 포인터로 연결하면
// 관련된 데이터를 하나로 묶어 관리할 수 있다.
// 여기서 사용하는 것이 바로 자기 참조 구조체이다.
// 자기 참조 구조체는 자신의 구조체를 가리키는 포인터를 멤버로 가진다.

#include <stdio.h>

struct list // 자기 참조 구조체
{
	int num; // 데이터를 저장하는 멤버
	struct list *next; // 구조체 자신을 가리키는 포인터 멤버 (구조체형 포인터)
};


int main(void)
{
	struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30, 0 }; // 구조체 변수 초기화 {num, *next}
	struct list *head = &a, *current; // 헤드 포인터 초기화, 연결리스트 구현. 구조제 변수를 선언한 거라고 생각하자.

	a.next = &b; // a의 포인터 멤버가 b를 가리킴
	b.next = &c; // b의 포인터 멤버가 c를 가리킴

	printf("head->num : % d\n", head->num); // head가 가리키는 a의 num 멤버 사용
	printf("head->next->num : %d\n", head->next->num); // head로 b의 num 멤버 사용

	printf("list all : ");
 	current = head; // 최초 current 포인터가 a를 가리킴
	while (current != NULL) // 마지막 구조체 변수까지 출력하면 반복 종료
	{
		printf("%d  ", current->num); // current가 가리키는 구조체 변수의 num 출력
		current = current->next; // current가 다음 구조체 변수를 가리키도록 함
	}
	printf("\n");

	return 0;


}