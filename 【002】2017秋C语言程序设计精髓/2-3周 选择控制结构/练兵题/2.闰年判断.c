/*题目内容：
从键盘任意输入一个公元年份（大于等于1），判断它是否是闰年。若是闰年输出“Yes”，否则输出“No”。要求对输入数据进行合法性判断。
已知符合下列条件之一者是闰年：
（1）能被4整除，但不能被100整除；
（2）能被400整除。

运行结果示例1：
2015↙
No

运行结果示例2：
2016↙
Yes

运行结果示例3：
-123↙
Input error!

运行结果示例4：
a↙
Input error!

输入格式: "%d"
输出格式：
是闰年，输出："Yes\n"
不是闰年，输出："No\n"
输入数据不合法，输出："Input error!\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
int main()
{ 
	int year;

	if(scanf("%d",&year)==1){
		if(year<=0){
			printf("Input error!\n");
		}
		else{
			if(year%4==0 && year%100!=0 || year%400==0){
				printf("Yes\n");
			}
			else{
				printf("No\n");
			}
		}
	}
	
	else{
		printf("Input error!\n");
	}
	return 0;
}