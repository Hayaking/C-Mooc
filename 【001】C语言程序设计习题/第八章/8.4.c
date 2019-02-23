#include <stdio.h>

int judge(int num[]);
int main(){
	int a[45];
	int n,i;
	printf("please input stu'num:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("%d\n",judge(a));
	return 0;
}
int judge(int num[]){
	int i,n=0;
	for(i=0;i<n;i++)
		if(num[i]<60)	n++;
	return n;
}