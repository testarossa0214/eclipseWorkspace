#include	<stdio.h>
#include "util.h"
int	main(void)
{
	int	n[]		=	{10, 20, 30, 40, 50};
	int size = countof(n);
	for(int i=0; i<size; i++){
		printf("%d\t", n[i]);         // 配列要素を表示する
	}
	puts("");                         // 改行する
	for(int i=0; i<size; i++){
		printf("%d\t", n[i]*2);       // 2倍した配列要素を表示する
	}
	return	0;
}
