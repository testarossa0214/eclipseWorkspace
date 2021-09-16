#include <stdio.h>

int main(void) 
{
	int data;
	while(scanf("%d", &data)!=EOF){			// 入力終了まで繰り返す
		printf("%dを入力しました\n", data);
	}
	return 0;

}
