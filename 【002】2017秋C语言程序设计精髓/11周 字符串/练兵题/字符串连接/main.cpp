#include <stdio.h>
#include <string.h>
char* MyStrcat(char *dest, char *source);
int main(void)
{
		char a[85],b[85],c[85];
        char *first=a, *second=b, *result=c;
        printf("Input the first string:\n");
        gets(first);
        printf("Input the second string:\n");
        gets(second);
        result = MyStrcat(first, second);
        printf("The result is : %s\n", result);
        return 0;
}
char* MyStrcat(char *dest, char *source)
{
        int i = 0,j = 0;
        while (*(dest+i)!='\0')   i++;
        for (; *(source+j)!='\0'; i++,j++)
            *(dest+i) = *(source+j);   
		*(dest+i)='\0';
        return dest;
}