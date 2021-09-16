#include <stdio.h>
#include "util.h"
int main(void) 
{
	int number[5] = {};		// 空の初期化リストで0に初期化する
	char ch[5] = {};
	_Bool bools[5] = {};

	int size = countof(number);
	for(int i=0; i<size; i++){
		printf("%d  %d  %d\n", number[i], ch[i], bools[i]);
	}

	return 0;
}
