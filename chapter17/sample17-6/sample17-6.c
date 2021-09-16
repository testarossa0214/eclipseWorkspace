#include <stdio.h>
#include "util.h"
int sum(int *iptr, int size);

int main(void) 
{
	int array[] = {10,20,30,40,50};
	int size = countof(array);		// 配列の要素数をsizeに入れる
	int total = sum(array, size);	// 配列のアドレスを渡す
	printf("合計＝%d\n", total);
	return 0;
}
int sum(int *iptr, int size){		// int型のポインタ変数で受け取る
	int total=0;
	for(int i=0; i<size; i++){
		total += *(iptr+i);			// ポインタを1つずつ進める
	}
	return total;
}
