#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	char 	c;
	printf("char>"); scanf("%c", &c);
	int		n;
	printf("int>"); scanf("%d", &n);
	double  x;
	printf("double>"); scanf("%lf", &x);

	printf("char=%c\tint=%d\tdouble=%f", c, n, x);
	return 0;
}
