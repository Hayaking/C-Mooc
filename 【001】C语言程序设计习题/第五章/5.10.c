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
		printf("%d��%d����31��\n",year,month);	break;
	case 4:
	case 6:
	case 9:
	case 11:
		printf("%d��%d����30��\n",year,month);	break;
	case 2:
		if(flag==1)
			printf("%d������,%d����29��\n",year,month);
		else
			printf("%d��ƽ��,%d����28��\n",year,month);
	}

}