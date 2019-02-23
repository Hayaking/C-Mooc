/*题目内容：
从键盘输入一个整型数据(int型)，编写程序判断该整数共有几位，并输出包含各个数字的个数。例如，从键盘输入整数16644,该整数共有5位，其中有1个1,2个6,2个4。

程序运行结果示例1：
Please enter the number:
12226↙
12226: 5 bits
1: 1
2: 3
6: 1

程序运行结果示例2：
Please enter the number:
-12243↙
-12243: 5 bits
1: 1
2: 2
3: 1
4: 1

输入格式: "%d"
输出格式：
输入提示信息："Please enter the number:\n"
判断该整数共有几位："%d: %d bits\n"
包含数字0的个数："0: %d\n"
包含数字1的个数："1: %d\n"
包含数字2的个数："2: %d\n"
包含数字3的个数："3: %d\n"
包含数字4的个数："4: %d\n"
包含数字5的个数："5: %d\n"
包含数字6的个数："6: %d\n"
包含数字7的个数："7: %d\n"
包含数字8的个数："8: %d\n"
包含数字9的个数："9: %d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>

int a[10]={0};
int fl(int num);
int main(int argc, char const *argv[])
{
	int user_num,i;
	printf("Please enter the number:\n");
	scanf("%d",&user_num);
	i=fl(user_num);
	printf("%d: %d bits\n",user_num,i);
	for(int n=0;n<=9;n++)
	{
		if (a[n]!=0)
		{
			printf("%d: %d\n",n,a[n]);
		}
	}
	return 0;
}
int fl(int num){
	int i,fl_num;
	for(i=0;abs(num)>0;i++)
	{
		fl_num = abs(num)%10;
		a[fl_num]++;
		num /= 10;
	}
	return i;
}