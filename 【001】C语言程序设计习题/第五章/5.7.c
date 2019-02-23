#include <stdio.h>

int main()
{
	char ch;
	printf("input:");
	ch=getchar();
	if(ch>=65 && ch<=90){
		ch +=32;
	}
	else if(ch>=97 && ch<=122){
		ch -=32;
	}
	else{
		printf("%c,%d\n",ch,ch);
		return 0;
	}
	printf("%c,%d\n",ch,ch);
	return 0;

	return 0;
}