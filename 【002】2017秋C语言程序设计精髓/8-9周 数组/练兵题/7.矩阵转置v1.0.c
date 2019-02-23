/*题目内容：

用二维数组作为函数参数，编程计算并输出n×n阶矩阵的转置矩阵。其中，n的值不超过10，n的值由用户从键盘输入。

程序运行结果示例1：
Input n:3↙
Input 3*3 matrix:
1 2 3↙
4 5 6↙
7 8 9↙
The transposed matrix is:
   1   4   7
   2   5   8
   3   6   9

程序运行结果示例2：
Input n:2↙
Input 2*2 matrix:
1 2↙
4 5↙
The transposed matrix is:
   1   4
   2   5

输入提示信息：
提示输入矩阵的阶数："Input n:"
提示输入矩阵数据："Input %d*%d matrix:\n"
输入格式: "%d"
输出提示信息："The transposed matrix is:\n"
输出格式："%4d"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

int main()
{
	int martrix[10][10],n;
	printf("Input n:");
	scanf( "%d",&n);
	printf("Input %d*%d matrix:\n",n,n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&martrix[j][i]);
		}
	}
	printf("The transposed matrix is:\n");
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			printf("%4d",martrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}