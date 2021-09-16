#include	<stdio.h>
int	main(void)
{
	int	data;
	printf("整数を入力してください>");  // 入力をうながすガイドメッセージを表示
	scanf("%d", &data);
	printf("入力した値は%dです\n", data);
	return	0;
}
