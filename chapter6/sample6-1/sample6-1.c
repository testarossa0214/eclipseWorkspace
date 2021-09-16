#include <stdio.h>
#include <limits.h>
int main(void) 
{
	short			s	= SHRT_MAX;					// shortの最大値
	unsigned		u	= UINT_MAX;					// unsignedの最大値
	long long		ll	= LLONG_MAX;				// long longの最大値
	long double	ld	= 123.45678;				// long doubleの値

	printf("s  = %hd\n", s);	// short
	printf("u  = %u\n", u);		// unsigned
	printf("ll = %lld\n", ll);	// long long
	printf("ld = %Lf\n", ld);	// long double
	return	0;
}
