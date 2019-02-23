/*题目内容：
从键盘输入6位仅由数字0~9组成的密码。用户每输入一个密码并按回车键后，程序给出判断：如果是数字，则原样输出该数字，并提示用户目前已经输入了几位密码，同时继续输入下一位密码；否则，程序提示"error"，并让用户继续输入下一位密码。直到用户输入的密码全部是数字为止。
程序的运行结果示例：
Input your password:
1↙
1, you have enter 1-bits number
6↙
6, you have enter 2-bits number
a↙
error
d↙
error
4↙
4, you have enter 3-bits number
6↙
6, you have enter 4-bits number
8↙
8, you have enter 5-bits number
2↙
2, you have enter 6-bits number

输入提示信息："Input your password:\n"
输入格式: "%c"
输出格式：
如果输入的是数字，输出格式为："%c, you have enter %d-bits number\n"
如果输入的不是数字，输出提示信息："error\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。

时间限制：500ms内存限制：32000kb*/

#include <stdio.h>

int main()
{
	char ch;
	int n=0,c;
	printf("Input your password:\n");
	while (1)
	{
		scanf("%c",&ch);
		while ((c = getchar()) != EOF && c != '\n');
		if(ch>='0' && ch<='9' && n<6)
		{
			n++;
			printf("%c, you have enter %d-bits number\n",ch,n);
		}
		else{
			printf("error\n");
		}
		if(n==6)
			return 0;

	}
	return 0;
}