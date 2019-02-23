#include <stdio.h>
#include <math.h>
#define LEFT(_n,x) printf("The number of matches you are moving is:%d\n",x),_n -=x;
#define LEFT_m(_n,x) printf("The number of matches that have been moved by the computer is:%d\n",x),_n -=x;
#define JUDGE(_n)	if(_n<=0)	{printf("I'm sorry. You lost!\n");return 0;}
#define JUDGE_m(_n)	if(_n<=0)	{printf("Congratulations！You won!\n");return 0;}
int CommonFactors(int a, int b);
int factor,count=0;
int main(){
	int num,t;
	int n=23;
	printf("Game start!\nNote: the maximum number is 3\n");
	while(1){
	re:	printf("Please enter the number of matches you are moving:\n");
		scanf("%d",&num);
		if(!(num>0 && num<=3) || num>n){
			printf("The number you entered is wrong，please re-enter!\n");
			goto	re;
		}
		LEFT(n,num);
		printf("The number of matches left is:%d\n",n);
		JUDGE(n);
		if(n==2)	{LEFT_m(n,n-1);}
		else if(n==1){LEFT_m(n,1);}
		else{
			LEFT_m(n,n%3+1);
		}
		printf("The number of matches left is:%d\n",n);
		JUDGE_m(n);
	}
}
