/*题目内容：
在一种室内互动游戏中，魔术师要每位观众心里想一个三位数abc（a、b、c分别是百位、十位和个位数字），然后魔术师让观众心中记下acb、bac、bca、cab、cba五个数以及这5个数的和值。只要观众说出这个和是多少，则魔术师一定能猜出观众心里想的原数abc是多少。例如，观众甲说他计算的和值是1999，则魔术师立即说出他想的数是443，而观众乙说他计算的和值是1998，则魔术师说：“你算错了！”。请编程模拟这个数字魔术游戏。要求用函数实现，函数原型为：int Magic(int m);
其中形参m代表观众计算的和值。

输入格式:"%d"
输出格式：
观众计算错误，魔术师给出的结论："The sum you calculated is wrong!\n"
观众计算正确，魔术师给出的结论："The number is %d\n"
输入样例1：
1998↙
输出样例1：
The_sum_you_calculated_is_wrong!
输入样例2：
1999↙
输出样例2：
The_number_is_443
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
（注意：在输出中，“_”代表空格，如果直接将上段示例粘贴到代码中，应将其替换为空格。）
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

int Magic(int m);
int user_num;
int main()
{
	
	scanf("%d",&user_num);
	for(int i=100;i<=999;i++)
	{
		if(Magic(i)==1)
		{
			printf("The number is %d\n",i);
			return 0;
		}	
	}
	printf("The sum you calculated is wrong!\n");
	return 0;

}
int Magic(int m)
{
	int a,b,c;//百十个
	a=m/100;
	b=m/10%10;
	c=m%10;
	int num[]={a*100+c*10+b,b*100+a*10+c,b*100+c*10+a,c*100+b*10+a,c*100+a*10+b};
	if(user_num==num[0]+num[1]+num[2]+num[3]+num[4])
		return 1;//返回1，,表示观众计算正确
	else
		return 0;//计算错误


}