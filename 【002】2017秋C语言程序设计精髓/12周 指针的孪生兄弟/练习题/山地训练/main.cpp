#include <stdio.h>
#include <string.h>
long Fun(long M, long T, long U, long F, long D, char str[]);
int main(){
	long M,T,U,F,D;
	char str[100005];
	printf("Input M,T,U,F,D:");
	scanf("%ld%ld%ld%ld%ld",&M,&T,&U,&F,&D);
	printf("Input conditions of road:");
	scanf("%s",str);
	printf("num=%ld\n",Fun(M,T,U,F,D,str));
	return 0;
}
//M:时间限制	T:路段个数	U:上坡耗时	F:平底耗时	D:下坡耗时
long Fun(long M, long T, long U, long F, long D, char str[]){
	long i,time = 0;
	for(i = 0;i < T;i++){
		if(str[i] == 'u' || str[i] == 'd')	time +=(U+D);
		else time += 2*F;
		if(time >=M)	break;
	}
	if(i>=T)	return i;
	else    return i+1;

}