#include <stdio.h>
#include <stdint.h>
#include <stddef.h>

int main(void) 
{
	printf("%zu バイト\n", sizeof(intmax_t));
	printf("%zu バイト\n", sizeof(intptr_t));
	printf("%zu バイト\n", sizeof(ptrdiff_t));
	printf("%zu バイト\n", sizeof(size_t));
	return 0;
}
