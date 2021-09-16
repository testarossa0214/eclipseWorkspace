#include <stdio.h>
#include <stdint.h>
#include "util.h"
int main(void) 
{
	uint8_t	a, b, c;	// 8ビットサイズの符号なし整数
	a = 0x0F;
	printf("a="); bprintln(a);	// a=0000 1111

	b = a << 4;					// aを4bit左シフトしてbに代入
	printf("b="); bprintln(b);	// b=1111 0000

	c = b >> 4;					// bを4bit右シフトしてcに代入
	printf("c="); bprintln(c);	// c=0000 1111

	return 0;
}
