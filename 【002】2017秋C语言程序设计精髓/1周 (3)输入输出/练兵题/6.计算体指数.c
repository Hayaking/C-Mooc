/*题目内容：
从键盘输入某人的身高（以厘米为单位，如174cm）和体重（以公斤为单位，如70公斤），将身高（以米为单位，如1.74m）和体重（以斤为单位，如140斤）输出在屏幕上，并按照以下公式计算并输出体指数，要求结果保留到小数点后2位。程序中所有浮点数的数据类型均为float。
假设体重为w公斤，身高为h米，则体指数的计算公式为：t=w/h^2
               
以下是程序的运行结果示例：
Input weight, height:
70,174↙
weight=140
height=1.74
t=23.12

输入提示信息："Input weight, height:\n"    (注意：在height和逗号之间有一个空格)
输入格式: "%d,%d"
输出格式：
体重输出格式："weight=%d\n"
身高输出格式："height=%.2f\n"
体指数输出格式："t=%.2f\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
int main(){
	int weight,height;
	float h,target;
	printf("Input weight, height:\n");
	scanf("%d,%d",&weight,&height);
	h=height/100.0;
	printf("weight=%d\nheight=%.2f\n",weight*2,h);
	target=(float)weight/(h*h);
	printf("t=%.2f\n",target);
	return 0;
}