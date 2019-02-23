#include <stdio.h>
#include <string.h>

int judge_hws(char num[]);
int main(){
	char a[100];
	printf("Input string:");
	gets(a);
	if(judge_hws(a))	printf("Yes!\n");
	else printf("No!\n");
	return 0;
}
int judge_hws(char num[]){
	int len=strlen(num),mid;
	if(len%2==0)	mid=len/2;
	else mid=(len-1)/2;
	for(int i=0,j=len-1;mid;mid--,i++,j--)
		if(num[i]!=num[j])	return 0;
	return 1;
}