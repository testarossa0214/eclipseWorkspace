#include <stdio.h>
int main(void)
{
	int n, total=0;
	while(scanf("%d", &n)!=EOF){
		total += n;
	}
	printf("合計=%d\n", total);
	return 0;
}
