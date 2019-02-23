#include <stdio.h>
#include <string.h>
typedef struct ren{
	int jack;
	int tom;
	int rose;
}REN;
int main(){
	int n,i=1;
	char name[10];
	REN ren={0,0,0};
	printf("Input the number of electorates:");
	scanf("%d",&n);
	while(n){
		printf("Input vote %d:",i++);
		scanf("%s",name);
		if(strcmp(name,"jack")==0)	ren.jack++;
		else if(strcmp(name,"tom")==0)	ren.tom++;
		else if(strcmp(name,"rose")==0)	ren.rose++;
		n--;
	}
	printf("Election results:\n");
	printf("%s:%d\n","tom",ren.tom);
	printf("%s:%d\n","jack",ren.jack);
	printf("%s:%d\n","rose",ren.rose);
	int s[3]={ren.jack,ren.tom,ren.rose};
	char d[3][5]={"jack","tom","rose"};
	int max=s[0],pos;
	for(int i=0;i<3;i++)
		if(s[i]>max)	max=s[i],pos=i;
	printf("%s wins\n",d[pos]);
	return 0;
}