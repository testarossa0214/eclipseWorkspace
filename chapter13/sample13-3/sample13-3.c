#include	<stdio.h>
int	main(void)
{
	int	n;
	printf("整数>"); scanf("%d", &n);
	switch(n){
	case 1:
	case 2:
			puts("YES");
			break;
	case 3:
			puts("NO");
			break;
	default:
			puts("ERROR");
	}
	return	0;
}
