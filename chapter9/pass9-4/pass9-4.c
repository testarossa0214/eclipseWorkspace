#include <stdio.h>
#include "util.h"
int main(void) {
	// ここにコードを挿入
	int array[]={505, 633, 1254, 189, 755};
	int size = countof(array);
	int total = 0;
	for (int i=0; i<size; i++){
		total += array[i];
	}
	double tax = 0.05;
	double fee = total * tax;		//int zei = total * 0.05だけでいける
	printf("税額=%d\n", (int)fee);
	return 0;
}
