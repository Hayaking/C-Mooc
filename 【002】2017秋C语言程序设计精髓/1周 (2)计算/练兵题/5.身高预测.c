/*题目内容：
已知小明（男孩）爸爸的身高是175厘米，妈妈的身高是162厘米。小红（女孩）爸爸的身高是169厘米，妈妈的身高是153厘米，按照下面公式，预测并输出小明和小红的遗传身高（不考虑后天因素）。
         男性成人时身高=(faHeight + moHeight)×0.54cm
         女性成人时身高=(faHeight×0.923 + moHeight)/2cm

以下为程序的运行结果示例：
Height of xiao ming:181
Height of xiao hong:154

输入格式: 无
输出格式：
小明身高的输出格式："Height of xiao ming:%d\n"
小红身高的输出格式："Height of xiao hong:%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/

#include <stdio.h>
int main()
{
    int fam=175,mom=162,fah=169,moh=153;
    printf("Height of xiao ming:%d\n",(int)((fam+mom)*0.54));
    printf("Height of xiao hong:%d\n",(int)((fah*0.923+moh)/2));
}