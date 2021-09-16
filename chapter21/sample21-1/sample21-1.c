#include <stdio.h>
int main(void) 
{
	FILE *fp = fopen("data.txt", "w");		// ファイルのオープン

	// ここでファイルデータの入出力を行う
	
	fclose(fp);								// ファイルのクローズ
	return 0;
}
