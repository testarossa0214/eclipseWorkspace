#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	double val[]={1.512, 1.781, 2.401, -1.331, 2.127, 0.333};
	double total = 0;
	for(int i=0; i<6; i++){
		total += val[i];
	}
	printf("合計=%7.3f", total);
	return 0;
}
