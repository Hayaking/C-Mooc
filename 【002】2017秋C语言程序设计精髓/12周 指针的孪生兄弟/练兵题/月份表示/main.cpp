#include <stdio.h>

int main(){
	const char month[][20]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int n;
	printf("Input month number:\n");
	scanf("%d",&n);
	if(n<1 || n>12)	printf("Illegal month\n");
	else printf("month %d is %s\n",n,month[n-1]);
	return 0;
}