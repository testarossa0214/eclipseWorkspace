#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	FILE *in  = fopen("toshishun.txt", "r");
	FILE *out = fopen("copy.txt", "w");
	if(in==NULL||out==NULL){			// どちらかが開けないとエラーにする
		fprintf(stderr, "★ファイルを開けません");
		exit(EXIT_FAILURE);
	}

	char c;
	while((c=fgetc(in))!=EOF){		// ファイルの最後まで1文字ずつ読む
		fputc(c, out);				// 読んだ文字をそのままファイルに出力する
	}

	fclose(in);
	fclose(out);
	
	return 0;
}
