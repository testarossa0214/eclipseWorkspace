#include	<stdio.h>
int	main(void)
{
	int	n, sansei=0, hantai=0;        // 変数宣言と初期化
	while(scanf("%d", &n)!=EOF){     // nに値を入力しそれが0でない間繰り返す
		if(n==1){
			sansei++;      // 賛成
		}else{
			hantai++;      // 反対
		}
	}
	printf("賛成=%d\n", sansei);      // 集計結果を表示
	printf("反対=%d\n", hantai);
	return	0;
}
