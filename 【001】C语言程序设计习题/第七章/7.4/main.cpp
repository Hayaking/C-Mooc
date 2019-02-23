/*穷举法计算最小公倍数*/
#include <stdio.h>
int main()
{
	int x1,x2,com_mul;
	scanf("%d%d",&x1,&x2);
	com_mul= x1>x2?x1:x2;
	for(com_mul;!(com_mul%x1==0 && com_mul%x2==0);com_mul++);
	printf("%d\n",com_mul);
	return 0;
}