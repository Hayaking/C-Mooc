/*题目内容：
修改下面这个程序使其快速计算1+2+3……+n的值，n从键盘输入。并按照下面给出的运行示例检查程序。
#include  <stdio.h>
  int main()
  { 
    int i, j, sum = 0, n=100; 
    for (i=1,j=n; i<=j; i++,j--) 
    {
        sum = sum + i + j;
    }
    printf("sum = %d", sum);
    return 0;
  }

程序运行结果示例1：
5↙
sum = 15

程序运行结果示例2：
6↙
sum = 21

输入格式: "%d"
输出格式： "sum = %d"  （注意：等号两侧各有一个空格）
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include  <stdio.h>
int main()
{ 
	int i,n,sum = 0;
	scanf("%d",&n);
	for (i=1; i<=n; i++) 
	{
		sum = sum + i ;
	}
	printf("sum = %d", sum);
	return 0;
}