#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	double  a[]={5.7, 2.3, 0.5, 3.1};
	for(int i=0; i<4; i++){
		printf("%5.1f\n", a[i]*10);
	}
	return 0;
}
