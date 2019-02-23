/*题目内容：
一辆卡车违犯交通规则，撞人后逃跑。现场有三人目击事件，但都没记住车号，只记下车号的一些特征。甲说：牌照的前两位数字是相同的；乙说：牌照的后两位数字是相同的，但与前两位不同；丙是位数学家，他说：四位的车号刚好是一个整数的平方。现在请根据以上线索帮助警方找出车号以便尽快破案。
[提示]：假设这个4位数的前两位数字都是i，后两位数字都是j，则这个可能的4位数
k = 1000*i + 100*i + 10*j + j
式中，i和j都在0～9变化。此外，还应使k=m*m，m是整数。由于k是一个4位数，所以m值不可能小于31。
输入格式: 无
输出格式："k=%d,m=%d\n"

注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：32000kb*/
#include <stdio.h>
#include <math.h>

int main(){
	int i,j,num,m=31;
	for(i=1;i<=9;i++){
		for(j=1;j<=9 || m<100;j++){
			num=i*1000+100*i+j*10+j;
			for(m=31;m<100;m++){
				if(num==m*m){
					printf("k=%d,m=%d\n",num,m);
					break;
				}
			}	
		}
	}

	return 0;
}