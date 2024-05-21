#include <stdio.h>
#include <stdlib.h>
int main(){
	int matrix[5][5];
	for (int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	for (int j = 0; j < 5; j++){
		for (int i = 0; i < 5; i++){
			printf("%d ",matrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
