/*题目内容：编程计算并输出一元二次方程1.png 的两个实根3.png ，其中a,b,c的值由用户从键盘输入，假设a,b,c的值能保证方程有两个不相等的实根，即2.png 。



输入格式:"%f,%f,%f"
输入提示信息：“Input a,b,c:”

输出格式："x1=%.2f,x2=%.2f\n


输入样例：
1,2,1
输出样例：
x1=-1.00
x2=-1.00                
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>
int main(){
	float a,b,c,derta,x1,x2;
	printf("Input a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	derta=b*b-4*a*c;
	if(derta>=0 && a!=0){
		x1=(-b+sqrt(derta))/(2*a);
		x2=(-b-sqrt(derta))/(2*a);
		printf("x1=%.2f,x2=%.2f\n",x1,x2);
	}
	else if(a==0){
		printf("x1=%.2f,x2=%.2f\n",-c/b,-c/b);
	}
	else{
		return -1;
	}
	return 0;
}