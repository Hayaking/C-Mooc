/*题目内容：
比较两个分数的大小。人工方式下比较分数大小最常见的方法是：进行分数的通分后比较分子的大小。可以编程模拟手工解决。
具体要求为首先输出("Input two FENSHU:\n")，然后输入两个分数分子分母的值，格式为("%d/%d,%d/%d")，判断完成后输出("%d/%d<%d/%d\n")或("%d/%d>%d/%d\n")或("%d/%d=%d/%d\n")；
程序运行结果示例1：
Input two FENSHU:
17/19,23/27↙
17/19>23/27

程序运行结果示例2：
Input two FENSHU
2/3,2/3↙
2/3=2/3

程序运行结果示例3：
Input two FENSHU:
1/7,1/2↙
1/7<1/2

输入提示信息："Input two FENSHU:\n"
输入格式: "%d/%d,%d/%d"
输出格式：
如果前者大于后者输出提示信息："%d/%d>%d/%d\n"
如果前者等于后者输出提示信息："%d/%d=%d/%d\n"
如果前者小于后者输出提示信息："%d/%d<%d/%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

int main(){
	int a,b,c,d;
	printf("Input two FENSHU:\n");
	scanf("%d/%d,%d/%d",&a,&b,&c,&d);
	if(a*d==c*b)	printf("%d/%d=%d/%d\n",a,b,c,d);
	else if(a*d>c*b)	printf("%d/%d>%d/%d\n",a,b,c,d);
	else    printf("%d/%d<%d/%d\n",a,b,c,d);
	return 0;
}