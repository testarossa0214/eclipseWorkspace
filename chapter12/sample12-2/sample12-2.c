#include	<stdio.h>
int	main(void)
{
	int	n, sansei=0, hantai=0, mukou=0;
	while(scanf("%d", &n)!=EOF){
		if(n==1){                 // nが1の場合
			sansei++;
		}else if(n==2){           // nが2の場合
			hantai++;
		}else{                    // その他の場合
			mukou++;
		}
	}
	printf("賛成=%d\n", sansei);
	printf("反対=%d\n", hantai);
	printf("無効=%d\n", mukou);
	return	0;
}
