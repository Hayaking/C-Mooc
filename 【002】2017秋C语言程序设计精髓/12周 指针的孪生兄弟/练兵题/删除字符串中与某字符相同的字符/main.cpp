#include <stdio.h>
#include <string.h>
int main(){
	char ch[1000],target;
	int len;
	printf("Input a string:\n");
	gets(ch);
	printf("Input a character:\n");
	target = getchar();
	len = strlen(ch);
	for(int i=0;i<len;i++){
		if(target==ch[i]){
			for(int j=i;j<len;j++){
				ch[j]=ch[j+1];
			}
		}
	}
	printf("Results:%s\n",ch);
	return 0;
}