/*题目内容：
编写一个函数返回三个整数中的中间数。函数原型为： int mid(int a, int b, int c); 
函数功能是返回a，b，c三数中大小位于中间的那个数。
输入格式: "%d%d%d"
输出格式："The result is %d\n"
输入样例1：
12 6 18↙
输出样例1：
The_result_is_12
输入样例2：
-9 7 -2↙
输出样例2：
The_result_is_-2
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
（注意：在输出中，“_”代表空格，如果直接将上段示例粘贴到代码中，应将其替换为空格。）
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

int mid(int a, int b, int c);
int main(){
	
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("The result is %d\n",mid(a,b,c));
	return 0;

}
int mid(int a, int b, int c){
	int max=a,min=a;
	if(b>max)	max=b;
	if(c>max)	max=c;
	if(b<min)	min=b;
	if(c<min)	min=c;
	return a+b+c-max-min;
}