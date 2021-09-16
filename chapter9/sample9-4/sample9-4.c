#include <stdio.h>
#include "util.h"
int main(void) 
{
	 int numbers[] = {10, 20, 30, 40, 50};
	 int size = countof(numbers);
	 for(int i=size-1; i>=0; i--){
		 printf("%3d", numbers[i]);
	 }
	return 0;
}
