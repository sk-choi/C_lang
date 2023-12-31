#include<stdio.h>

int main(void)
{
	printf("%d\n", 10); //정수 출력
	printf("%lf\n", 3.4); //실수 출력(디폴트: 소수점 이하 6자리)
	printf("%.1lf\n", 3.45); //소수점 한자리까지 실수 출력(둘째자리에서 반올림)
	printf("%.10lf\n", 3.4); //소수점 10자리까지 실수 출력

	printf("%d과 %d의 합은 %d입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf-%.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0; 
}