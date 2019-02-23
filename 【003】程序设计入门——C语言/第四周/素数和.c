#include <stdio.h>
#include <math.h>
int zhishu(int n);
int list[205];
int main(){
	int n,m,sum=0;
	for(int j=0,i=2 ;j<=200;i++){
		if(zhishu(i)) list[j]=i,j++;
	}
	scanf("%d%d",&n,&m);
	n--;m--;
	for(n;n<=m;n++)
		sum +=list[n];
	printf("%d\n",sum);
}

int zhishu(int n){
	for(int i=2;i<=sqrt((double)n);i++)
		if(n%i==0)	return 0;
	return 1;
}