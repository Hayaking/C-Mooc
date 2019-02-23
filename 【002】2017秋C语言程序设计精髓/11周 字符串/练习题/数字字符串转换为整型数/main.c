#include <stdio.h>
#include <string.h>

int main(){
	char a[8];
	int flag=0;
	printf("Input a string:");
	scanf("%7s",a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='0'&&a[i]<='9')	printf("%d",a[i]-'0'),flag=1;
	}
	if(flag==1)printf("\n");
	else printf("0\n");
	return 0;
}