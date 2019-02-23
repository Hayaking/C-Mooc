#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double p1,p2;//p1,富翁,p2陌生人
	printf("富翁30天里给了陌生人%.0lf万元\n",30*10.0);
	printf("陌生人30天里给了富翁%.0lf万元",pow((double)2,30)/100000);

	return 0;
}