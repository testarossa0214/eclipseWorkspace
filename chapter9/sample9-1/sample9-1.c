#include <stdio.h>
int main(void) 
{
	int	n[]	=	{10, 20, 30, 40, 50};
	int	total=0;      		// totalをゼロクリアしておく
	for(int i=0; i<5; i++){
		total += n[i];      // i番目の配列要素をtotalに加える
	}
	printf("合計=%d\n", total);
	return 0;
}
