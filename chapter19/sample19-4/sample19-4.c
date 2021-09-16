#include <stdio.h>
void sub(void);
int gn=100;		// グローバル変数

int main(void) 
{
	gn = 10;	// main関数からアクセス
	printf("main -- n=%d\n", gn);
	sub();
	return 0;
}
void sub(void)
{
	gn = 20;	// sub関数からアクセス
	printf("sub  -- n=%d\n", gn);
}
