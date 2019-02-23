#include<stdio.h>
#define max 1000
int temp[max],index=0;
int Qm(int num);
int search(int num);
int main(){
	int n;
	printf("Input n:\n");
	scanf("%d",&n);
	for(int num=0;num<n;num++){
		int a=Qm(num),b=Qm(a);
		if(b==num && a!=b && search(num)){
			temp[index]=a;
			printf("(%d,%d)\n",num,a);
		}
	}
	return 0;
}
int Qm(int num){
	int sum=0;
	for(int i=1;i<num;i++)
		if(num%i==0)	sum+=i;
	return sum;
}
int search(int num){
	for(int i=0;i<=index;i++)
		if(num==temp[i])	return 0;
	return 1;
}