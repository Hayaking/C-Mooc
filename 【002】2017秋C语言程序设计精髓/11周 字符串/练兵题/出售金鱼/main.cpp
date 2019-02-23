#include <stdio.h>
#define F(x,i)	(x-(x/i+1/i))
#define FFF(x)	F(F(F(F(x,2.0),3.0),4.0),5.0)
int main(){
	for(double i=1.0;;i++){
		if((int)FFF(i)==11){
			printf("There are %d fishes at first.\n",(int)i);
			return 0;
		}
	}
	return 0;
}