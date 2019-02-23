#include<stdio.h>
int main() {
  int a,ge,shi,bai;
  scanf("%d", &a);
  a=abs(a);
  ge=a%10;
  shi=a/10%10;
  bai=a/100;
  printf("%d",ge*100+shi*10+bai);

}