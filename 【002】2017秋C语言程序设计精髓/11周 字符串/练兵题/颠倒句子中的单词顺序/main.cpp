#include <stdio.h>
#include <string.h>
#define judeg_range sentence[i]=='.' || sentence[i]==',' || sentence[i]=='!' || sentence[i]=='?'
int main(){
	char sentence[110];
	char word[50][20]={'0'};
	int blank[50]={0};
	int i=0,j=1,h=0,l=0;
	char flag;
	printf("Input a sentence:");
	gets(sentence);
	while(1){
		if(judeg_range){
			flag=sentence[i];
			break;
		}	
		else if(sentence[i]==' ')
			word[h][l]='\0',h++,l=0;
		else
			word[h][l++]=sentence[i];
		i++;
	}
	while(h>=0){
		printf("%s",word[h--]);
		if(h!=-1)	printf(" ");
		else    printf("%c\n",flag);
	}
	return 0;
}