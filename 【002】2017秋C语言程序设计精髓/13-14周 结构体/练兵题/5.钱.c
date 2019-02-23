#include <stdio.h>
#include <math.h>
int main(){
	double s_pay = 0;
	double m_pay = 0;
	for(int i=0;i<30;i++)
		m_pay +=pow(2.0,i),s_pay +=100000;
	printf("to Stranger: %.2lf yuan\n",m_pay/100);
	printf("to Richman: %.2lf yuan\n",s_pay);
	
	return 0;
}
//搞清楚谁给谁钱