#include <stdio.h>
#define max 10000
#define swap(a,b,t)    t=a,a=b,b=t;
int main(){
	int n,t;
	int num[max];
	printf("Input n:");
	scanf("%d",&n);
	printf("Input %d numbers:",n);
	for(int i=0;i<n;i++)	scanf("%d",&num[i]);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++)
			if(num[j]>num[j+1])    swap(num[j],num[j+1],t);
	}
	printf("Sorting results:");
	for(int i=1;i<=n;i++)
		printf("%4d",num[i]);
	return 0;
}