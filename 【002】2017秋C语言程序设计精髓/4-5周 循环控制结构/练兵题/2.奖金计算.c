/*题目内容：
企业发放的奖金根据利润提成。利润低于或等于10万元时，奖金可提10%；利润高于10万元，低于20万元时，低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%；20万到40万之间时，高于20万元的部分，可提成5%；40万到60万之间时，高于40万元的部分，可提成3%；60万到100万之间时，高于60万元的部分，可提成1.5%，高于100万元时，超过100万元的部分按1%提成，从键盘输入当月利润i，求应发放奖金总数？

程序运行结果示例1：
789↙
bonus=78

程序运行结果示例2：
789516↙
bonus=36342

输入格式: "%ld"
输出格式："bonus=%ld\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：31kb*/
#include <stdio.h>
#define  w10 100000
#define  w20 200000
#define  w40 400000
#define  w60 600000
#define  w100 1000000
int main(int argc, char const *argv[])
{
	long user_num;
	long bonus;
	scanf("%ld",&user_num);
	while(user_num > 0){
		if (user_num<=w10){
			bonus = user_num*0.1;	
			user_num -= w10;		
		}
		if (user_num>w10 && user_num<=w20 ){
			bonus = 10000+(user_num-w10)*0.075;
			user_num -= w20;
		}
		if(user_num>w20 && user_num<=w40){
			bonus = 17500+(user_num-w20)*0.05;
			user_num -= w40;
		}
		if (user_num>w40 && user_num<=w60){
			bonus = 27500+(user_num-w40)*0.03;
			user_num -= w60;
		}
		if (user_num>w60 && user_num<=w100){
			bonus = 33500+(user_num-w60)*0.015;
			user_num -= w100;
		}
		if (user_num > w100){
			bonus = 39500+(user_num-w100)*0.01;
			break;
		}

	}
	printf("bonus=%ld\n",bonus);
	return 0;
}