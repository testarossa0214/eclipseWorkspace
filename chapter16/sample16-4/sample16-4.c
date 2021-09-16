#include <stdio.h>
void hello(void);			// 関数プロトタイプ宣言

int main(void) 
{
	hello();				// 引数も戻り値もない関数の使い方
	return 0;
}
void hello(void)			// 引数も戻り値もない関数
{
	puts("こんにちは！");
}
