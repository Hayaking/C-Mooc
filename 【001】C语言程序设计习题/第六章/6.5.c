#include<stdio.h>

int main(int argc, char const *argv[])
{
	double c;
	int f;
	printf("F  ----- C\n" );
	for (f = 0; f <=300; f +=10)
	{
		c= 5.0/9*(f-32);
		printf("%d -----%.2f\n",f,c);
	}
	getchar();

	return 0;
}
