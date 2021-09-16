#include <stdio.h>
int main(void) 
{
	int array[] = {10,20,30,40,50};
	int *iptr=array;
	for(int i=0; i<5; i++){			// for文で全要素を出力する
		printf("%d  ", *(iptr+i));
	}
	return 0;
}
