#include <stdio.h>
#include "util.h"

int main(void) 
{
	char string[10];
	scanf("%9s",string);	// 1度目の入力
	printf("%s\n", string);

	flush_stdin();			// 入力バッファをクリアする

	scanf("%9s",string);	// 2度目の入力
	printf("%s\n", string);
	return 0;
}
