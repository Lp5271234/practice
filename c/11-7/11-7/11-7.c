#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int max_of_three(int a,int b,int c)
{
	int max[3] = { a,b,c };
	int i = 0;
	int MA= max[0];
	for (i = 0;i < 3;i++)
	{
		if (max[i] > MA)
		{
			MA = max[i];
		}
	}
	return MA;
}
int min_of_three(int a, int b, int c)
{
	int min[3] = { a,b,c };
	int MI = min[0];
	int i = 0;
	for (i = 0;i < 3;i++)
	{
		if (MI > min[i])
			MI = min[i];
	}
	return MI;
}
int main()
{
	printf("请输入3个数：");
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a,&b,&c);
	int max= max_of_three(a,b,c);
	int min = min_of_three(a, b, c);
	printf("最大值为：%d\n", max);
	printf("最小值为：%d\n", min);
	return 0;
}