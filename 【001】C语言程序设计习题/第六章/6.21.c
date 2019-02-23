#include <stdio.h>

int main()
{
	int p[147]={0},cont=0;
	for(int i=0;i<21;i++)
	{
		if((i*5)%5==0)
			p[i*5]=1;
	}
	for(int i=0;i<21;i++)
	{
		if((i*6)%6==0)
			p[i*6]=1;
	}
	for(int i=0;i<21;i++)
	{
		if((i*7)%7==0)
			p[i*7]=1;
	}
	for(int i=0;i<146;i++)
		if(p[i]==1) cont++;
		
	printf("%d",cont);

}