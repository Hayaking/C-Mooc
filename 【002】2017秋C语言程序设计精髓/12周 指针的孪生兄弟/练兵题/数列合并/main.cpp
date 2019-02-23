#include <stdio.h>
#define max 15
#define swap(x,y,t)	t=x,x=y,y=t;
int main(){
	int a[max]={0},m,n,i,t=0;
	printf("Input m,n:");
	scanf("%d,%d",&m,&n);
	if(m>5  || n>5)	return 0;
	printf("Input array a:");
	for(i=0;i<m;i++)	scanf("%d",&a[i]);
	printf("Input array b:");
	for(i;i<m+n;i++)	scanf("%d",&a[i]);
	for(i=0;i<m+n;i++){
		for(int j=0;j<m+n-1;j++){
			if(a[j]<a[j+1])	swap(a[j],a[j+1],t);
		}
	}
	for(i=0;i<m+n;i++)	printf("%4d",a[i]);
	//printf("\n");
	return 0;
}
