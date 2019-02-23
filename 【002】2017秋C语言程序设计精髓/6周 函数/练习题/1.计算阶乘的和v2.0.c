/*题目内容：
假设有这样一个三位数m，其百位、十位和个位数字分别是a、b、c，如果m= a!+b!+c!，则这个三位数就称为三位阶乘和数（约定0!=1）。请编程计算并输出所有的三位阶乘和数。
函数原型： long Fact(int n)；
函数功能：计算n的阶乘

输入格式: 无
输出格式："%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

long Fact(int n);

int main()
{
	int a,b,c,m;
	for(m=100;m<=999;m++)
	{
		a=m/100;
		b=m/10%10;
		c=m%10;
		if(m==Fact(a)+Fact(b)+Fact(c))
			printf("%d\n",m);
	}
	return 0;
}

long Fact(int n)
{
	long num=1;
	int i;
	if (n==0)
	{
		return 1;
	}
	for ( i= 1; i <= n; i++)
	{
		num *=i;
	}
	return num;
}