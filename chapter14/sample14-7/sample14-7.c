#include <stdio.h>
#include <string.h>				// strcpy関数を使うために必要

#include "util.h"
int main(void) 
{
	char a[] = "こんにちは Hello";
	int size = countof(a);			// （終端文字を含む）必要な配列要素の数
	char b[size];
	
	strcpy(b, a);					// 文字列のコピー
	printf("a=%s\n", a);
	printf("b=%s\n", b);

	return 0;
}
