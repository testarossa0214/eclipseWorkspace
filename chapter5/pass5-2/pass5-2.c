#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	int n;
	printf("整数を入力してください>");
	scanf("%d", &n);
	printf("%d%%7=%d",n, n%=7);
	return 0;
}
