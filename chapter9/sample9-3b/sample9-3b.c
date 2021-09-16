#include	<stdio.h>
#include	"util.h"
int	main(void)
{
	int	n[]	=	{10, 20, 30, 40, 50};
	int	size	= countof(n);
	for(int i=0; i<size; i++){
		printf("%d\n", n[i]);
	}
	//printf("i=%d\n", i);
	return	0;
}
