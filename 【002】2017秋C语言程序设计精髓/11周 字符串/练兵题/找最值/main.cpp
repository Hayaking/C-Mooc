#include <stdio.h>

int FindMax(int num[], int n, int *pMaxPos);//函数返回最大值，pMaxPos返回最大值所在的下标
int FindMin(int num[], int n, int *pMinPos);//函数返回最小值，pMaxPos返回最小值所在的下标
int main(){
	int num[10],MaxPos=0,MinPos=0;
	printf("Input 10 numbers:\n");
	for(int i=0;i<10;i++)
		scanf("%d",&num[i]);
	FindMax(num,10,&MaxPos);
	FindMin(num,10,&MinPos);
	printf("Max=%d,Position=%d,Min=%d,Position=%d\n",num[MaxPos],MaxPos,num[MinPos],MinPos);
	return 0;
}
int FindMax(int num[], int n, int *pMaxPos){
	int max=num[0],i;
	for(i=0;i<n;i++){
		if(max<num[i])	max=num[i],*pMaxPos=i;
	}
	//printf("%d,%d",max,*pMaxPos);
	return max;
}
int FindMin(int num[], int n, int *pMinPos){
	int min=num[0],i;
	for(i=0;i<n;i++){
		if(min>num[i])	min=num[i],*pMinPos=i;
	}
	//printf("%d,%d",min,*pMinPos);
	return min;
}