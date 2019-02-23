/*题目内容：
已知某大奖赛有n个选手参赛，m（m>2）个评委为参赛选手评分（最高10分，最低0分）。统分规则为：在每个选手的m个得分中，去掉一个最高分和一个最低分后，取平均分作为该选手的最后得分。要求编程实现：
（1）根据n个选手的最后得分，从高到低输出选手的得分名次表，以确定获奖名单；
（2）根据各选手的最后得分与各评委给该选手所评分数的差距，对每个评委评分的准确性和评分水准给出一个定量的评价，从高到低输出各评委得分的名次表。
提示：首先设计如下5个数组：
（1）sh[i]，存放第i个选手的编号；
（2）sf[i]，存放第i个选手的最后得分，即去掉一个最高分和一个最低分以后的平均分；
（3）ph[j]，存放第j个评委的编号；
（4）f[i][j]，存放第j个评委给第i个选手的评分；
（5）pf[j]，存放代表第j个评委评分水准的得分。
解决本问题的关键在于计算选手的最后得分和评委的得分。
先计算选手的最后得分。外层循环控制参赛选手的编号i从1变化到n，当第i个选手上场时，输入该选手的编号sh[i]。内层循环控制给选手评分的评委的编号j从1变化到m，依次输入第j个评委给第i个选手的评分f[i][j]，并将其累加到sf[i]中，同时求出最高分max和最低分min。当第i个选手的m个得分全部输入并累加完毕后，去掉一个最高分max，去掉一个最低分min，于是第i个选手的最后得分为：
sf[i] = (sf[i] – max – min)/(m-2);
当n个参赛选手的最后得分sf[0]，sf[1]，…，sf[n]全部计算完毕后，再将其从高到低排序，打印参赛选手的名次表。
下面计算评委的得分。评委给选手评分存在误差，即f[i][j]≠sf[i]是正常的，也是允许的。但如果某个评委给每个选手的评分与各选手的最后得分都相差太大，则说明该评委的评分有失水准。可用下面的公式来对各个评委的评分水平进行定量评价：


程序的运行结果示例：
How many Athletes?
3↙
How many judges?
4↙
Scores of Athletes:
Athlete 1 is playing.
Please enter his number code:
101↙
Judge 1 gives score:
9.8↙
Judge 2 gives score:
9.7↙
Judge 3 gives score:
9.5↙
Judge 4 gives score:
9.1↙
Delete a maximum score:9.8
Delete a minimum score:9.1
The final score of Athlete 101 is 9.600
Athlete 2 is playing.
Please enter his number code:
102↙
Judge 1 gives score:
8.9↙
Judge 2 gives score:
8.1↙
Judge 3 gives score:
8.6↙
Judge 4 gives score:
8.4↙
Delete a maximum score:8.9
Delete a minimum score:8.1
The final score of Athlete 102 is 8.500
Athlete 3 is playing.
Please enter his number code:
103↙
Judge 1 gives score:
9.0↙
Judge 2 gives score:
9.5↙
Judge 3 gives score:
9.4↙
Judge 4 gives score:
9.2↙
Delete a maximum score:9.5
Delete a minimum score:9.0
The final score of Athlete 103 is 9.300
Order of Athletes:
order    final score    number code
    1          9.600       101
    2          9.300       103
    3          8.500       102
Order of judges:
order    final score    number code
    1          9.900         3
    2          9.735         2
    3          9.700         4
    4          9.689         1
Over!Thank you!

程序中浮点数的数据类型均为float。
输入选手人数提示信息："How many Athletes?\n"
输入评委人数提示信息："How many judges?\n"
输入选手编号提示信息："Please enter his number code:\n"
输入格式:
评委人数、选手人数、选手编号："%d"
评委打分："%f"
输出格式：
 选手得分提示信息："Scores of Athletes:\n"
 当前选手提示信息："Athlete %d is playing.\n"
 评委打分提示信息："Judge %d gives score:\n"
 去掉最高分："Delete a maximum score:%.1f\n"
 去掉最低分："Delete a minimum score:%.1f\n"
 选手最后得分提示信息："The final score of Athlete %d is %.3f\n"
 选手得分排序提示信息："Order of Athletes:\n"
 评委排序提示信息："Order of judges:\n"
 选手/评委 排序表头提示信息都是："order\tfinal score\tnumber code\n"
 选手/评委 得分排序输出格式都是："%5d\t%11.3f\t%6d\n"
 评委排序表头提示信息: "order\tfinal score\tnumber code\n"
 评分结束提示信息： "Over!Thank you!\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#define MAX 100
#define list 	
#define swap(a,b,t)		t=a,a=b,b=t;
typedef struct  player{
	int sh[MAX];	//编号
	float sf[MAX];	//最后得分
	float f[MAX][MAX];	//各评委评分
}PLAYER;
typedef struct  judge{
	int ph[MAX];	//评委编号
	float pf[MAX];	//评委水准分
}JUDGE;
void input(struct player *p,int n_judge,int i,float *max,float *min,float *sum);
void sort_player(struct player *p,int n);
void sort_judge(struct judge *p,int n);
int main(){
	PLAYER player;
	JUDGE judge;
	int n_athlete,n_judge,i=0,j=0;
	float max,min,sum=0;
	printf("How many Athletes?\n");
	scanf("%d",&n_athlete);
	printf("How many judges?\n");
	scanf("%d",&n_judge);
	printf("Scores of Athletes:\n");
	for(i = 0;i < n_athlete; i++){
		printf("Athlete %d is playing.\n",i+1);
		input(&player, n_athlete, i, &max, &min, &sum),  player.sf[i] = (sum -max-min)/(n_judge-2);
		printf("The final score of Athlete %d is %.3f\n",player.sh[i],player.sf[i]);
	}
	sort_player(&player,n_athlete);
	printf("Order of Athletes:\n"),printf("order\tfinal score\tnumber code\n");
	for(i = 0;i < n_athlete; i++)
		printf("%5d\t%11.3f\t%6d\n",i+1,player.sf[i],player.sh[i]);
	printf("Order of judges:\n"),printf("order\tfinal score\tnumber code\n");
	for(i = 0;i < n_judge; i++){
		judge.ph[i] = i+1;
		float temp = 0;
		for(j = 0;j < n_athlete;j++)
			temp +=pow((player.f[j][i]-player.sf[j]),2);
		judge.pf[i]= 10 - sqrt(temp/n_athlete);
	}
	sort_judge(&judge,n_judge);
	for(i=0;i<=n_athlete;i++)	printf("%5d\t%11.3f\t%6d\n",i+1,judge.pf[i],judge.ph[i]);
	printf("Over!Thank you!\n");
	return 0;
}
void input(struct player *p,int n_judge,int i,float *max,float *min,float *sum){
	*max=0,*min=100,*sum=0;
	printf("Please enter his number code:\n");
	scanf("%d",&p->sh[i]);                                                                   
	for(int j = 0;j <= n_judge; j++){
		printf("Judge %d gives score:\n",j+1);
		scanf("%f",&p->f[i][j]);
		*sum = *sum + p->f[i][j];
		if(*max < p->f[i][j])	*max = p->f[i][j];
		if(*min > p->f[i][j])	*min = p->f[i][j];
	}
	printf("Delete a maximum score:%.1f\n",*max);
	printf("Delete a minimum score:%.1f\n",*min);
}
void sort_player(struct player *p,int n){
	int t1;
	float t2;
	float t3[MAX];
	for(int i = 0; i < n; i ++){
        for(int j = i; j < n; j ++){
			if (p->sf[j] < p->sf[j+1]){
				swap(p->sh[j],p->sh[j+1],t1);
				swap(p->sf[j],p->sf[j+1],t2);
                memcpy(t3,p->f[j], sizeof(t3));
                memcpy(p->f[j],p->f[j+1], sizeof(t3));
                memcpy(p->f[j+1],t3, sizeof(t3));
            }
        }
    }
}
void sort_judge(struct judge *p,int n){
	int t1;
	float t2;
	for(int i = 0; i < n; i ++){
        for(int j = 0; j < n; j ++){
			if (p->pf[j] < p->pf[j+1]){
				swap(p->pf[j],p->pf[j+1],t2);
				swap(p->ph[j],p->ph[j+1],t1);
            }
        }
    }
}