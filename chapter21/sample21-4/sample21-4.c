#include <stdio.h>
#include <stdlib.h>
int main(void) 
{

	char name1[100];	// 氏名を入力する変数
	int		age;		// 年齢　〃
	double	height;		// 身長　〃
	double weight;		// 身長　〃

	FILE *fp = fopen("data.txt", "r");
	if(fp==NULL){
		fprintf(stderr, "★ファイルを開けません");
		exit(EXIT_FAILURE);
	}

	fscanf(fp, "%s%d%lf%lf", name1,&age, &height, &weight);
	fclose(fp);

	printf("%s\n%d\n%f\n%f\n", name1,age, height, weight);

	return 0;
}
