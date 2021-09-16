#include <stdio.h>
int main(void) 
{
	int drink[][4] = {
		{100, 150, 280, 220},
		{120, 200, 250, 210},
		{130, 210, 300, 260}
	};
	for(int i=0; i<3; i++){					// 0、1、2 と3行分繰り返す
		for(int j=0; j<4; j++){				// 1行分の配列要素を表示する
			printf("%d ", drink[0][j]);
		}
		puts(""); // 改行
	}
	return 0;
}
