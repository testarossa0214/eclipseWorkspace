#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	int n1[]={12,17,30,52};
	int n2[]={26,33,41,12};
	for (int i=0; i<4; i++){
		printf("%d+%d=%d\n", n1[i], n2[i], n1[i]+n2[i]);
	}
	
	return 0;
}
