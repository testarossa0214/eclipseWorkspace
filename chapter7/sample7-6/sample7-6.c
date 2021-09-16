#include <stdio.h>
#include <stdint.h>
#include "util.h"
int main(void) 
{
	uint8_t  a = 0x2D, b = 0xDC, c;		// a、bに値を代入
	printf("a\t= ");bprintln(a);		// aを2進数形式で表示
	printf("b\t= ");bprintln(b);		// bを2進数形式で表示

	c = a & b; printf("a&b\t= ");	bprintln(c);	// AND演算
	c = a| b;	printf("a|b\t= ");	bprintln(c);	// OR演算
	c = a ^ b;	printf("a^b\t= ");	bprintln(c);	// XOR演算
	c = ~a;		printf("~a\t= ");	bprintln(c);	// NOT演算
	
	return 0;
}
