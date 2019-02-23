#include <stdio.h>

void Seperate(int a[], int n);
int main(){
	const int max = 105;
	int n,i,num[max];
	printf("Input n:");
	scanf("%d",&n);
	printf( "Input numbers:");
	for(i=0;i<n;i++)
		scanf("%d",&num[i]);
	Seperate(num,n);
	return 0;
}
void Seperate(int a[], int n){
	int i,j;
	for(i=0,j=0;i<n;i++){
		if(a[i]%2!=0){
			if(j==0)	printf("%d",a[i]),j++;
			else    printf(",%d",a[i]);
		}
	}
	printf("\n");
	for(i=0,j=0;i<n;i++){
		if(a[i]%2==0){
			if(j==0)	printf("%d",a[i]),j++;
			else    printf(",%d",a[i]);
		}
	}

}