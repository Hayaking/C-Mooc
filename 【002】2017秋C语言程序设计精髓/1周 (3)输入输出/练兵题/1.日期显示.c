/*题目内容：
编写一个程序, 接收用户录入的日期信息并且将其显示出来. 其中, 输入日期的形式为月/日/年(mm/dd/yy), 输出日期的形式为年月日(yy.mm.dd)。
以下为程序的运行结果示例：
Enter a date (mm/dd/yy):
12/03/2015↙
You entered the date: 2015.12.03

输入格式: "%d/%d/%d"
输出格式：
输入提示信息："Enter a date (mm/dd/yy):\n"
输出格式："You entered the date: %04d.%02d.%02d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
int main(){
	int mm,dd,yy;
	printf("Enter a date (mm/dd/yy):\n");
	scanf("%d/%d/%d",&mm,&dd,&yy);
	printf("You entered the date: %04d.%02d.%02d\n",yy,mm,dd);
	return 0;
}