/*题目内容：
修改下面这个用do-while语句实现的程序，改用while语句实现，并对比其优缺点。
#include  <stdio.h>
  int main()
  { 
      int sum = 0, m;
      do{
          printf("Input m:\n");
          scanf("%d", &m);
          sum = sum + m;
          printf("sum = %d\n", sum);
      }while (m != 0);
      return 0;
  }

程序运行结果示例：
Input m:
1↙
sum = 1
Input m:
2↙
sum = 3
Input m:
3↙
sum = 6
Input m:
4↙
sum = 10
Input m:
0↙

输入格式:"%d"
输出格式：
输入提示： "Input m:\n"
输出累加和： "sum = %d\n"（注意：等号两侧各有一个空格）
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。

时间限制：500ms内存限制：32000kb*/
#include  <stdio.h>
int main()
{ 
    int sum = 0, m=1;
    while (m != 0)
	{
        printf("Input m:\n");
        scanf("%d", &m);
		if(m==0)
		{	
			break;
		}
        sum = sum + m;
        printf("sum = %d\n", sum);
    }
    return 0;
}