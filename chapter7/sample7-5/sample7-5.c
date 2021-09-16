#include <stdio.h>
#include <stdint.h>
#include "util.h"
int main(void) 
{
	uint8_t a = 0x0F;
	printf("a="); bprintln(a);		// a=0000 1111

	a <<= 4;						// a = a<<4;  と同じ
	printf("a="); bprintln(a);		// a=1111 0000
	return 0;
}
