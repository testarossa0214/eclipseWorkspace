#include <stdio.h>
#include "util.h"
int main(void) {
	// ここにコードを挿入
	int price[]={120, 110, 135, 90, 100};		//単価
	int unit[]={13, 25, 44, 35, 18};				//販売個数
	int size = countof(price);
	for(int i=0; i<size; i++){
		printf("%6d", price[i]);
	}
	puts("");
	for(int i=0; i<size; i++){
		printf("%6d", unit[i]);
	}
	puts("");
	for(int i=0; i<size; i++){
		printf("%6d", price[i]*unit[i]);
	}
	return 0;
}
