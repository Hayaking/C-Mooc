/*题目内容：
从键盘键入任意一个字符，判断该字符是英文字母（不区分大、小写）、数字字符还是其它字符。
若键入字母，则屏幕显示 It is an English character.；若键入数字则屏幕显示It is a digit character. ；若输入其它字符，则屏幕显示：It is other character. 
程序的运行示例1：
Input simple:
b↙
It is an English character.

程序的运行示例2：
Input simple:
6↙
It is a digit character.

程序的运行示例3：
Input simple:
*↙
It is other character.

程序的运行示例4：
Input simple:
A↙
It is an English character.

输入信息提示："Input simple:\n"
输入格式:  "%c"
输出格式：
英文字符的输出格式："It is an English character.\n"
数字的输出格式："It is a digit character.\n"
其它字符的输出格式："It is other character.\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

int main()
{
	char ch;
	printf("Input simple:\n");
	scanf("%c",&ch);
	if(ch>=48 && ch<=57){
		printf("It is a digit character.\n");
	}
	else if(ch>=65 && ch<=90 ||ch>=97 && ch<=122){
		printf("It is an English character.\n");
	}
	else{
		printf("It is other character.\n");
	}
	return 0;
}