#include <stdio.h>
#include <math.h>
int main(){
	int n,num;
	float a[15][15];
	printf("Input n(n<=10):\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		printf("%7d",i);
	printf("\n");
	for(num=0;num<=100;num++)
		if(num!=100)	a[num/10][num%10]=sqrt((float)num);
			//if(num%10==0 && num!=0)	a[num/10][0]=num/10;
			//else if(num==0)    a[num][0]=0;	
	for(int i=0;i<n;i++){
		printf("%d",i);
		for(int j=0;j<n;j++)
			printf("%7.3f",a[i][j]);
		printf("\n");
	}
	return 0;
}