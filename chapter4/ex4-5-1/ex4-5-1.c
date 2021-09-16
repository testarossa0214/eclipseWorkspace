#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	double x;
	printf("浮動小数点数>");
	scanf("%lf", &x);
	x = x + 10;
	printf("入力した値に10.0を足すと%fです\n", x);
	return 0;
}
