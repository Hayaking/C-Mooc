/*题目内容：
编写程序产生如下输出：
F
FE
FED
FEDC
FEDCB
FEDCBA

输入格式: 无
输出格式："%c"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

int main()
{
    char ch='F',i='A';

    for (;ch>=i;ch--){
        char j;
        for (j='F';j>=ch; j--)
        {
            printf("%c", j);
        }
        printf("\n");
       
    }
    return 0;
}