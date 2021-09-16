#include	<stdio.h>
int	main(void)
{
	int	s;
	scanf("%d", &s);            // sに値を入力する
	switch(s){                 // sの値で処理を分ける
	case	1:                  // sが1だった場合
		puts("C言語");
		break;
	case	2:                  // sが2だった場合
		puts("Java言語");
		break;
	default:                   	// sが1でも2でもない場合
		puts("その他の言語");
	}
	return	0;
}
