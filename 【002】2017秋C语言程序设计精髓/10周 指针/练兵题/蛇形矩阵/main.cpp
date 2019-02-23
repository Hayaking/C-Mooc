#include<stdio.h>
#define N 100
void ZigzagMatrix(int a[][N], int n);
int main(){
	int n;
	int a[N][N];
	printf("Input n:\n");
	if(scanf("%d",&n)==0 ||n>100 || n<0)	printf("Input error!\n");
	else    ZigzagMatrix(a,n);
	return 0;
}
void ZigzagMatrix(int a[][N], int n){
	int index=0;
	int i,j,k;
	for(i=0;i<n;i++){
		j=0,k=0;
		if(i==0) a[j][i]=++index;
		else if(i%2==0) {
			j=i;
			for(;j>=0;j--,k=i-j)	a[j][k]=++index;
		}
		else{
			k=i;
			for(; k>=0;k--,j=i-k)	a[j][k]=++index;
		}
	}
	int v=1;
	for(i;i<2*n-1;i++){
		j=1,k=1;
		if(i%2==0){
			j=i-v,k=i-j;
			for(;k<=i-v;k++,j=i-k) a[j][k]=++index/*,printf("%d,%d\t",j,k)*/;
			//printf("\n");
		}
		else{
			k=i-v,j=i-k;
			for(;j<=i-v;j++,k=i-j) a[j][k]=++index/*,printf("%d,%d\t",j,k)*/;
			//printf("\n");
		}
		v++;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			if(a[i][j] !=0)	printf("%4d",a[i][j]);
		printf("\n");
	}
}