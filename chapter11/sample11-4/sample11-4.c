#include	<stdio.h>
int	main(void)
{
	int	n;
	printf("int>"); scanf("%d", &n);	// 整数をnに入力する
	if(n==1){
		puts("賛成");		// nが1であれば賛成と表示する
	}
	return	0;
}
