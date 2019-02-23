#include <stdio.h>
#include <string.h>
int main(){
	const char T[][20]={"Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday"};
	char ch[20];
	printf("Please enter a string:\n");
	gets(ch);
	for(int i=0;i<7;i++){
		if(strcmp(ch,T[i])==0) {   
			printf("%s is %d\n",ch,i);
			return 0;
		}
	}
	printf("Not found!\n");
	return 0;
}