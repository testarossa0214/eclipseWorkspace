#include <stdio.h>
int main(void) {
	// ここにコードを挿入
//	int times[]={1, 2, 3, 4, 5};
	int oubo[]={150, 220, 185, 210, 190};
	int saiyou[]={25, 30, 24, 36, 33};
	for (int i=0; i<5; i++){
		printf("%6.2f%%\n", (double)saiyou[i]/oubo[i]*100);
	}
	return 0;
}
