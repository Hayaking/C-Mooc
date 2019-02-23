#include <stdio.h>
#define n 40
int main(){
	int a[n][n]={0};
	int user_n;
	scanf("%d",&user_n);
	for(int i=0;i<user_n;i++)
		a[i][0]=1;
	for(int i=0;i<user_n;i++)
		a[i][i]=1;
	for(int i=2;i<n;i++){
		for(int j=1;j<i;j++){
			if(i!=j && j!=0)
				a[i][j] =a[i-1][j]+a[i-1][j-1];
		}	
	}
	for(int i=0;i<user_n;i++){
		for(int j=0;j<user_n;j++){
			if(j<=i)
				printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}