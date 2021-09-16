#include <stdio.h>
#include <string.h>
typedef struct person {	// person型を定義
	char	name[100];
	int		age;
	double	height;
	double	weight;
} person;
void newPerson(person *p,char name[], int age,		// 関数プロトタイプ宣言
						double height,double weight);
int main(void) 
{
	person tom;
	newPerson(&tom, "tom", 21, 175.5, 60.2); 			// tomに値をセットする
	printf("%s  %d %5.1f %5.1f",
			tom.name, tom.age, tom.height, tom.weight);
	return 0;
}
void newPerson(person *p,char name[], int age,		// pに引数のデータをセットする
						double height,double weight)
{
	strcpy_s(p->name, sizeof(p->name), name);
	p->age = age;
	p->height = height;
	p->weight = weight;
}
