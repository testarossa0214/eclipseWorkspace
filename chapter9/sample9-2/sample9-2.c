#include <stdio.h>
#include  "util.h"						// 関数型マクロを読み込む
int main(void) 
{
	int n[] = {10, 20, 30, 40, 50};
	int total = 0;
	int size = countof(n);				// 配列の長さを計算しておく
	for(int i=0; i<size; i++){
		total += n[i];
	}
	printf("合計=%d\n", total);			// 合計
	printf("平均=%d\n", total/size);	// 平均（合計を配列のサイズで割る）
	return 0;
}
