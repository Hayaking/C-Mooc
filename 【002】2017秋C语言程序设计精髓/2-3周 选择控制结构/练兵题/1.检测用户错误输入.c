/*题目内容：
根据scanf()的返回值判断scanf()是否成功读入了指定的数据项数，使程序在用户输入123a时，能输出如下运行结果：
123a↙
Input error!

输入格式: "%d %d"
输出格式：
如果成功读入指定的数据项数，输出格式为："a = %d, b = %d\n" （注意：等号的两边各有一个空格）
输入非法数据，输出格式为："Input error!"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include<stdio.h>
int main(){
	int a,b;
	if(scanf("%d %d",&a,&b)==2){
		printf("a = %d, b = %d\n",a,b);
	
	}
	else{
		printf("Input error!");
			
	}

	return 0;
}