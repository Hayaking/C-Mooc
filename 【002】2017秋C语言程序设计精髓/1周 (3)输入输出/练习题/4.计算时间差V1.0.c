/*题目内容：
编程从键盘任意输入两个时间（例如4时55分和1时25分），计算并输出这两个时间之间的间隔。要求不输出时间差的负号。
程序的运行结果示例1： 
Input time one(hour, second):4,55↙
Input time two(hour, second):1,25↙
3 hour 30 second
程序的运行结果示例2： 
Input time one(hour, second):1,56↙
Input time two(hour, second):3,25↙
1 hour 29 second

输入提示信息："Input time one(hour, second):"
               "Input time two(hour, second):"
输入格式："%d,%d"
输出格式："%d hour %d second\n"*/
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,d,mun;
	int one,two;
	int e,f;
	printf("Input time one(hour, second):");
	scanf("%d,%d",&a,&b);
	printf("Input time two(hour, second):");
	scanf("%d,%d",&c,&d);
	one=a*3600+b*60;
	two=c*3600+d*60;
	mun=abs( one-two);
	e=mun/3600;
	f=mun/60-e*60;
	printf("%d hour %d second\n",e,f);
}