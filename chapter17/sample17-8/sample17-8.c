#include <stdio.h>
void change(int a[]);

int main(void) 
{
	int array[] = {10,20,30,40,50};
	change(array);					// 配列のアドレスを渡す
	for(int i=0; i<5; i++){
		printf("%5d",array[i]);
	}
	return 0;
}
void change(int *a)	// 配列表現では、int a[]
{
	*(a+2) = -999;		// 配列表現では、a[2]=-999;
}
