#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	int n, total=0, ken=0;
	while(scanf("%d", &n)!=EOF){
		total += n;
		ken++;
	}
	double avr = (double)total/ken;
	printf("合計 =%d\n", total);
	printf("平均 =%7.3f\n", avr);
	return 0;
}
