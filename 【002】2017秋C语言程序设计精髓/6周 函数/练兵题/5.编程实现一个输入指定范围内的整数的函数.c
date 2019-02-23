/*题目内容：
编程实现一个输入指定范围内的整数的函数getint，其完整的函数原型为：int getint(int min, int max);，它负责接收用户的输入进行验证，保证接收的一定是一个介于min和max之间（[min, max]区间内）的一个整数并最后返回该整数。如果用户输入不合法，则会提示继续输入，直到输入合法时为止。要求编写完整的程序并测试你所写的getint函数。

程序的运行结果示例：
Please enter min,max:
3,100↙
Please enter an integer [3..100]:
-2↙
Please enter an integer [3..100]:
0↙
Please enter an integer [3..100]:
116↙
Please enter an integer [3..100]:
58↙
The integer you have entered is:58

输入提示信息："Please enter min,max:\n"
               "Please enter an integer [%d..%d]:\n"
输入格式:
输入数据区间的最小值和最大值："%d,%d"
输入指定范围内的整数： "%d"
输出格式："The integer you have entered is:%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

int getint(int min, int max);
int main()
{
	int min,max;
	printf("Please enter min,max:\n");
	scanf("%d,%d",&min,&max);
	printf("The integer you have entered is:%d\n",getint(min,max));

	return 0;
}
int getint(int min, int max)
{
	int user_num;
	do
	{
		printf( "Please enter an integer [%d..%d]:\n",min,max);
		scanf("%d",&user_num);
	}while(user_num<min || user_num>max);
	return user_num;
}