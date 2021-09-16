#include <stdio.h>
#include <string.h>

struct person {
	char	name[100];	// 配列のメンバ
	int		age;
	double	height;
	double	weight;
};

int main(void) 
{
	struct person tom;
	strcpy_s( tom.name, sizeof(tom.name), "tom");
	tom.age = 18;
	tom.height = 165;
	tom.weight = 48;
	printf("%s  %d %5.1f %5.1f",
		   tom.name, tom.age, tom.height, tom.weight);
	return 0;
}
