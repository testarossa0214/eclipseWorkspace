#include <stdio.h>
int main(void) 
{
	int *iptr;
	int data = 123;

	iptr = &data;	// dataのアドレスをiptrに入れる
	*iptr = 999;	// data = 999; と同じ
	printf("アドレス=%p\n", iptr);
	printf("値　　　=%d\n", data);
	
	return 0;
}
