/*题目内容：
利用泰勒级数计算sinx的值，要求最后一项的绝对值小于,并统计出此时累加了多少项。请用“利用前项来计算后项”的方法计算累加项，不要使用pow函数编写程序。程序中所有实数的数据类型都是double类型。


程序的运行结果示例1：
Input x:
3↙
sin(x)=0.141,count=9

程序的运行结果示例2：
Input x:
10↙
sin(x)=-0.544,count=18

输入提示信息："Input x:\n"
输入格式: "%lf"
输出格式："sin(x)=%.3f,count=%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>

double cf(double num,int n);//计算次方
double fact(double n);//计算阶乘
int main()
{
	double x,result=0;
	int cont=0;
	printf("Input x:\n");
	scanf("%lf",&x);
	int i=1,flag=1;
	double n=cf(x,i)/fact(i);
	while(fabs(n)>1e-5)
	{
		n=n*flag;
		result =result+n;
		i+=2;
		n=cf(x,i)/fact(i);
		cont++;
		flag *=-1;
		//printf("%.0lf/%.0lf+  (%d)*",pow(x,i),fact(i),flag);
	}
	printf("sin(x)=%.3f,count=%d\n",result,cont+1);

	return 0;
}

double cf(double num,int n)
{
	int temp = num;
	if(n==0)
		return 1.0;
	for(;n>1;n--)
		num *=temp;
	return num;
}
double fact(double n)
{
	double num=1;
	if(n==0) num=1;
	else{
		for(int i=1;i<=n;i++)
			num *=i;
	}
	
	
	return num;
}