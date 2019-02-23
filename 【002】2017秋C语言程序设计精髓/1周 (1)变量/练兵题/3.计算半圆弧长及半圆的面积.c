/*
题目内容：
编程并输出半径r=5.3的半圆弧长（提示：半圆弧长不应该加直径的长度。）及该半圆弧与直经围成的半圆的面积，的取值为3.14159。要求半径r和必须利用宏常量表示。

输入格式:无
输出格式：
半圆的面积输出格式： "Area=%.5f\n"
半圆弧长输出格式： "circumference=%.5f\n"

输出样例：
Area=44.12363
circumference=16.65043
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb
*/

#include<stdio.h>
#define pi 3.14159

int main(){

	float r = 5.3,s=0,c=0;
	s = pi *r*r/2;
	c = r*pi;
	printf("Area=%.5f\n",s);
	printf("circumference=%.5f\n",c);
        return 0;
}