/*题目内容：
编写一个程序, 对用户录入的产品信息进行格式化。
以下为程序的运行结果示例：
Enter item number:
385↙
Enter unit price:
12.5↙
Enter purchase date (mm/dd/yy):
12/03/2015↙
Item      Unit     Purchase
385      $ 12.50    12032015

输入格式:
产品编号输入格式："%d"
产品价格输入格式："%f"
购买日期输入格式："%d/%d/%d"

输出格式：
产品编号输入提示信息："Enter item number:\n"
产品价格输入提示信息："Enter unit price:\n"
购买日期输入提示信息："Enter purchase date (mm/dd/yy):\n"
格式化输出的表头信息："Item      Unit     Purchase\n"
输出格式："%-9d$ %-9.2f%02d%02d%02d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/

#include <stdio.h>
int main(){
	int num,mm,dd,yy;
	float price;
	printf("Enter item number:\n");
	scanf("%d",&num);
	printf("Enter unit price:\n");
	scanf("%f",&price);
	printf("Enter purchase date (mm/dd/yy):\n");
	scanf("%d/%d/%d",&mm,&dd,&yy);
	printf("Item      Unit     Purchase\n");
	printf("%-9d$ %-9.2f%02d%02d%02d\n",num,price,mm,dd,yy);
	return 0;
}