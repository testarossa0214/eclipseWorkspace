#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	int val, total=0;
	while(scanf("%d", &val)!=EOF){
		total += val*val;
	}
	printf("2乗した値の合計=%d", total);
	return 0;
}
