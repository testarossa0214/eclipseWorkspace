#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	double x, total=0;
	int i = 0;
	while(scanf("%lf", &x)!=EOF){
		total += x;
		i++;
	}
	printf("合計=%7.3f\n", total);
	return 0;
}
