#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	printf("请输入一个1到10的数，来确定数组的范围：");
	scanf("%d", &n);
	if (n < 1 || n>10)
	{
		printf("输入无效");
		return 0;
	}
	int numbers[10];
	for (i = 0;i < n ; i++)
	{
		scanf("%d", &numbers[i]);
	}
	printf("数组元素为:");
	for (i = 0;i < n; i++)
	{
		printf("%d ", numbers[i]);
	}
	printf("\n");
	int maximum = numbers[0];
	int max_index = 0;
	for (i = 1; i < n ;i++)
	{
		if (numbers[i] > maximum)
		{
			maximum = numbers[i];
			max_index = i;
		}
	}
	    printf("最大值为：%d\n", maximum);
		printf("下标为：%d\n", max_index);
	return 0;
}