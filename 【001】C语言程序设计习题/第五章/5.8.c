#include <stdio.h>

int main()
{
	char ch;
	printf("input:");
	ch=getchar();
	if(ch>=48 && ch<=57){
		printf("数字");
	}
	else if(ch>=65 && ch<=90){
		printf("大写字母");
	}
	else if(ch>=97 && ch<=122){
		printf("小写字母");
	}
	else if(ch==32){
		printf("空格");
	}
	else{
		printf("其它");
	}
	return 0;
}