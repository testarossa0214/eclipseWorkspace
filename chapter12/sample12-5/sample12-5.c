#include <stdio.h>
int main(void) 
{
	int n, total=0;
	while(scanf("%d", &n)!=EOF){
		if(n>10000){									// 異常値か？
			printf("異常値が入力されました %d\n", n);
			continue;									// 繰り返しの先頭にもどる
		}
		total += n;
	}
	printf("合計=%d\n", total);
	return 0;
}
