/*题目内容：
从键盘输入一系列正整数，输入-1表示输入结束（-1本身不是输入的数据）。编写程序判断输入数据中奇数和偶数的个数。如果用户输入的第一个数据就是-1，则程序输出"over!"。否则。用户每输入一个数据，输出该数据是奇数还是偶数，直到用户输入-1为止，分别统计用户输入数据中奇数和偶数的个数。

程序运行结果示例1：
Please enter the number:
1↙
1:odd
5↙
5:odd
8↙
8:even
9↙
9:odd
12↙
12:even
17↙
17:odd
-1↙
The total number of odd is 4
The total number of even is 2

程序运行结果示例2：
Please enter the number:
-1↙
over!
The total number of odd is 0
The total number of even is 0

输入提示信息："Please enter the number:\n"
输入格式: "%d"
输出格式：
用户输入的第一个数据就是-1，输出格式："over!\n"
奇数的输出格式："%d:odd\n"
偶数的输出格式："%d:even\n"
输入数据中奇数的个数统计："The total number of odd is %d\n"
输入数据中偶数的个数统计："The total number of even is %d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>

int JiOu(int num);
int main()
{
	int user_num,flag,ji=0,ou=0;
	printf("Please enter the number:\n");
	while(1)
	{
		scanf("%d",&user_num);
		flag=JiOu(user_num);
		if (flag==0)
		{
			printf("%d:even\n",user_num);
			ji++;
		}
		else if(flag == -1 && ji == 0 && ou == 0)
		{
			printf("over!\n");
			break;
		}
		else if(flag == -1)
			break;
		else if(flag == 1)
		{
			printf("%d:odd\n",user_num);
			ou++;
		}	
	}
	printf("The total number of odd is %d\n",ou);
	printf("The total number of even is %d\n",ji);
	return 0;
}

int JiOu(int num)//判断奇偶
{
	if(num==-1)	
		return -1;	//输入的数是-1，返回-1
	if(num%2==0)
		return 0; //返回值为零，则是偶数
	else if(num%2!=0)
		return 1;
}