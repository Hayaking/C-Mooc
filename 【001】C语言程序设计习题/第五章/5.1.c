/*全自己写的*/
#include <stdio.h>
int main()
{
	float a,b,compete,standard;
	printf("Input percent of A and B:");
	scanf("%f%f",&a,&b);
	compete = a*10.0+b*6;
	standard = a*8.0+b*10;
	printf("compete = %.4f\nstandard = %.4f\n",compete,standard);
	if(compete > standard)
	{
		printf("The Best Response is compete!");
	}
	else
	{
		printf("The Best Response is standard!");
	}
	return 0;
}