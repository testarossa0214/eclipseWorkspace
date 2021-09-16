#include <stdio.h>
#include <stdint.h>
#include "util.h"
int main(void) 
{
	uint8_t  data = 	0B11011100;				// 受け取った制御データ
	printf("data="); bprintln(data);			// 制御データを表示する

	uint8_t test = data & 0B00000100;			// 左から3ビット目を取り出す
	printf("%hhu\n", test);						// 表示する

	data |= 0B00000010;							// 2ビット目をON(=1)にする
	printf("data="); bprintln(data);;			// 値を表示する

	return 0;
}
