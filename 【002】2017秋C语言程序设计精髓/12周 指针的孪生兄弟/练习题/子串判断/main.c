#include <stdio.h>
#include <string.h>
int IsSubString(char a[], char b[]);
int main(){
	const int size=85;
	char A[size],B[size];
	printf("Input the first string:");
	gets(A);
	printf( "Input the second string:");
	gets(B);
	if(IsSubString(A,B))
		printf( "Yes\n");
	else
		printf("No\n");
	return 0;
}
int IsSubString(char a[], char b[]){
	int i=0;
	for(int j=0;j<strlen(a);j++)
		if(a[j]==b[i] && a[j+1]==b[i+1])	i++;
	if(i==strlen(b)-1)	return 1;
	else	return 0;
}