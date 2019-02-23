#include <stdio.h>
#define N 100

void FindSaddlePoint(int a[][N], int m, int n);
int main(){
	int a[N][N];
	int m;

	scanf("%d",&m);
	
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++)
			scanf("%d",&a[i][j]);
	}
	FindSaddlePoint(a,m,m);
	return 0;
}

void FindSaddlePoint(int a[][N], int m, int n){
	int max,min;
	int i,j;
	int flag=0;
	for(i=0;i<m;i++){//找最大值
		max=a[i][0];
		for(j=0;j<n;j++)
			if(max<a[i][j])	max=a[i][j];
		a[i][n]=max;
	}
	for(j=0;j<n;j++){//找最小值
		min=a[0][j];
		for(i=0;i<m;i++)
			if(min>a[i][j]) min=a[i][j];
		a[m][j]=min;
	}
	//for(i=0;i<=m;i++){
	//	for(j=0;j<=n && !(i==m && j==n);j++)
	//		printf("%3d",a[i][j]);
	//	printf("\n");
	//}
	for(j=0;j<n;j++){
		for(i=0;i<m;i++){
			if(a[m][j]==a[i][n]) printf("%d %d\n",i,j),flag=1;
		}
	}
	if(flag==0)	printf("NO");
}
