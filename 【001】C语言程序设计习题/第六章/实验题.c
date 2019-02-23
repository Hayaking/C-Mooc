#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	double num=1,target_num=0;
	while(num<64)
	{
		target_num +=pow((double)2,num-1);
		num++;
	}
	printf("通项累加计算得%.0lf\n",target_num );
	target_num=0;
	for(double i=1,num=1;num<64;num++)
	{
		target_num +=i;
		i *=2;
	}
	printf("利用前项计算得%.0lf\n",target_num );
	printf("有%0.2lf立方米\n",target_num/1.42e8);
	
	return 0;
}