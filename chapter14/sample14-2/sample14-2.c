#include <stdio.h>
#include "util.h"
int main(void) 
{
	int number[5];				// 配列を作る
	int size = countof(number);

	for(int i=0; i<size; i++){	// 配列にデータを入力する
		scanf("%d", &number[i]);
	}
	for(int i=0; i<size; i++){	// 配列要素を表示する
		printf("%d\t",number[i]);
	}
	return 0;
}
