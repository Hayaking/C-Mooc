#include <stdio.h>
#include <string.h>
int CountRepeatStr(char str[], int *tag);
int main(){
	char ch[85];
	int pos,count;
	printf("Input a string:\n");
	gets(ch);
	count=CountRepeatStr(ch,&pos);
	printf("%c:%d\n",ch[pos],count+1);
	return 0;
}
int CountRepeatStr(char str[], int *tag){
	int max=0,count=0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]==str[i+1]) *tag=i,count++;
		else{
			if(count>max)	max=count,count=0;
               }
	}
	return max;
}