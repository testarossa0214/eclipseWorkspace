#include <stdio.h>
int main(void) 
{
	int a=0, n;
	n = a++;		// 後置：nにはa（値は0）が代入され、その後で、aは1になる
	printf("n=%d / a=%d\n", n, a);
	return 0;
}
