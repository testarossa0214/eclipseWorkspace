#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	unsigned int a, b;
	printf("unsigned+unsigned>");
	scanf("%u+%u", &a, &b);
	printf("%u+%u=%08u", a, b, a+b);
	return 0;
}
