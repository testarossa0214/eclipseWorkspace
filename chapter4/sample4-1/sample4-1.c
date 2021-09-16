#include	<stdio.h>
int	main(void)
{
	int	number;         				// 整数型でnumberという名前の変数を使うと宣言
	number	=	10;     				// numberに10を代入
	number	=	20;						// numberに20を再代入
	number	=	number	+	1;          // numberを1増やす
	printf("numberは%dです\n", number);	// numberの値を表示
	return	0;
}
