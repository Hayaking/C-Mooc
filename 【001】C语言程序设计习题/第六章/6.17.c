#include <stdio.h>

int main(int argc, char const *argv[])
{
	int s,w,y,cont=0;
	for (s=1; s<=10; s++)
	{
		for (w=1; w<=20; w++)
		{
			for(y=1;y<=100;y++){
				if (s*10+w*5+y==100 && s+w+y==50)
				{
					cont++;
					printf("%d,%d,%d\n",s,w,y );
				}
			}

		}
	}
	printf("%d\n",cont);
	return 0;
}