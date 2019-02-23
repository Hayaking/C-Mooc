#include <stdio.h>
#include <stdlib.h>
int C_day(int y,int n, int d);
int month[]={31,0,31,30,31,30,31,30,31,30,31,30,31};
void MonthDay(int year,int yearDay,int *pMonth,int *pDay);
int main(int argc, char const *argv[])
{
	int choice,y,m,d,yd;
	printf("1. year/month/day->yearday\n2. yearday->year/month/day\n3. Exit\nPlease enter your choice\n");
	scanf("%d",&choice);
	switch(choice){
		case 1:
				printf("input year,month,day:\n");
				scanf("%d,%d,%d",&y,&m,&d);
				printf("这一年有%d天\n",C_day(y,m,d));
				break;
		case 2:
				printf("input year,yearday:\n");
				scanf("%d,%d",&y,&yd);
				MonthDay(y,yd,&m,&d);
				printf("%d,%d,%d",y,m,d);
				break;
		case 3:
			exit(0);
	}
	return 0;
}
int C_day(int y,int m, int d){
	if(y%4==0 && y%100!=0 || y%400==0)	month[1]=29;
	else month[1]= 28;
	for(int i=0;i<m-1;i++)	d+=month[i];
	month[1]=0;
	return d;
}
void MonthDay(int year,int yearDay,int *pMonth,int *pDay){
	int i;
	if(year%4==0 && year%100!=0 || year%400==0)	month[1]=29;
	else month[1]= 28;
	for(i=0;yearDay>=month[i];i++)
		yearDay -=month[i];
	*pMonth=i+1;
	*pDay=yearDay;
}