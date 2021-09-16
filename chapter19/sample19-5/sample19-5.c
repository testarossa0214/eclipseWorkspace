#include <stdio.h>
void count(void);
int main(void) 
{
	count();		// 1回目の呼び出し
	count();		// 2回目の呼び出し
	count();		// 3回目の呼び出し
	return 0;
}
void count(void)
{
	static int n=0;	// 静的変数
	
	++n;
	printf("%d  ", n);
}
