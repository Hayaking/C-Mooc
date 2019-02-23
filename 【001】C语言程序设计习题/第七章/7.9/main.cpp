#include <stdio.h>
#include <math.h>
int age(int n);
int main()
{
	unsigned int n=5;
	printf("The person's age is %u\n",age(n));
	return 0;
}
int age(int n)
{
	if(n==1)
		return 10;
	return age(n-1)+2;
}