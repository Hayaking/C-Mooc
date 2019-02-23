#include <stdio.h>
#include <math.h>

typedef struct clock{
    int hour;
    int minute;
    int second;
} CLOCK;
CLOCK CalculateTime(CLOCK t1, CLOCK t2);
int main(int argc, char const *argv[]){
	CLOCK one,two,c;
	printf("Input time one:(hour，minute):");
	scanf("%d,%d",&one.hour,&one.minute);
	printf( "Input time two: (hour，minute):"); 
	scanf("%d,%d",&two.hour,&two.minute);
	c=CalculateTime(one,two); 
	printf("%dhour,%dminute\n",c.hour,c.minute);
	return 0;
}
CLOCK CalculateTime(CLOCK t1, CLOCK t2){
	CLOCK c={0,0,0};
	int v=t1.hour*60+t1.minute-t2.hour*60-t2.minute;
	c.hour = abs(v/60);
	c.minute = abs(v) -c.hour*60;
	return c;
}