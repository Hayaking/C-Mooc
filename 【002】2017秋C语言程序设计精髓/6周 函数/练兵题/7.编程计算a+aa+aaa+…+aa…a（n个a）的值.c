/*题目内容：
编程计算 a+aa+aaa+…+aa…a（n个a）的值，n和a的值由键盘输入。例如，当n=4,a=2,表示计算2+22+222+2222的值。

程序运行结果示例：
Input a,n:
2,4↙
sum=2468

输入提示信息："Input a,n:\n"
输入格式:   "%d,%d"（先输入a，后输入n）
输出格式：  "sum=%ld\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

int main()
{
	int a,n,sum=0;
	
	printf("Input a,n:\n");
	scanf("%d,%d",&a,&n);
	int aa=a;
	for(int i=0;i<n;i++)
	{
		sum +=a;
		a =a*10+aa;
	}
	printf( "sum=%ld\n",sum);
	return 0;
}