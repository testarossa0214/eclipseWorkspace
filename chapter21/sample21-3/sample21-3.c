#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
	FILE *fp = fopen("data.txt", "w");
	if(fp==NULL){
		fprintf(stderr, "★ファイルを開けません");
		exit(EXIT_FAILURE);
	}

	fprintf(fp, "%s %d %f %f\n", "田中宏", 21, 175.0, 68.5);
	fclose(fp);
	return 0;
}
