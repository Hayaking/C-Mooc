#include<stdio.h>
#define max 10000
int Ys(int n);
int main(){
	int n;
	printf("Input m:\n");
	scanf("%d",&n);
	if((n+1)%2==0 && n<10300)	printf("No!\n");
	else    Ys(n);
	return 0;
}

int Ys(int n){
	int sum=0,a[max]={0};
	int index=0;
	for(int i=1;i<n;i++)
		if(n%i==0)	sum+=i,a[++index]=i;
	if(sum==n){
		printf("Yes!\n");
		for(int i=1;i<=index;i++){
			if(a[i]!=0)printf("%d",a[i]);
			if(i!=index ) printf(",");
		}
		printf("\n");
	}
	else    printf("No!\n");

	return 0;
}