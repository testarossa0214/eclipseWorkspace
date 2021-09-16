#include <stdio.h>
int main(void) 
{
	int data = 123;
	int *iptr;						// int型のポインタ

	iptr = &data;					// dataのアドレスをiptrに入れる
	printf("アドレス=%p\n", iptr);	// アドレスを表示(変換指定子はp)
	printf("値　　　=%d\n", *iptr);	// アドレス位置にある値（整数）を表示
	
	return 0;
}
