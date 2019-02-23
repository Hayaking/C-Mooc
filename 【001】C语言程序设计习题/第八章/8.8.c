#include <stdio.h>

int main(){
	int a[11]={0},user_num;
	for(int i=1;i<=40;i++){
		scanf("%d",&user_num);
		a[user_num]++;
	}
	printf("Grade\tCount\tHistogram\n");
	for(int i=1;i<=10;i++){
		printf("%d\t%d\t",i,a[i]);
		for(int j=1;j<a[i];j++){
			printf("*");
		}
		printf("\n");
	
	}
	return 0;
}