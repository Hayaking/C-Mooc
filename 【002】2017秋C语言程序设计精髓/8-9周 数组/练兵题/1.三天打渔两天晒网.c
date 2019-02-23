/*题目内容：
中国有句俗语叫“三天打鱼两天晒网”，某人从1990年1月1日起开始“三天打鱼两天晒网”，即工作三天，然后再休息两天。问这个人在以后的某一天中是在工作还是在休息。从键盘任意输入一天，编程判断他是在工作还是在休息，如果是在工作，则输出：He is working，如果是在休息，则输出：He is having a rest，如果输入的年份小于1990或者输入的月份和日期不合法，则输出：Invalid input。
输入格式: "%4d-%2d-%2d"
输出格式：
"Invalid input" 或
"He is having a rest" 或
"He is working"
输入样例1：
2014-12-22
输出样例1：
He is working
输入样例2：
2014-12-24
输出样例2：
He is having a rest
输入样例3：
2014-12-32
输出样例3：
Invalid input
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

int huansuan(int year,int month,int day);
int judge(int year,int month,int day);
int m[12] = {31,0,31,30,31,30,31,31,30,31,30,31};
int main()
{
    int year,month,day,get;
    get=scanf("%4d-%2d-%2d",&year,&month,&day);
    if(year<1990 || month > 12 || month <1 || get !=3 || day<0){
        printf("Invalid input" );
        return 0;
    }
    if(judge(year,month,day)!=1){
        printf("Invalid input" );
        return 0;
    }
    day = huansuan(year,month,day);
    //printf("%d\n",day);
    if(day % 5==3 || day % 5==4 ||day % 5==0)   printf("He is working");
    else   printf("He is having a rest");
    return 0;
}
int huansuan(int year,int month,int day)//全换成天
{
    int ini_year,ini_month = 1,count=0;
    for(ini_year=1990;ini_year<year;ini_year++)
    {
        if(ini_year % 4 == 0 && ini_year % 100 != 0 || ini_year %400 == 0)
            count++;
    }
    day += 365*(year-1990)+count;
    for(ini_month = 0;ini_month < month;ini_month++)
    {
        if(ini_month==2 && (ini_year % 4 == 0 && ini_year % 100 != 0 || ini_year %400 == 0))
            day += 29;
        else if(ini_month == 2)
            day +=28;
        day += m[ini_month];
    }
    return day;
}
int judge(int year,int month,int day)
{
    if(month ==1 ||month ==3||month ==5||month ==7||month ==8||month ==10||month ==12 && day<=31 )
        return 1;
    else if( year%4==0 && year%100==0 ||year%400==0 && month ==2 && day<=29 )
        return 1;
    else if(month ==2 && day<=28)
        return 1;
    else if(month ==4 ||month ==6||month ==9||month ==11 && day<=30)
        return 1;
    else 
        return 0;
}