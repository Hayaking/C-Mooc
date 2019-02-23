#include <stdio.h>

void sy(int a,int b,int *shang,int *yu);
int main(int argc, char const *argv[])
{
	int a,b,i;
	int shang,yu;
	scanf("%d/%d",&a,&b);
	if(a>b || a<10 || b>100)    return 0;
	printf("0.");
	for(i=0;i<200;i++){
		sy(a*10,b,&shang,&yu);
		a=yu;
		printf("%d",shang);
		if(yu==0)  break;
	}
	printf("\n"); 
	return 0;
}
void sy(int a,int b,int *shang,int *yu){
	*yu=a%b;
	*shang=a/b;
}