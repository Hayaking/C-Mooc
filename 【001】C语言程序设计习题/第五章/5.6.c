#include <stdio.h>

int main(){
	int year,flag;
	printf("enter year:");
	scanf("%d",&year);
	flag=year%4==0 && year%100!=0||year%400==0?1:0;
	if(flag==1)
	{
		printf("shi");
	}
	else{
		printf("bushi");
	}
	return 0;
