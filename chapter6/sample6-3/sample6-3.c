#include	<stdio.h>
int	main(void)
{
	int		n=12345;
	double	x=12.345;
	
	printf("%d\n", n);		// 指定なし
	printf("%7d\n", n);		// 7桁の幅で表示
	printf("%f\n", x);		// 指定なし
	printf("%7.3f\n", x);	// 7桁の幅で小数点以下は3桁で表示
	return	0;
}
	
