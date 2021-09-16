#include <stdio.h>
#include "util.h"
int sum(const int *ptr, int size);	// int sum(const int a[], int size);
										// と同じ
int main(void) 
{
	int array[] = {10,20,30,40,50};
	int size = countof(array);
	int total = sum(array, size);	// sum関数の呼び出し
	printf("合計＝%d\n", total);
	return 0;
}
int sum(const int a[], int size)	// 引数の配列にconstを付ける
{
	int total=0;
	for(int i=0; i<size; i++){
		total += a[i];
	}
	return total;
}
