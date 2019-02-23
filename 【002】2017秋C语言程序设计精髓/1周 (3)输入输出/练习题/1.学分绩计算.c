/*题目内容：
已知某大学期末考试学分绩的计算公式为：学分绩 =（工科数学 * 5 + 英语 * 1.5 + 线性代数 * 3.5） / 10
请编程从键盘按顺序输入某学生的工科数学、英语和线性代数成绩，计算并输出其学分绩。

以下为程序的运行结果示例：
Input math1, English and math2:80,70,100↙
Final score = 85.50

输入提示信息："Input math1, English and math2:"
输入格式: "%d,%d,%d"
输出格式："Final score = %.2f\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include<stdio.h>

int main()
{
	int a,b,c;
	float sum;
	printf("Input math1, English and math2:");
	scanf("%d,%d,%d",&a,&b,&c);
	sum=(a*5+b*1.5+c*3.5)/10;
	printf("Final score = %.2f\n",sum);
}