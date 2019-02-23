/*题目内容：
有n个人围坐在一起，问第n个人多大年纪，他说比第n-1个人大2岁；问第n-1个人，他说比第n-2个人大2岁,.....,问第3个人，他说比第2个人大2岁；问第2个人，他说比第1个人大2岁。第1个人说自己10岁，问第n个人多大年纪。
递归函数原型：unsigned int ComputeAge(unsigned int n);
提示：
计算年龄的递归公式为：

输入格式: "%u"
输出格式： "The person's age is %u\n"

输入样例1：
5↙
输出样例1：
The_person's_age_is_18
输入样例2：
10↙
输出样例2：
The_person's_age_is_28
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
（注意：在输出中，“_”代表空格，如果直接将上段示例粘贴到代码中，应将其替换为空格。）
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>
int age(int n);
int main()
{
	unsigned int n;
	scanf("%u",&n);
	printf("The person's age is %u\n",age(n));
	return 0;
}
int age(int n)
{
	if(n==1)
		return 10;
	return age(n-1)+2;
}