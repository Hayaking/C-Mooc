/*题目内容：
反序数就是将整数的数字倒过来形成的整数。例如，1234的反序数是4321。设N是一个四位数，它的9倍恰好是其反序数，编程计算并输出N的值。

输入格式: 无
输出格式："%d\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>

int n_Fxs(int num);
int Fxs(int num);
int main()
{
	int N=1000;
	for(N;N<=9999;N++)
	{
		//printf("%d,",N);
		if(Fxs(N)==9*N)
			printf("%d\n",N);
	}
	return 0;
}

int Fxs(int num)
{
	int a[4];
	a[0]=num%10;
	a[1]=num/10%10;
	a[2]=num/100%10;
	a[3]=num/1000%10;
	num=a[0]*1000+a[1]*100+a[2]*10+a[3];
	//printf("%d,",num);
	return num;
}
int n_Fxs(int num)
{
	num *=9;
	int a[5]={0},i;
	for(i=0;num;i++)
	{
		a[i]=num%10;
		num /=10;
	}
	num=a[4]+a[3]*10+a[2]*100+a[1]*1000+a[0]*10000;
	printf("%d\n",num);
	return num;

}