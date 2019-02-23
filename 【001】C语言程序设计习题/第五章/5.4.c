#include <stdio.h>
#include <math.h>

int main(){
	
	double money,rate;
	int year;
	printf("请输入本金,存款年限:");
	scanf("%lf,%d",&money,&year);
	switch(year){
		case 1:
			rate=0.0225;	break;
		case 2:
			rate=0.0243;	break;
		case 3:
			rate=0.0270;	break;
		case 5:
			rate=0.0288;	break;
		case 8:
			rate=0.0300;	break;
		default:
			return 0;

	}
	money=money*pow(1+rate,year);
	printf("本息和为%lf",money);
	return 0;
}