#include <stdio.h>
int main(void) 
{
	int dt[] = { 75, 80, 65, 91, 70 };
	for(int i=0; i<5; i++){
		printf("%d\n", dt[i]);	 // iは0,1,2,3,4と変化する
	}
	return 0;
}
