#include <stdio.h>
#include <stdint.h>
#include "util.h"
int main(void) {
	// ここにコードを挿入
	uint8_t a = 0B01101101;
	printf("実行前="); bprintln(a);
	a &= 0B01001101;
	printf("実行後="); bprintln(a);
	return 0;
}
