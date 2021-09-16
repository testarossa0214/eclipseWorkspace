#include <stdio.h>
#include "util.h"
int main(void)
{
	const char* p[] = {	// ポインタの配列を文字列で初期化
			"おはよう",
			"こんにちは",
			"こんばんは"
	};
	// p[0] = "ご機嫌よう";		// おはよう⇒ご機嫌ように置き換わる
	// p[0][0] = 'A';			// コンパイルエラー
	int size = countof(p);
	for(int i=0; i<size; i++){
		printf("%s\n", p[i]);
	}
	return 0;
}
