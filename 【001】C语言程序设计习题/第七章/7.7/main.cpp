/*���ַ���ʵ�������Լ��*/

#include <stdio.h>

int gcd1(int a,int b);//��ٷ�
int gcd2(int a,int b);//ŷ����÷�
int gcd3(int a,int b);//�ݹ鷨
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("��ٷ��� %d\n",gcd1(a,b));
	printf("ŷ����÷��� %d\n",gcd2(a,b));
	printf("�ݹ鷨�� %d\n",gcd3(a,b));
	return 0;
}
int gcd1(int a,int b)
{
	int min;
	min = a<b?a:b;
	for(min;!(a%min==0 && b% min==0);min--);
	return min;
}
int gcd2(int a,int b)
{
	if(b==0)
		return a;
	else 
		return gcd2(b,a%b);
}
int gcd3(int a,int b)
{
	if(a>b)
		return gcd3(a-b,b);
	if(a==b)
		return a;
	if(a<b)
		return gcd3(a,b-a);
}