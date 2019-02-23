#include <stdio.h>
#include <math.h>
int fun(int x);
int main(){
	int m,n,sum=0,t;
	printf("Please input m,n:\n");
	scanf("%d,%d",&m,&n);
	if(m>n) {
		t=m;
		m=n;
		n=t;
	}
	for(int i=m;i<=n;i++){
		if(fun(i)==1) sum+=i;
	}
	printf("sum=%d\n",sum);
	return 0;
}
int fun(int x){
	for(int i=2;i<=sqrt((float)x);i++){
		if(x%i==0)
			return 0;
	}
	return 1;
}