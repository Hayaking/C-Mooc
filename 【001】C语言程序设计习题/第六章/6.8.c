#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double pi,n,sign;
	for(sign=1,n=1,pi=0;abs(sign/n)>1e-4 ;n +=2, sign =-sign)
	{
		pi += (sign/n);
	}
	printf("%lf\n",4*pi);
	return 0;
}