/*题目内容：
编写程序求以下算式中XYZ的值，其中两数XYZ与YZZ相加的和n（99<n<1000）的值要求从键盘输入。


程序运行结果示例1：
Input n(n<1000):
532↙
X=3,Y=2,Z=1

程序运行结果示例2：
Input n(n<1000):
977↙
Invalid

输入提示："Input n(n<1000):\n"
输入格式: "%d" 
输出格式："X=%d,Y=%d,Z=%d\n"
计算不成功(无解)的输出提示："Invalid\n"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
int main()
{
	int x,y,z,user_num;
	printf("Input n(n<1000):\n");
	scanf("%d",&user_num);
	for(x=0;x<=9;x++)
	{
		for(y=0;y<=10-x;y++)
		{
			for(z=0;z<=9;z++)
			{
				if(x*100+y*10+z+y*100+z*10+z==user_num)
				{
					printf("X=%d,Y=%d,Z=%d\n",x,y,z);
					return 0;
				}
			}
		}
	}
	printf("Invalid\n");
	return 0;

}