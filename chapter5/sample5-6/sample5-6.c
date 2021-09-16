#include	<stdio.h>
int	main(void)
{
	int	a, b, c=1, d=1, e=2, f=2;
	a=b=0;			// b=0 の後で a=b
	c+=d+=5;        // d=d+5 の後で c=c+d
	e+=f=1;         // f=1 の後で e=e+f

	printf("a=%d\tb=%d\n", a, b);
	printf("c=%d\td=%d\n", c, d);
	printf("e=%d\tf=%d\n", e, f);
	return	0;
}
