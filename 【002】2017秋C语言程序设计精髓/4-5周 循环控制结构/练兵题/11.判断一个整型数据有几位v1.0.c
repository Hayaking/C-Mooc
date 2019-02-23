/*题目内容：
从键盘输入一个整型数据(int型)，编写程序判断该整数共有几位。例如，从键盘输入整数16644,该整数共有5位。

程序运行结果示例1：
Please enter the number:
21125↙
21125: 5 bits

程序运行结果示例2：
Please enter the number:
-12234↙
-12234: 5 bits

输入提示信息："Please enter the number:\n"
输入格式: "%d"
输出格式："%d: %d bits\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>

int fl(int num);
int main()
{
	int user_num,n;
	printf("Please enter the number:\n");
	scanf("%d",&user_num);
	n=fl(abs(user_num));
	printf("%d: %d bits\n",user_num,n);
	return 0;
}

int fl(int num)
{
	int i=0;
	for(;num>0;i++)
	{
		num /=10;
	}
	return i;
}