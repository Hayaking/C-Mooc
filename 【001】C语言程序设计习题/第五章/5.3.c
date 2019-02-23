#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,area,s;
	scanf("%f,%f,%f",&a,&b,&c);
	if(a+b>c && a+c>b && b+c>a){
		s=(a+b+c)/2.0;
		area=sqrt(s*(s-a)*(s-b)*(s-c));
		printf("%f",area);
	}
	else{
		printf("不能构成三角形");
	}
	return 0;
}