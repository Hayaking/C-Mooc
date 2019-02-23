/*计算1!到n!的和*/
#include <stdio.h>

double fact(int num);
int main()
{
	int n,i;
	double sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=fact(i);
	}
	printf("%lf\n",sum);
	return 0;
}

double fact(int num)
{
	int i=1;
	double num_fact=1;
	for(i;i<=num;i++)
		num_fact*=i;
	return num_fact;
}