#include <stdio.h>
#include "util.h"
int main(void) {
	// ここにコードを挿入
	double x[] = {12.3, 33.2, 9.6, 28.33, 5.98, 11.3};
	int size = countof(x);
	for (int i=0; i<size; i++){
		printf("%7.2f", x[i]);
	}
	puts("");
	for (int i=size-1; i>=0; i--){
		printf("%7.2f", x[i]);
	}
	return 0;
}
