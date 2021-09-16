#include <stdio.h>

void sub1(void);
void sub2(void);

void sub1(void)
{
	puts("-- sub1");
	sub2();

}
void sub2(void)
{
	puts("-- sub2");
}
