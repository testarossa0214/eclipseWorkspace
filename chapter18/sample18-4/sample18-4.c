#include <stdio.h>
#include <stdlib.h>

int main(void) 
{
	int size;
	int *nptr;
	printf("データ数>");scanf("%d", &size); 	// データ数を入力
	
	nptr = (int *)malloc(size * sizeof(int));	// size × sizeof(int) バイトのメモリーを確保して、
												// そのアドレスをnptrに入れる

	if(nptr==NULL){				// 確保できない時、NULLが返る
		exit(EXIT_FAILURE);		// メモリー不足なら終了する
	}

	for(int i=0; i<size; i++){	// int型の配列として使う（処理内容に意味はありません）
		nptr[i] = 0;			// 配列表現を使える
	}

	free(nptr);					// 不要になったら開放する
	return 0;
}
