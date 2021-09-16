#include <stdio.h>
#include "util.h"
int sum(int *iptr, int size);		// int sum(int a[], int size);
									// と同じ

int main(void) 
{
	int array[] = {10,20,30,40,50};
	int size = countof(array);		// 配列の要素数をsizeに入れる
	int total = sum(array, size);	// 配列のアドレスを渡す
	printf("合計＝%d\n", total);
	return 0;
}
int sum(int a[], int size){		// ポインタとして受け取るが、配列表記する
	int total=0;
	for(int i=0; i<size; i++){
		total += a[i];				// 配列表記で配列要素を取り出す
	}
	return total;
}
