#include <stdio.h>
int main(void) {
	// ここにコードを挿入
	char name1[1000], name2[1000];
	printf("姓 と名を半角の空白で区切って入力>");
	scanf("%s %s", name1, name2);
	printf("%s %sさんですね", name1, name2);
	return 0;
}
