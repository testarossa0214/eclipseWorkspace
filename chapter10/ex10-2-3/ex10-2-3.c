#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	double a, b;
	while(printf("(a b)>"),scanf("%lf%lf", &a, &b)!=EOF){
		printf("%f\n", a-b);
	}
	return 0;
}
