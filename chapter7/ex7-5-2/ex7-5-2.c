#include <stdio.h>
#include <stdint.h>
#include "util.h"
int main(void) {
	// ここにコードを挿入
	uint8_t a = 0x0F;
	printf("右シフト前="); bprintln(a);
	a >>= 2;
	printf("右シフト後="); bprintln(a);
	return 0;
}
