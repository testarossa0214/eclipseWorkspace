#include <stdio.h>
int main(void) 
{
	int drink[][4] = {
		{100, 150, 280, 220},
		{120, 200, 250, 210},
		{130, 210, 300, 260}
	};
	
	for(int j=0; j<4; j++){			// 第0行の配列要素を表示する
		printf("%d ", drink[0][j]);	// {100, 150, 280, 220}
	}
	puts("");

	for(int j=0; j<4; j++){			// 第1行の配列要素を表示する
		printf("%d ", drink[1][j]);	// {120, 200, 250, 210}
	}
	puts("");

	for(int j=0; j<4; j++){			// 第2行の配列要素を表示する
		printf("%d ", drink[2][j]);	// {130, 210, 300, 260}
	}

	return 0;
}
