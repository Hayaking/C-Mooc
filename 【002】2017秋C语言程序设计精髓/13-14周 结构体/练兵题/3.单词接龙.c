/*题目内容：
阿泰和女友小菲用英语短信玩单词接龙游戏。一人先写一个英文单词，然后另一个人回复一个英文单词，要求回复单词的开头有若干个字母和上一个人所写单词的结尾若干个字母相同，重合部分的长度不限。（如阿泰输入happy，小菲可以回复python，重合部分为py。）现在，小菲刚刚回复了阿泰一个单词，阿泰想知道这个单词与自己发过去的单词的重合部分是什么。他们两人都是喜欢写长单词的英语大神，阿泰觉得用肉眼找重合部分实在是太难了，所以请你编写程序来帮他找出重合部分。
程序运行结果示例1：
happy↙
pythen↙
py
程序运行结果示例2：
sun↙
unknown↙
un
输入格式: "%s%s"
输出格式： "%s\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <string.h>
void addtail(char p[]);
int main(){
	char *p1, *p2, str1[20], str2[20],t1[20]={0},t2[20]={0};
	scanf("%s%s",str1,str2);
	int len_1 = strlen(str1), len_2 = strlen(str2);
	p1 = str1 + len_1-1, p2 = str2;
	for(int i=1;i<len_1;i++){
		strcpy(t1,p1);
		addtail(t1);
		strncpy(t2,p2,i);
		addtail(t2);
		//printf("%s,%s,%d\n",t1,t2,strcmp(t1,t2));
		if(strcmp(t1,t2)==0){
			puts(t1);
			break;
		}
		else
			p1--;
	}
	
	return 0;
}
void addtail(char p[]){
	int i;
	for(i=0;p[i]!=0;i++);
	p[i] ='\0';
}}