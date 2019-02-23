/*题目内容：
从键盘读取用户输入直到遇到#字符，编写程序统计读取的空格数目、读取的换行符数目以及读取的所有其他字符数目。(要求用getchar()输入字符)
程序运行结果示例1：
Please input a string end by #:
abc def↙
jklm op↙
zkm #↙
space: 3,newline: 2,others: 15
程序运行结果示例2：
Please input a string end by #:
hello friend!#↙
space: 1,newline: 0,others: 12

输入提示信息："Please input a string end by #:\n"
输入格式: getchar()
输出格式： "space: %d,newline: %d,others: %d\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/
#include<stdio.h>

int main()
{
	int ch,x1,x2,x3;
	x1=x2=x3=0;
	printf("Please input a string end by #:\n");
	do{
		ch=getchar();
		if (ch==' ') x1++;
		else if (ch=='\n') x2++;
		else if(ch!='#') x3++;

	}while(ch!='#');
	printf("space: %d,newline: %d,others: %d\n",x1,x2,x3);
	return 0;
}