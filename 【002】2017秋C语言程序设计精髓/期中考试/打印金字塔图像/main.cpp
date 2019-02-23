#include <stdio.h>

void MyPrint(int n); 
int main(){
	int i;
	printf("Please input n:\n");
	scanf("%d",&i);
	MyPrint(i);
	return 0;
}
void MyPrint(int n){
	char ch ='A',temp;
	int k=1,temp1=n,h;
	if(n<1 || n>13)	printf("Input error!\n");
	else{
		for(n;n;n--){
			/*temp=ch;*/
			ch='A';
			h=temp1;
			for(h;h;h--){
				printf(" ");			
			}
			for(int j=1;j<=k;j++){
				printf("%c",temp++);
			}
			printf("\n");
			k=k+2;
			temp1--;
		}
	}
}