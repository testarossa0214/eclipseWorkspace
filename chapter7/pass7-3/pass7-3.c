#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	char a;
	printf("半角1文字>");
	scanf("%c", &a);
	printf("%cの文字コードは%#Xです\n", a, a);
	return 0;
}
