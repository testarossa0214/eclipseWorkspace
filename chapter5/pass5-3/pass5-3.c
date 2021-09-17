#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	double a, b, h, s;
	printf("上底＝"); scanf("%lf", &a);
	printf("下底＝"); scanf("%lf", &b);
	printf("高さ＝"); scanf("%lf", &h);
	double s=(a+b)*h/2;
	printf("台形の面積＝(%f+%f)×%f÷2=%f", a, b, h, s);
	return 0;
}
