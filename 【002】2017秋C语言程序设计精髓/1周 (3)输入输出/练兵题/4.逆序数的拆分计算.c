/*题目内容：
从键盘输入一个4位数的整数，编程计算并输出它的逆序数（忽略整数前的正负号）。例如，输入-1234，忽略负号，由1234分离出其千位1、百位2、十位3、个位4，然后计算4*1000+3*100+2*10+1 = 4321，并输出4321。再将得到的逆序数4321拆分为两个2位数的正整数43和21，计算并输出拆分后的两个数的平方和的结果。

以下是程序的运行结果示例：
Input x:
-1234↙
y=4321
a=43,b=21
result=2290

输入提示信息："Input x:\n"
输入格式： "%d"
输出格式：
逆序数输出格式："y=%d\n"
逆序数拆分后的输出格式："a=%d,b=%d\n"
平方和的输出格式："result=%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/

#include <stdio.h>
#include <math.h>
int main(){
	int num,a,b,c,d,aa,bb;
	printf("Input x:\n");
	scanf("%d",&num);
	num=abs(num);
	a=num%10;
	b=num/10%10;
	c=num/100%10;
	d=num/1000;
	printf("y=%d\n",d+c*10+b*100+a*1000);
	aa=a*10+b; bb=c*10+d;
	printf("a=%d,b=%d\n",aa,bb);
	num=pow(aa,2)+pow(bb,2);
	printf("result=%d\n",num);
	return 0;
}