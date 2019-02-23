#include <stdio.h>

int main(){
	int a[6][6];
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			a[i][j]=i * n + j + 1;
		}
	}
	printf("The original matrix is:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	printf("The changed matrix is:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}