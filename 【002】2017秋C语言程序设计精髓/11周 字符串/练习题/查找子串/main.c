#include <stdio.h>
#include <string.h>

int SearchString(char str[], char str_son[]);
int main(){
	char str[90],str_son[90];
	printf("Input a string:");
	gets(str);
	printf("Input another string:");
	gets(str_son);
	if(SearchString(str,str_son)==-1)	return 0;
	else
		printf("Searching results:%d\n",SearchString(str,str_son));
	return 0;
}
int SearchString(char str[], char str_son[]){
	int i,j=0,pos=-1;
	for(i=0;i<strlen(str);i++){
		if(str[i]==str_son[j])pos=i,j++;
	}
	if(pos==-1){printf("Not found!\n");return -1;}
	//printf("%d,%d\n",pos,j);
	return pos-j+2;

}