/*题目内容：
从键盘输入一个正整数number，求其中含有指定数字digit的个数。例如：从键盘输入正整数number=1222,若digit=2，则1223中含有 3个2，要求用函数实现。函数原型为：int CountDigit(int number,int digit)；
程序运行结果示例1：
Input m,n:
1222,2↙
3
程序运行结果示例2：
Input m,n:
1234,6↙
0

输入提示信息："Input m,n:\n"
输入格式: "%d,%d"
输出格式： "%d\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/
#include<stdio.h>

int CountDigit(int num,int target);
int main()
{
	int user_num,target;
	printf("Input m,n:\n");
	scanf("%d,%d",&user_num,&target);
	printf("%d\n",CountDigit(user_num,target));
	return 0;
}
int CountDigit(int num,int target)
{
	int temp,count=0;
	while(num)
	{
		temp=num%10;
		num /=10;
		if(temp==target)	count++;

	}
	return count;
}