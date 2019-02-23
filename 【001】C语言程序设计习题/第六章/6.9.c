#include <stdio.h>

int JieCheng(int n);
int main(int argc, char const *argv[])
{
	double e=0;
	int i=1;
	double fm=1/JieCheng(i);
	for (;fm>1e-5;i++)
	{
		e +=fm;
		fm=1.0/JieCheng(i);
	}
	printf("%lf\n",e );
	printf("%d\n",i);//项数
	return 0;
}
int JieCheng(int n)
{
	int num=1;
	for(;n;n--)
		num *=n;
	return num;
}