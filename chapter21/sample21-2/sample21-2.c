#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	FILE *fp = fopen("docs/data.txt", "w");
	if(fp==NULL){
		fprintf(stderr, "★ファイルを開けません");
		exit(EXIT_FAILURE);
	}

	// ここでファイルデータの入出力を行う
	
	fclose(fp);
	return 0;
}
