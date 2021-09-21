#include <stdio.h>
#include "util.h"
int main(void) {
	// ここにコードを挿入
	char c[]={'d','o','o','G'};
	int size = countof(c);
	for(int i=size-1; i>=0; i--){
		printf("%c", c[i]);
	}
	return 0;
}
