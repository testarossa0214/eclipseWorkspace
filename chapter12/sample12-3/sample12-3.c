#include	<stdio.h>
int	main(void)
{
	int	n;
	printf("点数>"); scanf("%d", &n);      // 点数の入力
	if(n>=80){                             // 80点以上
		puts("優");
	}else if(n>=70){                       // 80点未満かつ70点以上
		puts("良");
	}else if(n>=60){                       // 70点未満かつ60点以上
		puts("可");
	}else{                                 // 60点未満
		puts("不可");
	}
	return	0;
}
