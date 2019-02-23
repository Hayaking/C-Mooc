/*题目内容：
编写一个函数，函数原型：void Chline(char ch, int column, int row);
该函数的3个参数是一个字符和两个整数。字符参数是需要输出的字符。第一个整数说明了在每行中该字符输出的个数，而第二个整数指的是需要输出的行数。编写一个调用该函数的程序。
程序运行结果示例1：
input a char:
k↙
input column and row:
2 3↙
kk
kk
kk
程序运行结果示例2：
input a char:
a↙
input column and row:
3 2↙
aaa
aaa

字符输入提示信息："input a char:\n"
行列数输入提示信息："input column and row:\n"
输入格式:
"%c"
"%d%d"
输出格式："%c"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

void Chline(char ch, int column, int row);
int main()
{
	char ch;
	int column,row;
	printf("input a char:\n");
	scanf("%c",&ch);
	printf("input column and row:\n");
	scanf("%d%d",&column,&row);
	Chline(ch,column,row);
	return 0;

}
void Chline(char ch, int column, int row)//字符，个数，行数
{
	for(int i=0;i<row;i++)
	{
		
		for(int j=0;j<column;j++)	
		printf("%c",ch);
		printf("\n");
	}

}