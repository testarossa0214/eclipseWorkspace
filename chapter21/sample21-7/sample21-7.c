#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	FILE *fp = fopen("data.txt", "w");
	if(fp==NULL){
		fprintf(stderr, "★ファイルを開けません");
		exit(EXIT_FAILURE);
	}

	char *title[]= {			// 出力する文字列データ
			"阿部一族",
			"大塩平八郎",
			"山椒大夫",
			"即興詩人",
			"高瀬舟"
	};

	for(int i=0; i<5; i++){
		fputs(title[i], fp);	// 1行分として出力
		fputs("\n", fp);		// 改行コード（¥n）を付加する
	}
	fclose(fp);
	return 0;
}
