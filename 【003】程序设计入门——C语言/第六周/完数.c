#include <stdio.h>

int f(int num);
int main(int argc, char const *argv[])
{
	int n,m,count=0;
	scanf("%d%d",&n,&m);
	for(n;n<=m;n++)
		if(f(n)){
			if(count==0)	printf("%d",n);
			else	printf(" %d",n);
			count++;
		}	
	if(count==0)	printf("NIL\n");
	return 0;
}
int f(int num){
	int i,sum=0;
	for(i=1;i<num;i++)
		if(num%i==0)	sum+=i;
	if(sum==num)	return 1;
	else	return 0;
}