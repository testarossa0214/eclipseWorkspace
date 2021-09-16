#include <stdio.h>

struct person {			// 構造体の宣言
	char	name[100];	// 氏名
	int		age;		// 年齢
	double	height;		// 身長
	double	weight;		// 体重
};

int main(void) 
{
	struct person tom = {"tom", 21, 175.5, 60.2};	// 完全指定
	struct person ken = { .age=21, .name="ken" };	// 部分指定
	return 0;
}
