#include <stdio.h>
#include <math.h>

int fl(int n);
int a[1000010]={0};
int main()
{
	int user_num,target=0,len;
	scanf("%d",&user_num);
	len=fl(user_num);
	for(int i=1;i<len;i++)
	{
		if(i%2!=0 && a[i]%2!=0 && a[i]!=0|| i%2==0 && a[i]%2==0 || i%2==0 && a[i]==0)	a[i]=1;
		else 	a[i]=0;
	}
	//printf("----------\n");
	for(int i=0;i<len;i++)
	{
		target +=a[i+1]*pow((double)2,i);
	}
	printf("%d",target);

}
int fl(int n)
{
	int i;
	for(i=1;n;i++)
	{
		a[i]=n%10;
		n /=10;
	}
	return i;
}