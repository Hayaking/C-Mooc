/*题目内容：
利用最大公约数的性质计算。对正整数a和b，当a>b时，若a中含有与b相同的公约数，则a中去掉b后剩余的部分a-b中也应含有与b相同的公约数，对a-b和b计算公约数就相当于对a和b计算公约数。反复使用最大公约数的上述性质，直到a和b相等为止，这时，a或b就是它们的最大公约数。这三条性质，也可以表示为： 
性质1  如果a>b，则a和b与a-b和b的最大公约数相同，即Gcd(a, b) = Gcd(a-b, b)
性质2  如果b>a，则a和b与a和b-a的最大公约数相同，即Gcd(a, b) = Gcd(a, b-a)
性质3  如果a=b，则a和b的最大公约数与a值和b值相同，即Gcd(a, b) = a = b

程序运行结果示例1：
Input a,b:16,24↙
8

程序运行结果示例2：
Input a,b:-2,-8↙
Input error!

输入提示信息："Input a,b:"
输入错误提示信息："Input error!\n"
输入格式:"%d,%d"
输出格式："%d\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/

#include <stdio.h>
#include <math.h>
int Gcd(int a,int b);
int main()
{
	int a,b;
	printf("Input a,b:");
	scanf("%d,%d",&a,&b);
	if(a>0 && b>0)
		printf("%d\n",Gcd(a,b));
	else
		printf("Input error!\n");
	return 0;
}
int Gcd(int a,int b)
{
	
	if(a>b)
		return Gcd(a-b,b);
	if(b>a)
		return Gcd(a,b-a);
	if(a==b)
		return a;
}