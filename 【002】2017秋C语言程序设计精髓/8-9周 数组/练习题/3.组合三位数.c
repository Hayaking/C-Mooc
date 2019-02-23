/*题目内容：
将1到9这九个数字分成三个3位数，要求第一个3位数，正好是第二个3位数的1/2，是第三个3位数的1/3。问应当怎样分，编写程序实现。

输入格式: 无
输出格式："%d,%d,%d\n" （注意：输出的顺序为第一个3位数，第二个3位数，第三个3位数）
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/
#include<stdio.h>  
int main()  
{  
    int a,b,c,i,j,s[9];  
    for (a=100;a<333;a++)  
    {  
        b=2*a;c=3*a;  
        s[0]=a%10;s[1]=a%100/10;s[2]=a/100;  
        s[3]=b%10;s[4]=b%100/10;s[5]=b/100;  
        s[6]=c%10;s[7]=c%100/10;s[8]=c/100;  
        for(i=0;i<8;i++)  {  
	        for(j=i+1;j<9;j++)  
	            if(s[i]==s[j]) break;  
	        if(j<9) break;  
        }  
        if((i==8)&&(j==9))  
            printf("%d,%d,%d\n",a,b,c);  
    }  
    return 0;  
}
/*#include<stdio.h>

void fl(int num,int n[]);
int judge(int n1[],int n2[],int n3[]);
int judge2(int n[]);
int a[3],b[3],c[3];
int main()
{
	for(int i=100;i<334;i++)
	{
		fl(i,a);
		fl(2*i,b);
		fl(3*i,c);
		if(judge(a,b,c)==0)
			printf("%d,%d,%d\n" ,a[0]+a[1]*10+a[2]*100,b[0]+b[1]*10+b[2]*100,c[0]+c[1]*10+c[2]*100);
	}
	return 0;
}
void fl(int num,int n[])
{
	for(int i=0;num;i++)
	{
		n[i]=num%10;
		num /=10;
	}
}
int judge(int n1[],int n2[],int n3[])
{
	if(judge2(n1)==-1 || judge2(n2)==-1||judge2(n3)==-1)
		return -1;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			if(n1[i]-n2[j]==0 ||n1[i]-n3[j]==0 || n2[i]-n3[j]==0)	
					return -1;
		}
	}
	return 0;
}
int judge2(int n[])
{
	if(n[0]==n[1] || n[0]==n[2] || n[2]==n[3] ||n[0]==0||n[1]==0||n[2]==0)	return -1;
	return 0;
}
*/