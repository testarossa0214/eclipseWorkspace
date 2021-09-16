#include	<stdio.h>
int main(void) 
{
	unsigned a, b;
	printf("正の整数を2つ入力してください>");
	scanf("%u%u", &a,&b);

	printf("a=%u\n", a);
	printf("b=%u\n", b);
	return 0;
}

