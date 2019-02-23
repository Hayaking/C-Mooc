#include<stdio.h>
#include<math.h>
#define F(x) x*x*x-x-1
#define precise 1e-6
int main(){
	float a,b,left,right,middle;
	scanf("%f,%f",&a,&b);
	while (1)
	{
		left=F(a);
		right=F(b);
		middle=F((a+b)/2);
		if(fabs(middle)<precise)	break;
		if(left*middle<0)	b=(a+b)/2;
		else if(right*middle<0)	a=(a+b)/2;	
	}
	printf("x=%6.2f\n",(a+b)/2);
	return 0;
}