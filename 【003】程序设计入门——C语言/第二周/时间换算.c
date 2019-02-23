#include <stdio.h>

int bjt[4]={0};
int bjt2[2]={0};
void fl(int n);
int main()
{
	int num,s,h,m;
	scanf("%d",&num);
	if(num<=2359 && num>=0)
	{
		fl(num);
		bjt2[0]=bjt[0]*10+bjt[1];//百位和千位表示小时
		bjt2[1]=bjt[2]*10+bjt[3];//个位和十位表示分
		s=bjt2[0]*3600+bjt2[1]*60-8*3600;//-8h换算后的秒
		if(s<0)
			s=24*3600+s;
		h=s/3600;//小时
		m=(s-h*3600)/60;//分钟
		printf("%d",h*100+m);
	}
	return 0;
}
void fl(int n)
{
	for(int i=3;n>0;i--)
	{
		bjt[i] = n%10;
		n /=10;
	}
}