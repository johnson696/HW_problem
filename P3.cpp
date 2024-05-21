#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int main(){
	int num_s;
	scanf("%d",&num_s);
	char str[num_s][100];
	while (getchar() != '\n');
	for (int i = 0; i < num_s; i++){
		fgets(str[i], 100, stdin);
		size_t len = strlen(str[i]);
		if (len > 0 && str[i][len - 1] == '\n') {
            str[i][len - 1] = '\0';
        }
		int L = 0, M = 0;
        for (int j = 0; str[i][j] != '\0'; j++){
            L++;
            if (isalpha(str[i][j])) {
                M++;
            }
        }
        printf("L=%d\n", L);
        printf("M=%d\n", M);
	}
	return 0;
}
