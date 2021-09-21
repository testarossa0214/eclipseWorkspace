#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	double data;
	while(printf("double>"),scanf("%lf", &data)!=EOF){
		printf("%f\n", data);
	}
	return 0;
}
