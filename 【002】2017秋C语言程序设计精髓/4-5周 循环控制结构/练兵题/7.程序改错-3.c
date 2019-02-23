/*题目内容：
从键盘任意输入两个符号各异的整数，直到输入的两个整数满足要求为止，然后打印这两个数。请通过测试找出下面这个程序存在的问题（不止一个问题哦），并改正。同时用下面给出的运行结果示例检查修改后的程序。
#include <stdio.h>
  int main()
  {
    int x1, x2;
    do{
      printf("Input x1, x2:");
      scanf("%d,%d", &x1, &x2);
    }while (x1 * x2 > 0);
    printf("x1=%d,x2=%d\n", x1, x2);
    return 0;
  }

程序正确的运行结果示例：
Input x1, x2:
a,s↙
Input x1, x2:
a,1↙
Input x1, x2:
2,s↙
Input x1, x2:
1,2↙
Input x1, x2:
-1,-2↙
Input x1, x2:
0,3↙
Input x1, x2:
1.2,3.4↙
Input x1, x2:
1.2,5↙
Input x1, x2:
-1,3↙
x1=-1,x2=3


输入格式: "%d,%d"
输出格式：
输入提示信息："Input x1, x2:\n"
输出： "x1=%d,x2=%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/

#include <stdio.h>

int main()
{
	int x1,x2,get,c;

	do{
		
		printf("Input x1, x2:\n");
		
		get=scanf( "%d,%d", &x1,&x2);
		while ((c = getchar()) != EOF && c != '\n');
		//printf("%d,%d\n", x1,x2);
	}while(get!=2 || x1*x2>=0);
	printf( "x1=%d,x2=%d\n",x1,x2);
	return 0;
}