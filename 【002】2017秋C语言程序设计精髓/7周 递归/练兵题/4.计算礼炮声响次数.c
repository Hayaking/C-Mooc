/*题目内容：
在海军节开幕式上，有A、B、C三艘军舰要同时开始鸣放礼炮各21响。已知A舰每隔5秒放1次，B舰每隔6秒放1次，C舰每隔7秒放1次。假设各炮手对时间的掌握非常准确，请编程计算观众总共可以听到几次礼炮声。
输入格式:无
输出格式："n=%d"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>

int pao[148]={0};
int main()
{
	int a,b,c;
	a=b=c=0;
	for(int i=1;i<=147;i++)
	{
		if(i%5==0 && a<21 )
		{
			pao[i]=1;
			a++;
		}
		if(i%6==0 && b<21 )
		{
			pao[i]=1;
			b++;
		}
		if(i%7==0 && c<21 )
		{
			pao[i]=1;
			c++;
		}
	}
	int cont,i=0;
	for(cont=1;cont<=148;cont++)
	{
		if(pao[cont]==1)
			i++;

	}
	printf("n=%d",i);
	
	
	return 0;

}