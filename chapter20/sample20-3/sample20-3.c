#include <stdio.h>

struct person {
	char	name[100];
	int		age;
	double	height;
	double	weight;
};

int main(void) 
{
	struct person tom  = {"tom", 21, 175.5, 60.2};
	printf("%s  %d %5.1f %5.1f",
			tom.name, tom.age, tom.height, tom.weight);

	return 0;
}
