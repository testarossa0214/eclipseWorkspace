#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	FILE *fp = fopen("array.dat", "w");
	if(fp==NULL){
		fprintf(stderr, "★ファイルを開けません");
		exit(EXIT_FAILURE);
	}

	int number[] = {1,2,3,4,5,6,7,8,9 };
	fwrite(number, sizeof(number), 1, fp);	// 配列全体を保存する
	fclose(fp);

	return 0;
}
