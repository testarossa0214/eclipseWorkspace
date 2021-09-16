#include <stdio.h>
int main(void) 
{
	int a=0, b=10;
	++a;			// （前置で）1増やす
	--b;			// （前置で）1減らす
	printf("a=%d b=%d\n", a, b);

	a++;			// （後置で）1増やす
	b--;			// （後置で）1減らす
	printf("a=%d b=%d\n", a, b);

	return 0;
}
