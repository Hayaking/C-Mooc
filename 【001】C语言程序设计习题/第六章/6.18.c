#include <stdio.h>

void line_1_2();
void f_mu();
void s_mu();
void t_mu();
int main()
{
	
	f_mu();
	printf("\n");
	s_mu();
	printf("\n");
	t_mu();
	return 0;
}
void line_1_2()
{
	int i,j;
	for(i=1;i<=9;i++)
		printf("%3d",i);
	printf("\n");
	for(j=1;j<=9;j++)
		printf("  _");
	printf("\n");
}
void f_mu()
{
	int a,b;
	line_1_2();
	
	for(a=1;a<=9;a++)
	{
		for(b=1;b<=9;b++)
		{
			printf("%3d",b*a);
		}
		printf("\n");
	}
	
}
void s_mu()
{
	int i,j;
	line_1_2();
	for(i=1;i<=9;i++)
	{
		for (j=1; j<=i;j++)
		{
			printf("%3d",i*j);
		}
		printf("\n");
	}
}
void t_mu()
{
	int i,j=1,n=1;
	line_1_2();
	for(i=1;i<=j;i++)
	{
		
		for (j=1; j<i;j++)
		{
			printf("   ");
		}
		for (j=n; j<=9;j++)
		{
			printf("%3d",i*j);
		}
		printf("\n");
		n++;
	}
}