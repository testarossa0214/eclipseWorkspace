#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	double x[] = {1.47, 2.63, -3.12, 2.81};
	char c[] = {'H', 'E', 'L', 'L', 'O'};
	short sh[] = {2256, -2048, -1024, 3512};
	printf("%f,%f,%f,%f\n", x[0], x[1], x[2], x[3]);
	printf("%c,%c,%c,%c,%c\n", c[0], c[1], c[2], c[3], c[4]);
	printf("%hd,%hd,%hd,%hd\n",sh[0],sh[1],sh[2],sh[3]);
	return 0;
}
