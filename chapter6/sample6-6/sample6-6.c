#include <stdio.h>
int main(void) 
{
	char string[1000];							// 最大999文字分を確保しておく
	printf("文字列>");scanf("%s", string);		// %s で文字列を入力
	printf("string=%s\n", string);
	return 0;
}
