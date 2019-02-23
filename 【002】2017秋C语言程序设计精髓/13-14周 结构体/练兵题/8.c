/*题目内容：
按照如下函数原型编写子函数计算正整数a和b的所有公约数。第一次调用，返回最大公约数。以后只要再使用相同参数调用，每次返回下一个小一些的公约数。无公约数时,函数CommonFactors()返回-1，主函数中不输出任何信息。
函数原型: int CommonFactors(int a, int b)
程序运行结果示例1：
Input a and b:
100,50↙
Common factor 1 is 50
Common factor 2 is 25
Common factor 3 is 10
Common factor 4 is 5
Common factor 5 is 2
Common factor 6 is 1

程序运行结果示例2：
Input a and b:
7,-3↙

输入提示信息："Input a and b:\n"
输入格式： "%d,%d"
输出格式： "Common factor %d is %d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>
int CommonFactors(int a, int b);
int factor,count=0;
int main(){
	int a,b,value;
	printf("Input a and b:\n");
	scanf( "%d,%d",&a,&b);
	if(a<=0 ||b <=0)	return 0;
	factor=b;
	while(CommonFactors(a,b));
	return 0;
}
int CommonFactors(int a, int b){
	while(1){
		if(a%factor==0 && b%factor==0){
			printf( "Common factor %d is %d\n",++count,factor);
			return --factor;
		}
		else   factor--;
	}
}