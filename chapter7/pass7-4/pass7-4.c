#include <stdio.h>
#include <stdint.h>
#include "util.h"
int main(void) {
	// ここにコードを挿入
	uint8_t a, u1, u2;
	printf("0x00〜0xFFの値>");
	scanf("%hhx", &a);
	u1 = a>>4;
	u2 = a & 0B00001111;
	printf("u1=(%02x)", u1); bprintln(u1);
	printf("u2=(%02X)", u2); bprintln(u2);
	return 0;
}
