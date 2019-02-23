#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	int a[15]={1,3,5,7,8,10,12,14};
	int user_num,i,index=0;
	scanf("%d",&user_num);
	for (i = 0; i<10; i++)
	{
		if(a[i]<=user_num && a[i+1]>user_num){
			index=i+1;
		}
		else if(i==8 && a[i]<user_num) index=i;
	}
	for(i = 10;i>=index;i--)
		a[i+1]=a[i];
	a[index]=user_num;
	printf("index is %d\n",index);
	for(i=0;i<9;i++)
		printf("%4d ",a[i] );
	printf("\n");
	return 0;
}