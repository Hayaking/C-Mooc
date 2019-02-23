#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char str[10];
	int i;
	const char py[][11]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu","fu"};
	gets(str);
	for(i=0;i<strlen(str);i++){
		if(str[i]=='-')	printf("%s",py[10]);
		else if(str[i]=='0') printf("%s",py[0]);
		else if(str[i]=='1') printf("%s",py[1]);
		else if(str[i]=='2') printf("%s",py[2]);
		else if(str[i]=='3') printf("%s",py[3]);
		else if(str[i]=='4') printf("%s",py[4]);
		else if(str[i]=='5') printf("%s",py[5]);
		else if(str[i]=='6') printf("%s",py[6]);
		else if(str[i]=='7') printf("%s",py[7]);
		else if(str[i]=='8') printf("%s",py[8]);
		else if(str[i]=='9') printf("%s",py[9]);
		if(i!=strlen(str)-1)	printf(" ");
	}
	return 0;
}