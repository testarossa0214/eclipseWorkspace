#include <stdio.h>
int main(void) 
{
	int array[] = {10,20,30,40,50};
	int *iptr=array;			// 配列名は配列のアドレス

	printf("%d  ", *(iptr+0));	// 0番目の要素にアクセスする
	printf("%d  ", *(iptr+1));	// 1番目の要素にアクセスする
	printf("%d  ", *(iptr+2));	// 2番目の要素にアクセスする
	printf("%d  ", *(iptr+3));	// 3番目の要素にアクセスする
	printf("%d  ", *(iptr+4));	// 4番目の要素にアクセスする

	return 0;
}

