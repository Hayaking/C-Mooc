#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
	int target=1000;
	int a[4]={0};
	while(target<=9999)
	{
		a[0]=target/1000;	//千位
		a[1]=target/100%10; //百位
		a[2]=target/10%10;	//十位
		a[3]=target%10;		//个位
		if (a[0]==a[1] && a[2]==a[3] && a[0]!=a[2])
		{
			int i;
			for(i=(int)sqrt((double)1000);i<100;i++)
			{
				if (i*i==target)
				{
					printf("%d\n",target );
					return 0;
				}
			}
		
		}
		target++;
	}
	return 0;
}