#include <stdio.h>
void sub2(void);

extern int number;
void sub2(void){
	number +=100;
}
