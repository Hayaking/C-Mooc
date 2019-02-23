/*题目内容：
已知某城市普通出租车收费标准为：起步里程为3公里，起步费为8元，10公里以内超过起步里程的部分，每公里加收2元，超过10公里以上的部分加收50%的回空补贴费，即每公里3元。出租车营运过程中，因堵车和乘客要求临时停车等客的，按每5分钟加收2元
计算，不足5分钟的不计费。从键盘任意输入行驶里程（精确到0.1公里）和等待时间（精确到分钟），请编程计算并输出乘客应支付的车费，对结果进行四舍五入，精确到元。

程序运行结果示例1：
Input distance and time:2,2↙
fee = 8

程序运行结果示例2：
Input distance and time:5,5↙
fee = 14

程序运行结果示例3：
Input distance and time:12,15↙
fee = 34

程序运行结果示例4：
Input distance and time:20,0↙
fee = 52

输入提示信息："Input distance and time:"
输入格式:
用逗号分隔的两个数字，第一个表示距离、第二个表示时间："%f,%d"
输出格式："fee = %.0f\n"   （注意：等号的两边各有一个空格）
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。

时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

int time_money(int m);
int main(){
	float distance,a,b;
	int time;
	printf("Input distance and time:");
	scanf("%f,%d",&distance,&time);
	b = time_money(time);
	if(distance<=3){
		a=8;
	}
	else if(distance>3 && distance<=10 ){
		distance -=3;
		a=8+distance*2;
	}
	else if(distance>10){
		distance -=10;
		a=8+14+distance*3;
	}

	printf("fee = %.0f\n",a+b);
	return 0;
}
int time_money(int m){
	if(m<5){
		return 0;
	}
	else{
		 m =((m-5)/5)*2+2;
	}
	return m;
}