#include <stdio.h>
#include <string.h>

int CountRepeatNum(char count[], int n);
int main(){
	
	char a[10];
	printf("Input n:\n");
	scanf("%s",a);
	if(CountRepeatNum(a,strlen(a))==-1)	printf("No repeated digit!\n");
	else	printf("Repeated digit!\n");
	return 0;
}
int CountRepeatNum(char count[], int n){
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(count[i]==count[j])	return	count[i];
		}
	}
	return -1;
}