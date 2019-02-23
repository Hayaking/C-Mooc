#include<stdio.h>

int main(){
char sex,sports,diet;
float faHeight,moHeight,self_Height,x=1;
printf("input\n");
scanf("%c,%f,%f,%c,%c",&sex,&faHeight,&moHeight,&sports,&diet);
if(sex=='F'){
self_Height=(faHeight*0.923+moHeight)/2;
}
else if(sex=='M'){
self_Height=(faHeight+moHeight)*0.54;
}
if(sports=='Y'){
x +=0.02;
}
if(diet=='Y'){
x +=0.015;
}
self_Height *=x;
printf("%f",self_Height);
return 0;
}