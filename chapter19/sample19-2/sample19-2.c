#include <stdio.h>
#define calc(x)   2*x*x+3*x+1
int main(void) 
{
	double a;
	printf("double>"); scanf("%lf", &a);
	double f = calc(a);
	printf("式の値=%f\n", f);
	return 0;
}
