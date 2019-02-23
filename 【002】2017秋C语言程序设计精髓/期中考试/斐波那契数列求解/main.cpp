#include <stdio.h>

int fibo(int n);
int main(){
	int n;
	printf("Input  n:\n");
	scanf("%d",&n);
	fibo(n);
	return 0;
}
int fibo(int n){
	int f1=1,f2=1,f,t;

		for(int i=1;i<=n;i++){
			if(i==1 || i==2){
				printf("%d\n",1);
				continue;			
			}
			f=f1+f2;
			f1=f2;
			f2=f;
			printf("%d\n",f);
		}
	return 0;
}