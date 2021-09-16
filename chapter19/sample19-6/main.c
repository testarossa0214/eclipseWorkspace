#include <stdio.h>
void sub1(void);
#include "sub.h"		// 内容は省略

int number = 100;
//static int number = 100;
int main(void) 
{
	sub1();
	printf("number = %d\n", number);
	return 0;
}
void sub1(void)
{
	number += 100;
	sub2();
}
