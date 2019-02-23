#include <stdio.h>

int main()
{
	int temp,ou=0,ji=0;
	do{

	scanf("%d",&temp);
	if(temp==-1)
		break;
	if(temp%2==0)
		ou++;
	else
		ji++;
	}while(temp!=-1);
	printf("%d %d",ji,ou);
	return 0;

}