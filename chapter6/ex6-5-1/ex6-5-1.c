#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	char string[1000];
	printf("お名前>");
	scanf("%s", string);
	printf("こんにちは%sさん", string);
	return 0;
}
