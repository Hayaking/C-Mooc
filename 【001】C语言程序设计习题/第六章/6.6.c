#include <stdio.h>
#define rate 0.01875
int main(int argc, char const *argv[])
{
	double money=0;
	int i;
	for (i = 5; i; i--)
	{
		money =(money+1000)/(1+rate);
	}
	printf("%lf\n",money);
	return 0;
}