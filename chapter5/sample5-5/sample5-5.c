#include	<stdio.h>
int	main(void)
{
	int		a=1, b=2, c=3;
	double	x=2.2;

	a	+=	5;			// a=a+5
	b	+=	c+5;		// b=b+(c+5)
	x 	+=	3.5;		// doubleにも使える　 x=x+3.5

	printf("a=%d\n", a);
	printf("b=%d\n", b);
	printf("x=%f\n", x);
	return	0;
}
