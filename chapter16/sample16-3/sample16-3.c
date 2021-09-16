#include <stdio.h>
double triangle(double a, double h);	// 関数プロトタイプ宣言

int main(void)
{
	double s = triangle(5.1, 3.4);		// 三角形の面積を計算する
	printf("面積=%5.2f\n", s);
	return 0;
}
double triangle(double a, double h){	// 三角形の面積を計算する
	double s = a * h / 2;
	return s;
}

