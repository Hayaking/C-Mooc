#include<stdio.h>

int hanio(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",hanio(n));
	return 0;
}
int hanio(int n)
{
	if(n==3)
		return 7;
	else
		return 2*(hanio(n-1)+1)-1;
}