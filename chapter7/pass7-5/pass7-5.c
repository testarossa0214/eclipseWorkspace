#include <stdio.h>
#include <stdint.h>
#include "util.h"
int main(void) {
	// ここにコードを挿入
	uint8_t u1, u2, a1, a2, b1, b2;
	printf("[0x00〜0xFF]u1,u2：>");
	scanf("%hhX %hhX", &u1, &u2);
	printf("u1=(%02X)", u1); bprintln(u1);
	printf("u2=(%02X)", u2); bprintln(u2);

	a1 = u1 & 0B00001111;
	a2 = u2 & 0B00001111;
	b1 = u1 & 0B11110000;
	b2 = u2 & 0B11110000;

	u2 = a2 | b1;
	u1 = a1 | b2;
	printf("----\n");
	printf("u1=(%02X)", u1); bprintln(u1);
	printf("u2=(%02X)", u2); bprintln(u2);
	return 0;
}
