#include <stdio.h>
#include <string.h>				// memcpy関数を使うために必要
#include "util.h"

int main(void) 
{
	int a[] = {10, 20, 30, 40, 50};

	int size = countof(a);
	int b[size];
	memcpy(b, a, sizeof(a));		// メモリーのコピー

	for(int i=0; i<size; i++){
		printf("%d ", b[i]);
	}
	return 0;
}
