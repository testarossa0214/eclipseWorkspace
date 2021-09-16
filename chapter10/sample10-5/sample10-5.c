#include <stdio.h>
int main(void) 
{
	int n, total=0, ken=0;				// kenは件数用。0を代入しておく
	while(scanf("%d", &n)!=EOF){		// 入力終了まで繰り返す
		total += n;						// nをtotalに加算する
		ken++;							// kenを1増やす
	}
	printf("件数=%d\n", ken);
	printf("合計=%d\n", total);
	return 0;
}
