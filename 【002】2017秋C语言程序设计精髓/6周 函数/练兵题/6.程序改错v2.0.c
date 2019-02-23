/*题目内容：
下面代码的功能是将百分制成绩转换为5分制成绩，具体功能是：如果用户输入的是非法字符或者不在合理区间内的数据（例如输入的是a,或者102，或-45等），则程序输出 Input error!，并允许用户重新输入,直到输入合法数据为止，并将其转换为5分制输出。目前程序存在错误，请将其修改正确。并按照下面给出的运行示例检查程序。
#include<stdio.h>
   int main()
   {
       int score;
       char grade;
       printf("Please input score:");
       scanf("%d", &score);
       if (score < 0 || score > 100)   
             printf("Input error!\n");
        else if (score >= 90) 
             grade = 'A’;
        else if (score >= 80)
             grade = 'B';   
        else if (score >= 70)
             grade = 'C';  
        else if (score >= 60)
             grade = 'D'; 
        else
             grade = 'E'; 
        printf("grade:%c\n", grade);
        return 0;
}

程序运行结果示例1：
Please input score:
a↙
Input error!
Please input score:
-12↙
Input error!
Please input score:
230↙
Input error!
Please input score:
92↙
grade: A

程序运行结果示例2：
Please input score:
88↙
grade: B

程序运行结果示例3：
Please input score:
73↙
grade: C

程序运行结果示例4：
Please input score:
65↙
grade: D

程序运行结果示例5：
Please input score:
27↙
grade: E

输入提示信息："Please input score:\n"
输入格式: "%d"
输出格式：
输入错误时的提示信息："Input error!\n"
输出格式："grade: %c\n" (注意：%c前面有一个空格)
为避免出现格式错误，请直接拷贝粘贴题目中给的格式字符串和提示信息到你的程序中。
时间限制：500ms内存限制：32000kb*/
#include<stdio.h>
   int main()
   {
       int score;
       char grade;
       printf("Please input score:\n");
	   while(scanf("%d", &score)!=1 || score < 0 || score > 100) 
	   {
             printf("Input error!\n");
			while(getchar()!='\n');
			printf("Please input score:\n");
	   }
		if (score >= 90) 
             grade = 'A';
        else if (score >= 80 && score <= 90)
             grade = 'B';   
        else if (score >= 70 && score <= 80)
             grade = 'C';  
        else if (score >= 60 && score <= 70)
             grade = 'D'; 
        else
             grade = 'E'; 
        printf("grade: %c\n" , grade);
        return 0;
}