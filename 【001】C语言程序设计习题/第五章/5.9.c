#include<stdio.h>

int main(){

	int score,mark;
	char grade;
	printf("please enter score:");
	scanf("%d",&score);
	mark=score<0 || score >100 ? -1:score;
	if(mark==-1)
		return 0;
	else if(mark>=90 && mark<=100)
		grade='A';
	else if(mark>=80 && mark<90)
		grade='B';
	else if(mark>=70 && mark<80)
		grade='C';
	else if(mark>=60 && mark<70)
		grade='D';
	else
		grade='E';
	printf("%c\n",grade);
	return 0;
}