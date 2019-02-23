#include <stdio.h>

int main(){
	int a[]={1,1,2,3,24,120,720,5040,40320,362880};
	for(int i=100;i<=999;i++){
		if(a[i/100]+a[i/10%10]+a[i%10]==i)	printf("%d\n",i);
	}
	return 0;
}
