#include	<stdio.h>
int	main(void)
{
	double	x1, x2, x3;
	x1	=	6/25*10;	// 6/25はintで計算するのでゼロになる
	x2	=	6/25*10.0;	// 6/25をintで計算するのでやはりゼロになる
	x3	=	6.0/25*10;	// 6.0/25はdoubleで計算しそれに10.0を掛ける
	
	printf("x1=%f\n", x1);
	printf("x2=%f\n", x2);
	printf("x3=%f\n", x3);
	return	0;
}
	
