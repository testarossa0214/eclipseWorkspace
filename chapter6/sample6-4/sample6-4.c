#include	<stdio.h>
int	main(void)
{
	int	a;
	printf("int>"); scanf("%i", &a);	// %dではなく、%iで入力する
	printf("値=%d\n", a);
	return	0;
}
