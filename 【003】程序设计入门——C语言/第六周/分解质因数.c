#include <stdio.h>
#include <math.h>
int judge(int num);
int main(){
	int user_num,y_num=2,n=200,count=0;
	scanf("%d",&user_num);
	printf("%d=",user_num);
	while(n--){
		if(user_num%y_num==0){
			if(count==0)	printf("%d",y_num),count++;
			else    printf("x%d",y_num);
			user_num /=y_num;
			 if(y_num==user_num) {
			 	printf("x%d\n",y_num);
			 	return 0;
			}
		}
		else{
			while(judge(++y_num));
			if(y_num==user_num) {
				printf("x%d\n",y_num);
				return 0;
			}
		}
	}
}
int judge(int num){
	int i;
	for(i=2;i<=num/2;i++)
		if(num%i==0)	return 1;
	return 0;
}