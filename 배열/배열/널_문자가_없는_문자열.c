// printf 함수를 비롯한 많은 문자열 처리 함수가 널 문자로 문자열의 끝을 확인.
// 따라서 char형 배열에 무엇을 저장하든 널 문자가 나올 때까지가 하나의 문자열
// 만약 필요한 곳에 널 문자가 없다면 문자열을 다루는 함수의 결과는 예상할 수 없음

#include <stdio.h>

int main(void)
{
	char str[5];

	str[0] = '0';
	str[1] = 'K';
	printf("%s\n", str);

	return 0;
}

// 배열이 초기화되지 않았으므로 배열에는 쓰레기 값이 남아있음.
// 여기서 str[0], str[1]에 직접 문자를 넣고 printf 함수로 출력하니 OK가 저장된 다음 요소에
// 널 문자가 없어 쓰레기 값을 출력

// 심지어 할당된 배열에 널 문자가 없으면 이어지는 메모리 영역까지 출력
// 때로는 메모리 접근 에러가 발생하니 주의해야 함.
// 결국 널 문자가 없으면 다른 프로그램이 남긴 이상한 값을 갖게 됨.