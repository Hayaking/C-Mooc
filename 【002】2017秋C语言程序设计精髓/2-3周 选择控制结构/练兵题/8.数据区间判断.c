/*题目内容：
从键盘输入一个int型的正整数n（已知：0<n<10000），编写程序判断n落在哪个区间。如果用户输入的数据不在指定的范围里，程序输出 "error!"。例如，输入265，则该数属于区间 100-999。

程序运行结果示例1：
Please enter the number:
2563↙
2563: 1000-9999

程序运行结果示例2：
Please enter the number:
156↙
156: 100-999

程序运行结果示例3：
Please enter the number:
36↙
36: 10-99

程序运行结果示例4：
Please enter the number:
3↙
3: 0-9

程序运行结果示例5：
Please enter the number:
10923↙
error!

输入提示信息："Please enter the number:\n"
输入错误提示信息："error!\n"
输入格式: "%d"
输出格式：
输出的区间判断：
"%d: 1000-9999\n"
"%d: 100-999\n"
"%d: 10-99\n"
"%d: 0-9\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>


int main(){
	int n,num,i=0;
	printf("Please enter the number:\n");
	scanf( "%d",&n);
	num = n;
	while(n>0){
		n=n/10;
		i++;
	}
	switch(i){
	
	case 1:
		printf("%d: 0-9\n",num);	break;
	case 2:
		printf("%d: 10-99\n",num);	break;
	case 3:
		printf("%d: 100-999\n",num);	break;
	case 4:
		printf("%d: 1000-9999\n",num);	break;
	default:
		printf("error!\n");
	}

	return 0;
}