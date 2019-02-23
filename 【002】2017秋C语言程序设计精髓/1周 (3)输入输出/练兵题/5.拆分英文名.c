/*题目内容：
从键盘输入某同学的英文名（小写输入，假设学生的英文名只包含3个字母。如: tom），编写程序在屏幕上输出该同学的英文名，且首字母大写（如: Tom）。同时输出组成该英文名的所有英文字符在26个英文字母中的序号。
以下为程序的运行结果示例：
Input your English name:
tom↙
Tom
t:20
o:15
m:13

输入提示信息："Input your English name:\n"
输入格式： "%c%c%c"
输出格式：
首字母大写的英文姓名的输出格式："%c%c%c\n"
姓名中每个字母在26个英文字母中的序号的输出格式："%c:%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
int main(){
	char a,b,c;
	printf("Input your English name:\n");
	scanf("%c%c%c",&a,&b,&c);
	printf("%c%c%c\n",a-32,b,c);
	printf("%c:%d\n",a,a-96);
	printf("%c:%d\n",b,b-96);
	printf("%c:%d\n",c,c-96);
	return 0;
}