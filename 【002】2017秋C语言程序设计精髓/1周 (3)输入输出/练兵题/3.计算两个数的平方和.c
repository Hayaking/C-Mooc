/*题目内容：
从键盘读入两个实数，编程计算并输出它们的平方和，要求使用数学函数pow(x,y)计算平方值，输出结果保留2位小数。 程序中所有浮点数的数据类型均为float。
提示：使用数学函数需要在程序中加入编译预处理命令 #include <math.h>

以下为程序的运行结果示例：
Please input x and y:
1.2,3.4↙
Result=13.00

输入格式: "%f,%f"
输出格式：
输入提示信息："Please input x and y:\n"
输出格式："Result=%.2f\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>
int main(){
	float a,b;
	printf("Please input x and y:\n");
	scanf("%f,%f",&a,&b);
	printf("Result=%.2f\n",pow(a,2)+pow(b,2));
	return 0;
}