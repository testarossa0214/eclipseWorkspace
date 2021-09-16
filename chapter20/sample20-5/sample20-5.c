#include <stdio.h>
#include <string.h>
typedef struct {		// person型を定義
	char	name[100];
	int		age;
	double	height;
	double	weight;
} person;
person newPerson(char name[], int age,
				double height,double weight); 			// 関数プロトタイプ宣言
int main(void) 
{
	person tom;
	tom = newPerson("tom", 21, 175.5, 60.2); 			// 作成して代入
	printf("%s  %d %5.1f %5.1f\n",
			tom.name, tom.age, tom.height, tom.weight);
	return 0;
}
person newPerson(char name[], int age, 				// person型の値
					double height,double weight)		// を作成して返す
{
	person p; // 変数を作成
	strcpy_s(p.name, sizeof(p.name), name);
	p.age = age;
	p.height = height;
	p.weight = weight;
	return p;	// person型の値を返す
}
