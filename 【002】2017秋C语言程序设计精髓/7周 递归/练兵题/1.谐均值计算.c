/*题目内容：
两数值的谐均值可以这样计算：首先对两数值的倒数取平均值，最后再取倒数。编写一个带有两个double参数的函数，计算这两个参数的谐均值。函数原型为：
double Calculate(double x,double y);
程序运行结果示例1：
Input two doubles:
3 4↙
1/((1/x+1/y)/2) = 3.429
程序运行结果示例2：
Input two doubles:
6.5 3.8↙
1/((1/x+1/y)/2) = 4.796

输入提示信息："Input two doubles:\n"
输入格式: "%lf%lf"
输出格式："1/((1/x+1/y)/2) = %0.3f\n"   （注意：等号的两边各有一个空格）
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/

#include <stdio.h>

double Calculate(double x,double y);
int main()
{
	double x,y;
	printf("Input two doubles:\n");
	scanf("%lf%lf",&x,&y);
	printf("1/((1/x+1/y)/2) = %0.3f\n" ,Calculate(x,y));
	return 0;

}
double Calculate(double x,double y)
{
	return 1/((1/x+1/y)/2);
}