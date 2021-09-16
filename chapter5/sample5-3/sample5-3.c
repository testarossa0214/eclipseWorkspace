#include	<stdio.h>
int	main(void)
{
	int	a=10, b=4;
	printf("  -a+b =%d\n", -a+b);		// 変数に単項マイナスを付ける
	printf("-(-a+b)=%d\n", -(-a+b));	// 式全体に単項マイナスを付ける
	return	0;
}

	
