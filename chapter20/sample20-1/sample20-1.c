#include <stdio.h>
struct person {				// 構造体の宣言
	char	name[100];		// 氏名
	int		age;			// 年齢
	double	height;			// 身長
	double	weight;			// 体重
};
struct person hanako;		// グローバル変数
int main(void) 
{
	static struct	person mary;	// 静的変数
	struct person tom;				// ローカル変数
	return 0;
}
