#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100
int judge_ss(int num);
int judge_hws(char num[]);
int main(){
	int n,count=0;
	char a[max];
	printf("Input n:\n");
	scanf("%d",&n);
	for(int i=10;i<n;i++){
		if(judge_ss(i)){
			sprintf(a,"%d",i);
			if(judge_hws(a))
				printf("%4d",i),count++;
		}
	}
	printf( "\ncount=%d\n",count);
	return 0;
}
int judge_ss(int num){
	for(int i=2;i<num;i++)
		if(num%i==0)	return 0;
	return 1;
}
int judge_hws(char num[]){
	int len=strlen(num),mid;
	if(len%2==0)	mid=len/2;
	else mid=(len-1)/2;
	for(int i=0,j=len-1;mid;mid--,i++,j--)
		if(num[i]!=num[j])	return 0;
	return 1;
}