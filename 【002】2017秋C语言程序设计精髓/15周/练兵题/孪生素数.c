
#include "stdio.h"
#include "math.h"
int judge(long int num);
int main(){
	long int c,d,b=0,i;
	long int a[1000];
	int count=0;
	printf("please input c,d(c>2):\n");
	scanf("%ld,%ld",&c,&d);
	for(i=c;i<=d;i++)
		if(judge(i)) a[b++]=i;
	for(i=0;i<b;i++)
		if(a[i+1]-a[i]==2)	printf("(%ld,%ld)\n",a[i],a[i+1]),count++;
	printf("total=%d\n",count);
	return 0;
}
int judge(long int num){
	int i;
	for(i=2;i<=sqrt((double)num);i++)
		if(num%i==0)	return 0;
	return 1;
}

