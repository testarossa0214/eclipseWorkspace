#include <stdio.h>
#include "util.h"

int main(void) 
{
	int a[] = {10, 20, 30, 40, 50};

	int size = countof(a);
	int b[size];					// 動的配列の作成
	for(int i=0; i<size; i++){		// 配列要素を1つずつコピーする
		b[i] = a[i];
	}

	for(int i=0; i<size; i++){
		printf("%d ", b[i]);
	}
	return 0;
}
