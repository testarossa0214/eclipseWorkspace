#include <stdio.h>
int main(void) 
{
	int a=0, n;
	n = ++a;		 // 前置：aは1になり、ｎにはa（値は1）が代入される
	printf("n=%d / a=%d\n", n, a);
	return 0;
}
