#include <stdio.h>
int main(void) 
{
	int n, total=0;
	while(scanf("%d", &n)!=EOF){						// 入力終了まで繰り返す
		if(n>10000){									// 異常値か？
			printf("異常値が入力されました %d\n", n);
			break;										// 繰り返しを中止する
		}
		total += n;
	}
	printf("合計=%d\n", total);
	return 0;
}
