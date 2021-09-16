#include <stdio.h>
#include "util.h"
int main(void) 
{
	char str[][100] = {
		"おはよう",
		"こんにちは",
		"こんばんは"
	};

	int size = countof(str);	 // size ← 3
	for(int i=0; i<size; i++){
		printf("%s\n", str[i]);
	}
	return 0;
}
