/*题目内容：
从键盘输入一个年份和月份，输出该月有多少天（考虑闰年），用switch语句编程。

程序运行结果示例1：
Input year,month:
2015,3↙
31 days

程序运行结果示例2：
Input year,month:
2015,4↙
30 days

程序运行结果示例3：
Input year,month:
2016,2↙
29 days

程序运行结果示例4：
Input year,month:
2014,2↙
28 days

程序运行结果示例5：

Input year,month:
2015,13↙
Input error!
输入提示信息："Input year,month:\n"
输入格式:  "%d,%d"
输出格式：
输入错误时的提示信息："Input error!\n"
输出格式：
          "31 days\n"
          "30 days\n"
          "29 days\n"
          "28 days\n"
 为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。         
时间限制：500ms内存限制：32000kb*/

#include <stdio.h>

int main()
{
	int year,month,flag=0,flag1=0;
	printf("Input year,month:\n");
	scanf("%d,%d",&year,&month);
	if(year%4==0 && year %100!=0 || year%400==0)
		flag=1;
	if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
		flag1=1;
	else if(month ==2)
		flag1=2;
	else if (month>12)
		flag1=3;
	else
		flag1=4;
	switch(flag1)
	{
		case 1:
			printf("31 days\n");	break;
		case 2:
			switch(flag)
			{
				case 1:printf( "29 days\n");	break;
				case 0:printf( "28 days\n");	break;
			}	
			break;
		case 3:
			printf("Input error!\n");	break;
		case 4:
			printf( "30 days\n");	break;
	}
		
	return 0;
}