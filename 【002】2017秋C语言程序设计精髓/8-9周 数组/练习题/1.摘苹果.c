/*题目内容：
陶陶家的院子里有一棵苹果树，每到秋天树上就会结出10个苹果。苹果成熟的时候，陶陶就会跑去摘苹果。陶陶有个30厘米高的板凳，当他不能直接用手摘到苹果的时候，就会踩到板凳上再试试。现在已知10个苹果到地面的高度（已知在100cm到200cm之间，包括100cm和200cm），以及陶陶把手伸直时能达到的最大高度（已知在100cm到120cm之间，包括100cm和120cm），请你编写程序帮助陶陶计算一下他能摘到的苹果数目。假设他碰到苹果，苹果就会掉下来。
函数原型：int GetApple(int a[], int height, int n)；
函数功能：计算淘淘能摘到的苹果数目
函数参数：数组a保存苹果到地面的高度；height代表陶陶把手伸直时能达到的最大高度；n为苹果数
函数返回值：淘淘能摘到的苹果数目
程序运行示例1：
100 200 150 140 129 134 167 198 200 111↙
110↙
5
程序运行示例2：
120 110 200 134 122 162 183 144 128 100↙
105↙
6

输入格式: "%d"
注意（第一行输入的数据是10个苹果分别到地面的高度；第二行输入的数据是陶陶把手伸直时能达到的最大高度）
输出格式："%d"
注意：为避免出现格式错误，请直接拷贝粘贴上面给出的输入、输出提示信息和格式控制字符串！
时间限制：500ms内存限制：31kb*/
#include <stdio.h>

int GetApple(int a[], int height, int n);
int main()
{
	int apple_height[10],tall;
	for(int i=0;i<10;i++)
		scanf("%d",&apple_height[i]);
	scanf("%d",&tall);
	printf("%d",GetApple(apple_height,tall,10));
	return 0;
}
int GetApple(int a[], int height, int n)
{
	int count=0;
	for(int i=0;i<n;i++)
		if(height+30>=a[i])	count++;
	return count;
}