/*题目内容：
如果一个n位正整数等于它的n个数字的n次方和，则称该数为n位自方幂数。四位自方幂数称为玫瑰花数。编程计算并输出所有的玫瑰花数。

输入格式:无
输出格式："%d\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>

int number[11];
int fl_count(int num);
double sum(int count);
int main()
{
	int test_num;
	for(test_num=1000;test_num<=9999;test_num++)
	{
		if(sum(fl_count(test_num))==test_num)
			printf("%d\n",test_num);
	}
	return 0;
}
int fl_count(int num)
{
	int count=0,i;
	for(i=0;num;i++)
	{
		number[i]=num %10;
		num /=10;
		count++;
	}
	return count;
}
double sum(int count)
{
	int i;
	double n_sum=0;
	for(i=0;i<count;i++)
	{
		n_sum +=pow((double)number[i],count);
	}
	return n_sum;
}