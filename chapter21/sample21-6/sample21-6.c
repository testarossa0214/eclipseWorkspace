#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	char buf[100];
	FILE *fp = fopen("toshishun.txt", "r");
	if(fp==NULL){
		fprintf(stderr, "★ファイルを開けません");
		exit(EXIT_FAILURE);
	}

	while(fgets(buf, sizeof(buf),fp)!=NULL){
		printf("%s", buf);
	}
	fclose(fp);
	return 0;
}
