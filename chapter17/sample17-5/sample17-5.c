#include <stdio.h>
int main(void) 
{
	int array[] = {10,20,30,40,50};
	int *iptr=array;

	printf("%d  ", iptr[0]);	// 1つの要素を出力
	printf("%d  ", iptr[1]);
	printf("%d  ", iptr[2]);
	printf("%d  ", iptr[3]);
	printf("%d  ", iptr[4]);

	puts(""); 					// 改行
	for(int i=0; i<5; i++){		// for文でまとめて出力
		printf("%d  ", iptr[i]);
	}

	return 0;
}

