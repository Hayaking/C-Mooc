/*题目内容：
根据下面给出的求根公式，计算并输出一元二次方程的两个实根，要求精确到小数点后4位。其中a，b，c的值由用户从键盘输入。如果用户输入的系数不满足求实根的要求，输出错误提示 "error!"。程序中所有的数据类型均为float。



程序运行结果示例1：
Please enter the coefficients a,b,c:
1,2,1↙
x1=-1.0000, x2=-1.0000

程序运行结果示例2：
Please enter the coefficients a,b,c:
2,6,1↙
x1=-0.1771, x2=-2.8229

程序运行结果示例3：
Please enter the coefficients a,b,c:
2,1,6↙
error!

输入提示信息："Please enter the coefficients a,b,c:\n"
输入格式: "%f,%f,%f"
输出格式： "x1=%7.4f, x2=%7.4f\n"
如果输入的系数不满足求实根的要求，输出错误提示信息："error!\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,derta,x1,x2;
	printf("Please enter the coefficients a,b,c:\n");
	scanf("%f,%f,%f",&a,&b,&c);
	derta=b*b-4*a*c;
	if(derta>=0 && a!=0){
		x1=(-b+sqrt(derta))/(2*a);
		x2=(-b-sqrt(derta))/(2*a);
		printf("x1=%7.4f, x2=%7.4f\n",x1,x2);
	}
	else if(a==0){
		printf("x1=%.2f,x2=%.2f\n",-c/b,-c/b);
	}
	else{
		printf("error!\n");
	}
	return 0;
}