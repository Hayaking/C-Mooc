/*题目内容：
输入一些整数，编程计算并输出其中所有正数的和，输入负数时不累加，继续输入下一个数。输入零时，表示输入数据结束。要求最后统计出累加的项数。
程序运行结果示例：
Input a number:
1↙
Input a number:
3↙
Input a number:
4↙
Input a number:
2↙
Input a number:
-8↙
Input a number:
-9↙
Input a number:
0↙
sum=10,count=4

输入提示信息： "Input a number:\n"
输入格式:  "%d"
输出格式： "sum=%d,count=%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>
int main(){
	int num,sum=0,count=0;
	while(printf("Input a number:\n") && scanf("%d",&num) && num)
		if(num>0)    sum +=num,count++;
	printf( "sum=%d,count=%d\n",sum,count);
	return 0;
}