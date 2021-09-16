#include <stdio.h>
#include "util.h"

typedef struct {
	char	name[100];
	int		age;
	double	height;
	double	weight;
} person ;

int main(void)
{
	person p[]  = {
			{"田中宏", 21, 185.8, 73.5},
			{"鈴木修", 20, 177.1, 66.0},
			{"森下花", 22, 168.2, 48.9}
	};

	int size = countof(p);
	for(int i=0; i<size; i++){
		printf("%s %d %7.1f %7.1f\n",
				p[i].name, p[i].age, p[i].height, p[i].weight);
	}
	return 0;
}
