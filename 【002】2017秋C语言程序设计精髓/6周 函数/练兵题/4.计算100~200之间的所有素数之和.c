/*题目内容：
计算100~200之间的所有素数之和，判别一个数是否是素数请用给定的函数实现。
函数原型：int fun(int m);
说明：
  参  数：m 是要进行判断的数；
  返回值：若数 m 是素数，则返回值为1；否则返回值为0。

输入格式: 无
输出格式： "sum=%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>
int fun(int m);
int main()
{
	int sum=0;
	for(int n=100;n<=200;n++ )
	{
		if(fun(n)==1)
			sum +=n;
	}
	printf( "sum=%d\n",sum);
	
	return 0;
}
int fun(int m)
{
	for(int i=2;i<=sqrt((double)m);i++)
	{
		if(m%i==0)
			return 0;
	}
	return 1;
}