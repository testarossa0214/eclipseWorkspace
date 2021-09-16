#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	int		n;
	printf("整数を入力>");
	scanf("%d", &n);
	n = n * 3;
	printf("入力した値の3倍は%dです\n", n);
	return 0;
}
