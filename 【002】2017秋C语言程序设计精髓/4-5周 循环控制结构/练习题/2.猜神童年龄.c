/*题目内容：
美国数学家维纳（N.Wiener）智力早熟，11岁就上了大学。他曾在1935~1936年应邀来中国清华大学讲学。一次，他参加某个重要会议，年轻的脸孔引人注目。于是有人询问他的年龄，他回答说：“我年龄的立方是一个4位数。我年龄的4次方是一个6位数。这
10个数字正好包含了从0到9这10个数字，每个都恰好出现1次。”请你编程算出他当时到底有多年轻。
【解题思路】：因为已知年龄的立方是一个4位数字，所以可以推断年龄的范围在10到22之间，因此确定穷举范围为10到22。如果年龄还满足“年龄的4次方是一个6位数”这个条件，则先计算年龄的立方值的每一位数字，从低位到高位分别保存到变量b1,b2,b3,b4
中，再计算年龄的4次方值的每一位数字，从低位到高位分别保存到变量a1,a2,a3,a4,a5,a6中。如果上述10个数字互不相同，则必定是包含了从0到9这10个数字并且每个都恰好出现1次，因此只要判断上述10个数字互不相同，即可确定这个年龄值为所求。

输出格式："age=%d\n"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>
int a[4],b[6];
int judge();
void fl(int n,int c[]);
int main()
{
	int age,age3,age4;
	for(age=10;age<=22;age++)
	{
		age3=age*age*age;
		age4=age*age*age*age;	
		if(age3<=9999 && age3>=1000 && age4<=999999 && age4>=100000)
		{
			fl(age3,a);
			fl(age4,b);
			if(judge()!=0){
				printf("age=%d\n",age);
			}
			//printf("age=%d\n",age);
			//printf("%d\n%d\n",age3,age4);
			//for(int i=0;i<4;i++)
			//	printf("%2d",a[i]);
			//printf("\n");
			//for(int i=0;i<6;i++)
			//	printf("%2d",b[i]);
			//printf("\n");
		}
	}
}
void fl(int n,int c[]){
	for(int i=0;n>0;i++){
		c[i]=n%10;
		n /=10;
	}	
}

int judge(){
	for(int i=0;i<4;i++){
		if(b[0]-a[i]==0)
			return 0;
	}
	for(int i=1;i<6;i++){
		if(b[0]-b[i]==0)
			return 0;
	}
	return 1;
}