/*题目内容：
从键盘任意输入一个整数n，编程计算并输出1~n之间的所有素数之和。
函数原型：int IsPrime(int x);
函数功能：判断x是否是素数，若函数返回0，则表示不是素数，若返回1，则代表是素数

程序运行结果示例1：
Input n:8↙
sum=17

程序运行结果示例2：
Input n:10↙
sum=17

程序运行结果示例3：
Input n:-12↙
sum=0
输入提示信息："Input n:"
输入格式："%d"
输出格式："sum=%d\n"
 为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。         
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>

int IsPrime(int x);

int main ()
{
	int user_num,sum=0;
	printf("Input n:");
	scanf("%d",&user_num);
	if (user_num<2)
	{
		printf("sum=%d\n",0);
		return 0;
	}
	while (user_num)
	{
		if(IsPrime(user_num)==1)
		{
			sum +=user_num;
			//printf("%d\n",user_num );
		}
		user_num--;
	}
	printf("sum=%d\n",sum);
	return 0;
}
int IsPrime(int x)
{
	int i;
	if (x==0 ||x==1 )
		return 0;
	if(x==2)
		return 1;
	for(i=2;i<=sqrt((double)x)+1;i++)
	{
		//printf("x=%d-----i=%d-----%lf\n",x,i,sqrt((double)x));
		if(x%i==0)
			return 0;//被整除,返回0,x不是质数
	}
	return 1;//没被整除,返回1,x是质数

}