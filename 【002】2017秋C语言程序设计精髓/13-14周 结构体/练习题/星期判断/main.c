/*题目内容：请输入星期几的第一个字母（不区分大小写）来判断一下是星期几，如果第一个字母一样，则继续判断第二个字母(小写)，否则输出“data error”。
程序运行结果示例1：
please input the first letter of someday:
S↙
please input second letter:
u↙
sunday
程序运行结果示例2：
please input the first letter of someday:
F↙
friday
程序运行结果示例2：
please input the first letter of someday:
h↙
data error

第一个字母的输入提示信息："please input the first letter of someday:\n"
第二个字母的输入提示信息："please input second letter:\n"
用户输入错误提示信息："data error\n"
输入格式: " %c" （注意：%c前面有一个空格）
输出格式：
星期一："monday\n"
星期二："tuesday\n"
星期三："wednesday\n"
星期四："thursday\n"
星期五："friday\n"
星期六："saturday\n"
星期日："sunday\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

typedef struct D{
	char ch[3];
	char name[10];
}DAY;
int main(){
	int i=0,j=0;
	char ch1,ch2;
	DAY	day[7]={{"M","monday"},{"Tu","tuesday"},{"W","wednesday"},{"Th","thursday"},{"F","friday"},{"Sa","saturday"},{"Su","sunday"}};
	printf("please input the first letter of someday:\n");
	scanf(" %c",&ch1);
	for(i=0;i<7;i++){
		if((day[i].ch[0]==ch1 || day[i].ch[0]+32==ch1) && day[i].ch[1]=='\0'){
			puts(day[i].name);
			return 0;
		}
		else if((day[i].ch[0]==ch1 || day[i].ch[0]+32==ch1)&& day[i].ch[1]!='\0'){
			printf("please input second letter:\n");
			scanf(" %c",&ch2);
			for(j=0;j<7;j++){
				if(day[j].ch[1]==ch2  && (day[j].ch[0]==ch1 || day[j].ch[0]+32==ch1)){
					puts(day[j].name);
					return 0;
				}
			}
			break;
		}
	}
	printf("data error\n");
	return 0;
}