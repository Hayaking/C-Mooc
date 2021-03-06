/*题目内容：
从键盘上输入一个4位数的整数n，编写程序将其拆分为两个2位数的整数a和b，计算并输出拆分后的两个数的加、减、乘、除和求余运算的结果。例如n=-4321,设拆分后的两个整数为a,b，则a=-43,b=-21。除法运算结果要求精确到小数点后2位,数据类型为float。求余和除法运算需要考虑除数为0的情况，即如果拆分后b=0,则输出提示信息"The second operater is zero!"

程序的运行结果示例1：
Please input n:
1200↙
12,0
sum=12,sub=12,multi=0
The second operator is zero!

程序的运行结果示例2：
Please input n:
-2304↙
-23,-4
sum=-27,sub=-19,multi=92
dev=5.75,mod=-3

输入提示信息："Please input n:\n"
输入格式: "%d"
输出格式：
拆分后的两个整数的输出格式："%d,%d\n"
加法、减法、乘法的输出格式："sum=%d,sub=%d,multi=%d\n"
除法和求余的输出格式："dev=%.2f,mod=%d\n"
除数为0的提示信息："The second operator is zero!\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。

时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>

int main()
{
	int num,a,b,ch;
	float dev;
	printf("Please input n:\n");
	scanf("%d",&num);
	if(num>0){
		ch=1;
	}
	else{
		ch=-1;
	}
	num = abs(num);
	a=num/100*ch;
	b=num%100*ch;
	printf("%d,%d\n",a,b);
	printf("sum=%d,sub=%d,multi=%d\n",a+b,a-b,a*b);
	if(b==0){
		printf("The second operator is zero!\n");
		return 0;
	}
	printf("dev=%.2f,mod=%d\n",(float)a/b,a%b);
	return 0;
}