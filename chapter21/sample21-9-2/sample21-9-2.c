#include <stdio.h>
#include <stdlib.h>

#define SIZE 9		// 配列サイズをマクロ定義しておく

int main(void) 
{
	FILE *fp = fopen("../sample21-9-1/array.dat", "r");
	if(fp==NULL){
		fprintf(stderr, "★ファイルを開けません");
		exit(EXIT_FAILURE);
	}
	int number[SIZE];
	fread(number, SIZE*sizeof(int), 1, fp);	// 一括で読み出す
	fclose(fp);

	for(int i=0; i<SIZE; i++){		// 出力して確認する
		printf("%d ", number[i]);
	}
	return 0;
}

