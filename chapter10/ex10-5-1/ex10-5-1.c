#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	double x, total=0; 			//ken=0;
	int ken = 0;

	while(scanf("%lf", &x)!=EOF){
		total += x;
		ken++;
	}
	printf("合計=%7.3f\n", total);
	printf("平均=%7.3f\n", total/ken);
	return 0;
}
