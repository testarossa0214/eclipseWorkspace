#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	int n, ken=0;
	while(printf("整数>"),scanf("%d", &n)!=EOF){
		ken++;
	}
	printf("入力件数 =%d\n", ken);
	return 0;
}
