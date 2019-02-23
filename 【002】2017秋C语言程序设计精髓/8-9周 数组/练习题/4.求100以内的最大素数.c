/*题目内容：
编程计算n(n<=500)以内的10个最大素数及其和，分别输出这最大的10个素数及其和。n的值要求从键盘输入。要求10个素数按从大到小的顺序输出。
程序运行示例1：
Input n(n<=500):10↙
     7     5     3     2
sum=17

程序运行示例2：
Input n(n<=500):100↙
    97    89    83    79    73    71    67    61    59    53
sum=732

输入提示信息："Input n(n<=500):"
输入格式: "%d"
10个最大素数的输出格式："%6d"
10个最大素数和的输出格式："\nsum=%d\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

int list[510]={0};

int main()
{
	int user_rang,sum=0;
	list[2]=1;
	printf("Input n(n<=500):");
	scanf("%d",&user_rang);
	for(int i=2;i<=user_rang;i++)
	{
		int j;
		for(j=2;j<i;j++)
		{
			if(i%j ==0)	
			{
					list[i]=0;	break;
			}
			else    list[i]=1;
		}
		
	}
	for(int i=user_rang,count=0;i>=2;i--)
	{
		if(list[i]==1)	sum += i,printf("%6d",i),count++;
		if(count == 10) break;
	}
	printf("\nsum=%d\n",sum);
	return 0;
}