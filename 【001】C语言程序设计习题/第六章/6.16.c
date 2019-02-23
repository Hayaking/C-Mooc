#include <stdio.h>

int main(int argc, char const *argv[])
{
	int w,m,c;
	w=m=c=0;
	for(;m<=20;m++){
		for (; w<=34; w++)
		{
			if (m*5+w*3+(100-w-m)/3==100 )
			{
				printf("%d,%d,%d\n",m,w,100-w-m);
			}
		}
	}

	return 0;
}