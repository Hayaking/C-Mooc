/* 题目内容：
n块砖( 27<n<=77 )，36人搬，男搬4，女搬3，两个小孩抬一块砖，要求一次搬完，问男人、女人和小孩各需多少人？请用穷举法编程求解,n的值要求从键盘输入。输出结果按照男人数量升序给出（见下面示例3）。

程序的运行结果示例1：
Input n(27<n<=77):
28↙
men=0,women=4,children=32

程序的运行结果示例2：
Input n(27<n<=77):
36↙
men=3,women=3,children=30

程序的运行结果示例3：
Input n(27<n<=77):
60↙
men=2,women=14,children=20
men=7,women=7,children=22
men=12,women=0,children=24

输入提示： "Input n(27<n<=77):\n"
输入格式: "%d"  
输出格式："men=%d,women=%d,children=%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

int main()
{
	int n,m,w,c;
	printf("Input n(27<n<=77):\n");
	scanf("%d",&n);
	for(m=0;m<=n/4;m++)
	{
		for(w=0;w<=n/3;w++)
		{
			c=36-w-m;
			if(c%2==0)
			{
				if(4*m+3*w+c/2==n)
				printf("men=%d,women=%d,children=%d\n",m,w,c);
			}
			
		}
	}
	return 0;
}