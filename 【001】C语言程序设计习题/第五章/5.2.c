#include <stdio.h>
int main(){
	int num;
	scanf("%d",&num);
	if(num%2==0||num!=0){
		printf("%d是偶数",num);
	}
	else if(num==0){
		printf("0非奇非偶");
	}
	else{
		printf("%d是奇数",num);
	}
	return 0;
}