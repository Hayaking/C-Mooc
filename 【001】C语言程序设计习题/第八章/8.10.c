#include <stdio.h>

int main(){
	int n,sum1=0,sum2=0;
	int a[50][50]={0};
	int i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(int j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
	for(i=0;i<n;i++)
		sum1 +=a[i][i];
	for(i=n-1,j=0;i>=0;i--,j++)
		sum2 +=a[j][i];
	printf("%d %d\n",sum1,sum2);
	return 0;
}