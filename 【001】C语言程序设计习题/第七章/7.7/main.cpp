/*三种方法实现求最大公约数*/

#include <stdio.h>

int gcd1(int a,int b);//穷举法
int gcd2(int a,int b);//欧几里得法
int gcd3(int a,int b);//递归法
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("穷举法得 %d\n",gcd1(a,b));
	printf("欧几里得法得 %d\n",gcd2(a,b));
	printf("递归法得 %d\n",gcd3(a,b));
	return 0;
}
int gcd1(int a,int b)
{
	int min;
	min = a<b?a:b;
	for(min;!(a%min==0 && b% min==0);min--);
	return min;
}
int gcd2(int a,int b)
{
	if(b==0)
		return a;
	else 
		return gcd2(b,a%b);
}
int gcd3(int a,int b)
{
	if(a>b)
		return gcd3(a-b,b);
	if(a==b)
		return a;
	if(a<b)
		return gcd3(a,b-a);
}