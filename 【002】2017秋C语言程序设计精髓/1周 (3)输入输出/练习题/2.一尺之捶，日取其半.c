/*题目内容：
我国古代著作《庄子》中记载道：“一尺之捶，日取其半，万世不竭”。其含义是：对于一尺的东西，今天取其一半，明天取其一半的一半，后天再取其一半的一半的一半总有一半留下，所以永远也取不尽。请编写一个程序，使其可以计算出一条长为m的绳子，在n天之后剩下的长度。

运行结果示例1：
Input length and days:12,5↙
length=0.37500

运行结果示例2：
Input length and days:57.6,7↙
length=0.45000

输入提示信息："Input length and days:"
输入格式: "%f,%d"
输出格式："length=%.5f\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include<stdio.h>
#include<math.h>

int main()
{
	
	float len;
	int time;
	printf("Input length and days:");
	scanf("%f,%d",&len,&time);
	len = len/pow(2,time);
	printf("length=%.5f\n",len);
	

}