#include <stdio.h>
#include "util.h"
int main(void) {
	// ここにコードを挿入
	int d[]={1,3,5,7,9};
	int size = countof(d);
	for (int i=0; i<size; i++){
		printf("%5d", d[i]);
	}
	puts("");
	for (int i=0; i<size; i++){
		printf("%5d", d[i]*d[i]);
	}
	puts("");
	for (int i=0; i<size; i++){
		printf("%5d", d[i]*d[i]*d[i]);
	}
	return 0;
}
