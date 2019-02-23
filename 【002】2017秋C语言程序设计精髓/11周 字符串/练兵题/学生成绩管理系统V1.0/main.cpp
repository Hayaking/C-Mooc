#include <stdio.h>
#define MENU "Management for Students' scores\n1.Input record\n2.Caculate total and average score of course\n3.Sort in descending order by score\n4.Sort in ascending order by number\n5.Search by number\n6.Statistic analysis\n7.List record\n0.Exit\nPlease Input your choice:\n"
#define swap(a,b,t)	t=a,a=b,b=t;
struct cl
{
	long num[31];
	float grade[31];
};
void Input_record(int stu_num,struct cl *stu);//输入学生学号和成绩
void sum_ave(int stu_num,struct cl *stu,float *psum,float *pave);//总分,平均分
void des_score(int stu_num,struct cl *stu);//降序输出成绩
void asc_num(int stu_num,struct cl *stu);//升序输出学号
int Search(int stu_num,struct cl *stu,long *ppos,float *pgrade);//学号查找排名,成绩
void analysis(int stu_num,struct cl *stu);//分析
void print(int stu_num,struct cl *stu);

int main(){
	
	struct cl stu;
	int stu_num,cho_num;
	long pos;
	float sum=0,ave=0;
	float grade;
	printf("Input student number(n<30):\n");
	scanf("%d",&stu_num);
	while(1){
		printf(MENU);
		scanf("%d",&cho_num);
		switch(cho_num){
			case 0: 
				printf("End of program!");
				return 0;
			case 1: 
				printf("Input student's ID, name and score:\n");
				Input_record(stu_num,&stu);
				break;
			case 2:
				sum_ave(stu_num,&stu,&sum,&ave);
				printf("sum=%.0f,aver=%.2f\n",sum,ave);
				break;
			case 3:
				des_score(stu_num,&stu);
				printf("Sort in descending order by score:\n");
				print(stu_num,&stu);
				break;
			case 4:
				asc_num(stu_num,&stu);
				printf("Sort in ascending order by number:\n");
				print(stu_num,&stu);
				break;
			case 5:
				printf("Input the number you want to search:\n");
				Search(stu_num,&stu,&pos,&grade);
				printf("%ld\t%.0f\n",pos,grade);
				break;
			case 6:
				analysis(stu_num,&stu);
				break;
			case 7:
				print(stu_num,&stu);
				break;
			default:
				printf("Input error!\n");
		}
	}
	return 0;
}
void Input_record(int stu_num,struct cl *stu){
	int i;
	for(i=0;i<stu_num;i++)
		scanf("%ld%f",&stu->num[i],&stu->grade[i]);
}
void sum_ave(int stu_num,struct cl *stu,float *psum,float *pave){
	int i;
	for(i=0;i<stu_num;i++)
		*psum +=stu->grade[i];
	*pave=*psum/stu_num;
}
void des_score(int stu_num,struct cl *stu){
	int i,j;
	float t2;
	long t1;
	for(i=0;i<stu_num;i++){
		for(j=0;j<stu_num;j++){
			if(stu->grade[j] < stu->grade[j+1]){
				swap(stu->grade[j],stu->grade[j+1],t2);
				swap(stu->num[j],stu->num[j+1],t1);
			}
		}
	}
}
void asc_num(int stu_num,struct cl *stu){
	int i,j;
	float t2;
	long t1;
	for(i=0;i<stu_num-1;i++){//!!!!!!!!!!要减1,否则最后一轮交换时,就全往后挪一位了
		for(j=0;j<stu_num-1;j++){
			if(stu->num[j] > stu->num[j+1]){
				swap(stu->grade[j],stu->grade[j+1],t2);
				swap(stu->num[j],stu->num[j+1],t1);
			}
		}
	}
}
void print(int stu_num,struct cl *stu){
	int i=0;
	for(i=0;i<stu_num;i++)
		printf("%ld\t%.0f\n",stu->num[i],stu->grade[i]);
}
int Search(int stu_num,struct cl *stu,long *ppos,float *pgrade){
	int i=0;
	long target_num;
	scanf("%ld",&target_num);
	for(i=0;i<stu_num;i++){
		if(stu->num[i]==target_num){
			*ppos=stu->num[i];
			*pgrade=stu->grade[i];
			return 0;
		}
	}
	printf("Not found!\n");
	return 0;
}
void analysis(int stu_num,struct cl *stu){
	int a[6]={0},i,j;
	for(i=0;i<stu_num;i++){
		if(stu->grade[i]<60)	a[0]++;
		else if(stu->grade[i]>=60 &&stu->grade[i]<=69)	a[1]++;
		else if(stu->grade[i]>=70 &&stu->grade[i]<=79)	a[2]++;
		else if(stu->grade[i]>=80 &&stu->grade[i]<=89)	a[3]++;
		else if(stu->grade[i]>=90 &&stu->grade[i]<=99)	a[4]++;
		else if(stu->grade[i]==100)	a[5]++;
	}
	printf("<60\t%d\t%.2f%%\n",a[0],a[0]/(float)stu_num*100);
	for(i=60,j=1;i<=90;i+=10,j++)
		printf("%d-%d\t%d\t%.2f%%\n",i,i+9,a[j],a[j]/(float)stu_num*100);
	printf("%d\t%d\t%.2f%%\n",100,a[5],a[5]/(float)stu_num*100);
}


