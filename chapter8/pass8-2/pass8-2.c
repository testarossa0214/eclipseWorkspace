#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	double x;
	for(int i=0; i<3; i++){
		printf("double>"); scanf("%lf", &x);
		printf("%7.2f\n", x*x);
	}
	
	return 0;
}
