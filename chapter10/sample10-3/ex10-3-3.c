#include <stdio.h>
int main(void) 
{
	int data;
	while(printf("int>"),scanf("%d", &data),data!=0){
		printf("%dを入力しました\n", data);
	}
	return 0;
}
