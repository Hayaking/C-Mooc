#include <stdio.h>
#include <string.h>
int main(){
	char c[5][20];
	char min[20];
	printf("Input five countries' names:\n");
	for(int i=0;i<5;i++)
		gets(c[i]);
	strcpy(min,c[0]);
	for(int i=0;i<5;i++)
		if(strcmp(min,c[i])>0)	strcpy(min,c[i]);
	printf("The minimum is:%s\n",min);
	return 0;
}