#include <stdio.h>

int main()
{
	float weight,height,num;
	printf("输入体重（kg）,身高（m）:");
	scanf("%f,%f",&weight,&height);
	num=weight/(height*height);
	if(num<18){
		printf("体重低\n");
	}
	else if(num>=18 && num<25){
		printf("体重正常\n");
	}
	else if(num>=25 && num<27){
		printf("超重\n");
	}
	else{
		printf("肥胖");
	}
	return 0;
}