/*题目内容：
要求用户从键盘输入一个大写字母，使用嵌套循环产生像下面这样的金字塔图案：
    A
   ABA
  ABCBA
 ABCDCBA

程序运行结果示例1：
Please input a capital:
D↙
____A
___ABA
__ABCBA
_ABCDCBA
程序运行结果示例2：
Please input a capital:
F↙
______A
_____ABA
____ABCBA
___ABCDCBA
__ABCDEDCBA
_ABCDEFEDCBA
（说明：上面运行结果示例中，每行字母前面的下划线"_"代表屏幕上实际输出的是空格，最后一行前面有一个空格，倒数第二行有两个空格，以此类推。）

输入提示信息："Please input a capital:\n"
输入格式： "%c"
输出格式："%c"
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
// #include <stdio.h>

// int main()
// {
//     char ch;
//     printf("Please input a capital:\n");
//     scanf("%c",&ch);
//     char i;
//     for (i='A'; i <= ch; i++){
//         char j;
//         for (j=ch;j>=i; j--)
//         {
//             printf(" ");
//         }
//         for (j='A'; j <=i; j++){
//             if(j!=i)    printf("%c",j );
//             else if (j==i){
//                 char p;
//                 for (p=j;p>='A';p--){
//                     printf("%c",p);
//                 }
//             }
            
//         }
//         printf("\n");
//     }
//     return 0;
// }
#include <stdio.h>

int main(){   

    char  i,j;
    char ch;
    printf("Please input a capital:\n");
    scanf("%c",&ch);
    for (i = 'A'; i <=ch; i++){
        for(j = ch ; j >= i;j--) 	printf(" ");
        for(j = 'A'; j <i;j++) 		printf("%c",j);
        for(j = j ; j>='A';j--)  	printf("%c",j);
        printf("\n");
    }  
    return 0;
}