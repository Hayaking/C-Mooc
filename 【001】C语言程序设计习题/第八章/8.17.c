#include <stdio.h>
#define N 40
void DataSort(int score[],int n);
int ReadScore(int score[]);
void PrintScore(int score[],int n);
int main(){
	int score[N],n;
	n=ReadScore(score);
	printf("Total students are %d\n",n);
	DataSort(score,n);
	printf("Sorted scores:");
	PrintScore(score,n);
	return 0;
}
int ReadScore(int score[]){
	int i=-1;
	do{
		i++;
		printf("Input score:");
		scanf("%d",&score[i]);
	}while(score[i]>=0);
	return i;
}
void DataSort(int a[],int n){
	int i,j,temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(a[i]<a[j]){
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
}
void PrintScore(int score[],int n){
	int i;
	for (i=0;i<n; i++){
		printf("%4d",score[i]);
	}
	printf("\n");
}
