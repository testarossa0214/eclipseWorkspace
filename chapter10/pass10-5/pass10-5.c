#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	int n, a, b, i;
	scanf("%d", &n);
	do{
		a = n/10;
		b = n%10;
		printf("商=%d　余り=%d\n", a, b);
		n = a;
		i++;
	}while(a!=0);
	printf("回数=%d\n", i);
	return 0;
}
