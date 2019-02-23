#include <stdio.h>
#include <math.h>
/*这代码写了超长时间= = */
int isprime(int num);
int isprime1(int num);//goto
int isprime2(int num);//break
int isprime3(int num);//标识变量
int div(int num);
int div_num[100]={0};
int main(){
	int user_num,sum=0,i,flag=0;;
	printf("--任务1--输入一个数判断是否为素数:\n");
	scanf("%d",&user_num);
	isprime1(user_num);
	isprime2(user_num);
	isprime3(user_num);
	printf("--任务3--计算到n的素数和\n");
	scanf("%d",&user_num);
	for(i=1;i<=user_num;i++){
		if(isprime(i)==1)	sum+=i;
	}
	printf("1---%d素数和为%d\n",user_num,sum);
	printf("--任务4--输入数字计算因子\n");
	scanf("%d",&user_num);
	int n=div(user_num);
	if(div_num[0]==0)	printf("no divisor it is a prime number!");
	else{
		sum=0;
		for(i=0;i<=n;i++){
			if(div_num[i]>1){
				printf("%d ",div_num[i]);
				sum+=div_num[i];
			}
		}
	}
	printf("\n");
	if(sum+1==user_num)		printf("%d是完全数\n",user_num);
	printf("--任务6--质因数分解\n");
	scanf("%d",&user_num);
	if(isprime(user_num)==1)	printf("it is a prime number\n");
	else{
		printf("%d=",user_num);
		for(i=2;user_num-1;){
			if(user_num%i!=0){
					i++;
					flag=0;
			}
			else{
				printf("%d",i);
				user_num/=i;
				flag=1;
			}
			if(flag==1 && user_num!=1)	printf("*");
		}		
	}
	return 0;
}
int div(int num){
	int i,j;
	for(i=num-1,j=0;i>1;i--){
		if(num%i==0){
			div_num[j]=i;
			j++;
		}
	}
	return j;
}
int isprime(int num){
	int i;
	if(num ==0 || num==1)	return 0;
	if( num==2)	  return 1;
	for(i=2;i<sqrt((float)num)+1;i++){
		if(num%i==0)	return 0;
	}
	return 1;
}
int isprime1(int num){
	int i;
	if(num ==0 || num==1)	goto n;
	if(num==2)	goto y;
	for(i=2;i<sqrt((float)num);i++){
		if(num%i==0)	goto n;
	}
y:	printf("%d is a prime number\n",num);
	return 1;
n:	printf("%d is not a prime number\n",num);
	return 0;
}
int isprime2(int num){
	int i;
	for(i=2;i<(num);i++){
		if(num%i==0 || num ==0 || num==1)	break;
	}
	if(i!=num)	printf("%d is not a prime number\n",num);
	else    printf("%d is a prime number\n",num);
	return 0;
}
int isprime3(int num){
	int i,flag=1;
	for(i=2;i<sqrt((float)num);i++){
		if(num%i==0)	flag=0;
	}
	if(num ==0 || num==1)	flag=0;
	if(flag==0)		printf("%d is not a prime number\n",num);
	else    printf("%d is a prime number\n",num);
	return 0;
} 


