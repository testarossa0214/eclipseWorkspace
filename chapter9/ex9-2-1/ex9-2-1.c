#include <stdio.h>
#include "util.h"
int main(void) {
	// ここにコードを挿入
	int numbers[]={36, 12, 2, 8, 12, 88, 23, 55, 62, 90};
	double data[]={0.112, 0.3, 22.123, 4.16, 0.0001};
	char ch[]={'H','E','L','L','O','!'};

	printf("numbers=%zu\n", countof(numbers));
	printf("data=%zu\n", countof(data));
	printf("ch=%zu\n", countof(ch));
	
	return 0;
}
