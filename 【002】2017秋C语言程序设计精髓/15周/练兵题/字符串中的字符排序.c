/*题目内容：

编写一个函数，对一个字符串中的字符进行升序排序，并输出字符排序后的字符串，字符串长度小于20。

程序运行结果如下：

Input a string:

friend↙

definr



输入提示信息："Input a string:\n"

输入格式:

字符串输入采用：gets()函数

输出格式："%s"

为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。*/
#include <stdio.h>
#include <string.h>
#define N 25
int main(){
	char a[N];
	char t;
	printf("Input a string:\n");
	gets(a);
	for(int i=0;i<strlen(a)-1;i++){
		for(int j=0;j<strlen(a)-i-1;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	puts(a);
	return 0;
}