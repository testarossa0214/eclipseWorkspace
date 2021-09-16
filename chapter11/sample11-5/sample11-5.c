#include	<stdio.h>
int	main(void)
{
	int	n;
	printf("整数>"); scanf("%d", &n);
	int	a	=	(n>0 ? n : -n);           // 正ならそのまま、負なら正の数にする
	printf("入力された値は%dです\n", a);
	return	0;
}
	
