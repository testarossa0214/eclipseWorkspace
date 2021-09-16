#include <stdio.h>
int main(void) 
{
	char str[] = "Hello";		// 配列で文字列を作成
	const char *ptr;
	ptr = "Hello";				// 文字列を生成してアドレスをptrに入れる

	//ptr[0] = 'A';				// コンパイルエラー
	printf("%s\n", str);
	printf("%s\n", ptr);
	return 0;
}
