#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	for(int i=0; i<3; i++){
		double a;
		printf("半径>"); scanf("%lf", &a);
		printf("面積=%f\n", a*a);
	}
	return 0;
}
