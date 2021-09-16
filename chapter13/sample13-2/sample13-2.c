#include	<stdio.h>
int	main(void)
{
	int	s;
	scanf("%d", &s);
	switch(s){
	case	1:
		puts("C言語");
	case	2:
		puts("Java言語");
	default:
		puts("その他の言語");
	}
	return	0;
}
