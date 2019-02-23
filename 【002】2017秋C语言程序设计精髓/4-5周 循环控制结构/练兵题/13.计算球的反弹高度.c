/*题目内容：
一个球从100米高度自由落下，每次落地后反跳回原高度的一半，再落下并反弹......，求它在第5次和第10次落地时，分别共经过了多少米？第5次和第10次反弹分别是多高？要求计算结果保留到小数点后3位。用户从键盘输入想要计算的第n次（n<=15）。程序中所有浮点数的数据类型均为float。

程序运行结果示例1：
Input:
5↙
5 times:
287.500
3.125

程序运行结果示例2：

Input:
10↙
10 times:
299.609
0.098

输入提示信息："Input:\n"
输入格式: "%d"
输出格式：
反弹次数："%d times:\n"
第n次反弹共经过多少米："%.3f\n"
第n次的反弹高度："%.3f\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	int n;
	int i;
	float distance=100,height=100,ini_value=100;
	printf("Input:\n");
	scanf("%d",&n);
	printf("%d times:\n", n);
	for(i=0;i<n-1;i++){
		distance += ini_value;
		ini_value /= 2;
	}
		 
	height /=pow(2,n);
	printf("%.3f\n", distance);
	printf("%.3f\n", height);
	return 0;
}