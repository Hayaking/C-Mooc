#include <stdio.h>

typedef struct winners
{
    char name[20];
    int finalScore;
    int classScore;
    char work;
    char west;
    int paper;
    int scholarship;
} WIN;
void Addup(WIN stu[], int n);
int FindMax(WIN stu[], int n);
int main(){
	WIN ren[100];
	int n,i=0;
	printf("Input n:");
	scanf("%d",&n);
	while(n){
		printf("Input name:");
		scanf("%s",&ren[i].name);
		printf("Input final score:");
		scanf("%d",&ren[i].finalScore);
		printf("Input class score:");
		scanf("%d",&ren[i].classScore);
		printf("Class cadre or not?(Y/N):");
		scanf(" %c",&ren[i].work);
		printf("Students from the West or not?(Y/N):");
		scanf(" %c",&ren[i].west);
		printf("Input the number of published papers:");
		scanf("%d",&ren[i].paper);
		Addup(ren,i);
		i++;
		n--;
	}
	FindMax(ren,i);
	return 0;
}
void Addup(WIN stu[], int n){
	int sum=0;
	if(stu[n].finalScore>80 && stu[n].paper>=1)	sum += 8000;
	if(stu[n].finalScore>85 && stu[n].classScore>80) sum +=4000;
	if(stu[n].finalScore>90) sum +=2000;
	if(stu[n].finalScore>85 && stu[n].west=='Y') sum += 1000;
	if(stu[n].classScore>80 && stu[n].work=='Y')	sum += 850;
	printf("name:%s,scholarship:%d\n",stu[n].name,sum);
	stu[n].scholarship=sum;
}
int FindMax(WIN stu[], int n){
	int max=stu[0].finalScore,pos=0;
	for(int i=0;i<n;i++)
		if(stu[i].scholarship > max)    max = stu[i].scholarship,pos=i;
	printf("%s get the highest scholarship %d\n",stu[pos].name,max);
	return 0;
}