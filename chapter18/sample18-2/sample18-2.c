#include <stdio.h>
int main(void) 
{
	const char *ptr;					// ポインタ変数を宣言しておく
	ptr = "Hello";						// "Hello"を作ってptrにそのアドレスを入れる
	printf("%p --- %s\n", ptr, ptr);
	ptr = "Goodbye";					// "Goodbye"を作ってptrにそのアドレスを入れる
	printf("%p --- %s\n", ptr, ptr);
	return 0;
}
