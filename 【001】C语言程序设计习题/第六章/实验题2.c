#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
#include <math.h>

int x[2];
char op;
double user_num;

void input_output();
char rand_op();
void zhengque();
void shibai();
int cacu(int a,int b,char c);
int main()
{
	int cont=0;
    srand((unsigned)time(NULL)); 
thispart:  for(int i=0;i<=9;i++)
	{
		op=rand_op();
		input_output();
		if(user_num==cacu(x[0],x[1],op))
		{
			printf("Right!\n");
			zhengque();
			cont++;
		}
		else
		{
			printf("Wrong!\n");
			shibai();
		}
			
	}
	printf("----总分:%d-----正确率:%0.2lf\n",cont*10,cont/10.0);
	if(cont/10.0<0.75)	goto thispart;
    return 0;
}
void input_output()
{
  for(int i=0;i<=1;i++)//对四个数字随机初始化
    x[i]=rand()%10+1;
  printf("%d%c%d\n",x[0],op,x[1]);//输出算式
  scanf("%lf",&user_num);//用户输入结果
}
char rand_op()
{
    switch(rand()%4+1)
    {
      case 1:return '+';
      case 2:return '-';
      case 3:return '*';
      case 4:return '/';
    }
}
int cacu(int a,int b,char c)
{
	switch(c)
	{
	case '+': return a+b;
	case '-': return a-b;
	case '*': return a*b;
	case '/': return a/b;
	}
}
void zhengque()
{
	switch(rand()%4+1)
    {
      case 1:
		  printf("very good!\n");
		  break;
      case 2:
		   printf("excellent!\n");
		  break;
      case 3:
		   printf("nice work!\n");
		  break;
      case 4:
		   printf("keep the good work!\n");
		  break;
    }
}
void shibai()
{
	switch(rand()%4+1)
    {
      case 1:
		  printf("no,please try again.\n");
		  break;
      case 2:
		   printf("wrong!try one more.\n");
		  break;
      case 3:
		   printf("don't give up.\n");
		  break;
      case 4:
		   printf("not correct keep trying.\n");
		  break;
    }
}
