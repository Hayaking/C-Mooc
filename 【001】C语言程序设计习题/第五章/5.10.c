#include <stdio.h>

int main(){
	int year,month,flag;
	printf("please input year,month:");
	if(scanf("%d,%d",&year,&month)==2){
		if(month<=12 && month>=1){
			flag=year%4==0 && year%100!=0||year%400==0?1:0;
		}
	}
	switch(month){
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		printf("%d年%d月有31天\n",year,month);	break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d年%d月有30天\n",year,month);	break;
	case 2:
		if(flag==1)
			printf("%d是闰年,%d月有29天\n",year,month);
		else
			printf("%d是平年,%d月有28天\n",year,month);
	}

}