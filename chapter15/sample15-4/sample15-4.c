#include <stdio.h>
#include "util.h"
int main(void) 
{
	char str[3][21];			// 2次元配列、要素が3つで各々 21バイト以内
	int size = countof(str);
	
	for(int i=0; i<size; i++){
		scanf("%20[^\n]", str[i]);	// 20文字以内で\nまで入力する
		flush_stdin();				// 入力バッファをクリアする
	}
	for(int i=0; i<size; i++){
		printf("%s\n", str[i]);
	}
	return 0;
}
