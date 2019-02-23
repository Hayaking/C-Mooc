/*题目内容：
从键盘任意输入一个正整数，编程判断它是否是素数，若是素数，输出“Yes!”，否则输出“No！”。已知负数、0和1都不是素数。请找出下面程序的错误并改正之，同时按照给出的运行示例检查修改后的程序。
 
#include <stdio.h>
   #include <math.h>
   int main()
   {
     int n, i;
     printf("Input n:\n");
     scanf("%d", &n);
     for (i=2; i<=sqrt(n); i++)
     {
       if (n % i = 0)
       {
         printf("No!\n");
       }
    }
    printf("Yes!\n");
    return 0;
  }

程序的运行结果示例1：
Input n:
-3↙
No!

程序的运行结果示例2：
Input n:
0↙
No!

程序的运行结果示例3：
Input n:
1↙
No!

程序的运行结果示例4：
Input n:
6↙
No!

程序的运行结果示例5：
Input n:
7↙
Yes!

输入格式: "%d"
输出格式：
输入提示信息： "Input n:\n"
是素数： "Yes!\n"
不是素数： "No!\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>
int main()
{
    int n, i;
    printf("Input n:\n");
    scanf("%d", &n);
	if (n<=2)
	{
		printf("No!\n");
		return 0;
	}
    for(i=2; i<=(int)sqrt((double)n); i++)
    {		
		if(n%i==0)
		{
			printf("No!\n");
			return 0;
		}
		
	}
	printf("Yes!\n");
	return 0;
}