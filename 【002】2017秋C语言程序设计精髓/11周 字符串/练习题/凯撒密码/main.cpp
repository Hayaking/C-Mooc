#include <stdio.h>
#include <string.h>
int main()
{
	char m[100];
	char c[100];
	int i, k;
	printf("Input a string:");
	gets(m);
	k=3;
	for(i=0; m[i] != '\0'; i++)
    {
        if( m[i] >= 'A' && m[i] <= 'Z' )
            c[i] = (m[i]+k-'A')%26 + 'A';
        else if( m[i] >= 'a' && m[i] <= 'z' )
            c[i] = (m[i]+k-'a')%26 + 'a';
        else
            c[i] = m[i];
    }
	c[i] = '\0';
	puts(c);
	return 0;
}
