#include <stdio.h>
int main(void) 
{
	char string[] = "こんにちは";	 // 文字列の入ったchar型の配列変数
	size_t len = sizeof(string);	 // 文字列のバイト数を求める
	printf("「%s」は%zuバイトです", string, len);	// 出力
	return 0;
}
