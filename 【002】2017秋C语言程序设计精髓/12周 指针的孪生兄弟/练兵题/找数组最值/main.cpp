#include <stdio.h>
#define M 15
#define N 15

int main(){
	int num[M][N],m,n,max,posi=0,posj=0;
	printf("Input m,n:\n");
	scanf("%d,%d",&m,&n);
	if(m>10 || n>10)    return 0;
	max=num[0][0];
	printf("Input %d*%d array:\n",m,n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			scanf("%d",&num[i][j]);
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++)
			if(max<num[i][j])	max=num[i][j],posi=i,posj=j;
		
	}
	printf("max=%d,row=%d,col=%d\n",max,posi,posj);
	return 0;
}

