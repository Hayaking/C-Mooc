/*题目内容：
n(1<n<=5)个水手在岛上发现一堆椰子，先由第1个水手把椰子分为等量的n堆，还剩下1个给了猴子，自己藏起1堆。然后，第2个水手把剩下的n-1堆混合后重新分为等量的n堆，还剩下1个给了猴子，自己藏起1堆。以后第3、4个水手依次按此方法处理。最后，第n个水手把剩下的椰子分为等量的n堆后，同样剩下1个给了猴子。请用迭代法编程计算并输出原来这堆椰子至少有多少个,n的值要求从键盘输入。若输入的n值超出要求的范围，程序输出"Error!"。
提示：分成的等量的堆数应该与水手的数量一致.
程序运行结果示例1：
Input n(1<n<=5):
5↙
y=3121

程序运行结果示例2：
Input n(1<n<=5):
7↙
Error!

输入提示信息： "Input n(1<n<=5):\n"
输入格式:  "%d"
输出格式："y=%d\n"
输入错误提示信息："Error!\n"  
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>

int main()
{
	int sum,num_ren;
	printf( "Input n(1<n<=5):\n");
	scanf( "%d",&num_ren);
	if(num_ren>5 || num_ren<=1)
		printf("Error!\n"  );
	else
		printf("y=%d\n",(int)pow((float)num_ren,num_ren)-num_ren*1/1+1);
	return 0;
}