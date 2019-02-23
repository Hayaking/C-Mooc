#include <stdio.h>
#define n 40
int main(){
	int a[n][n]={0};
	int user_n;
	int i, j;
	while (scanf("%d", &user_n) && user_n>0) {
		for (i = 0; i<user_n; i++)
			a[i][0] = 1;
		for (i = 0; i<user_n; i++)
			a[i][i] = 1;
		for (i = 2; i<n; i++) {
			for (j = 1; j<i; j++) {
				if (i != j && j != 0)
					a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
			}
		}
		for (i = 0; i<user_n; i++) {
			for (j = 0; j<user_n; j++) {
				if (j <= i)
					printf("%d", a[i][j]);
				if (i != 0 && i!=j)
					printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}