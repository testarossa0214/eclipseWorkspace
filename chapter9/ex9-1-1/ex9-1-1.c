#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	int data[]={223,240,331,127,651,188,200,143};
	int total = 0;
	for (int i=0; i<8; i++){
		total += data[i];
	}
	printf("合計=%d\n", total);
	return 0;
}
