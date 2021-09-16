#include <stdio.h>

#define  PI		3.14;

int main(void) 
{
	double r;
	printf("半径>");scanf("%lf", &r);
	double s = r * r * PI;
	printf("円の面積 = %7.3f", s);
	return 0;
}
