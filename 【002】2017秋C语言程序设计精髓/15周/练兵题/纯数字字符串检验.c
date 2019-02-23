#include <stdio.h>
#include <string.h>
#define N 25
int IsAllDigit(char p[]);/*若全由数字组成，则函数返回1，否则返回0*/
int main(){
	char a[N];
	char t;
	printf("Please input a string:\n");
	gets(a);
	if(IsAllDigit(a)) printf("The string is digit string.");
	else printf("The string is not digit string.");
	return 0;
}
int IsAllDigit(char p[]){
	for(int i=0;i<strlen(p);i++){
		if(!(p[i]>='0' && p[i]<='9'))	return 0;
	}
	return 1;
}
