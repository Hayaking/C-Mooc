/*题目内容：
编写程序利用递归法实现如下所示n层嵌套平方根的计算：

递归函数原型：double Y(double x, int n)；
程序运行结果示例1：
Please input x and n:16,1↙
Result=4.00
程序运行结果示例2：
Please input x and n:16,2↙
Result=4.47
程序运行结果示例3：
Please input x and n:16,3↙
Result=4.52
程序运行结果示例4：
Please input x and n:16,0↙
Result=0.00

输入提示信息："Please input x and n:"
输入格式: "%lf,%d"
输出格式： "Result=%.2f\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>
double Y(double x, int n);
int main (){
	double x;
	int n;
	printf("Please input x and n:");
	scanf("%lf,%d",&x,&n);
	printf( "Result=%.2f\n",Y(x,n));

	return 0;

}
double Y(double x, int n){
	
	if(n>1)
		return sqrt(Y(x,n-1)+x);
	else if (n==0)
		return 0;
	return sqrt(x);
}