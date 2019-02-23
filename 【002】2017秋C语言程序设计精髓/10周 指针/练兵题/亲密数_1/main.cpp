#include<stdio.h>

int Qm(int num);
int main(){
	int m,n;
	printf("Input m, n:\n");
	scanf("%d,%d",&m,&n);
	//printf("%d,%d\n",Qm(m),n);
	if(Qm(m)==n)	printf("Yes!\n");
	else    printf("No!\n");
	return 0;
}
int Qm(int num){
	int sum=0;
	for(int i=1;i<num;i++)
		if(num%i==0)	sum+=i;
	return sum;
}