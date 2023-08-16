#include <stdio.h>

void my_gets(char* ps);
int my_puts(const char* str);

int main(void)
{
	char input[10];
	my_gets(input);
	my_puts(input);

	return 0;
}

void my_gets(char* ps)
{
	char ch;
	while ((ch = getchar()) != '\n')
	{
		*ps = ch;
		ps++;
	}
	*ps = '\0';
}

//int my_puts(const char* str)
//{
//	while (str != '\n')
//	{
//		putchar(*str);
//		str++;
//	}
//	printf("\n");
//}