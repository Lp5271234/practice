#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int n = 0;
//	printf("请输入1到10的任意数字，否则输入无效");
//	scanf("%d", &n);
//	int score[n];
//	int i = 0;
//	int m = 0;
//	if (n > 10 || n < 0)
//	{
//		printf("输入无效\n");
//		return 0;
//	}
//	for (i = 0;i < n;i++)
//	{
//		scanf("%d", &m);
//		score[i] = m;
//	}
//	for (i = 0;i < n;i++)
//	{
//		printf("%d\n ", score[i]);
//	}
//	return 0;
//}        //数组的输入和输出
 
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int m = 0;
//	int max = 0;
//	int  min = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d", &n);
//	int score[n];
//	if (n <= 0)
//	{
//		printf("输入无效\n");
//		return 0;
//	}
//		for (i = 0;i < n;i++)
//		{
//			scanf("%d", &m);
//
//			score[i] = m;
//		}
//		max = score[0];
//		min = score[0];
//		for (i = 0;i < n;i++)
//		{
//			if (score[i] > max)
//			{
//				max = score[i];
//				a = i;
//			}
//		}
//		printf("最大值为：%d\n", max);
//		printf("最大值下标为：%d\n", a);
//		//return 0;
//				for (i = 0;i < n;i++)
//				{
//					if(min > score[i])
//					{
//						min = score[i];
//						b = i;
//					}
//				}
//	printf("最小值下标为：%d\n", b);
//	printf("最小值为：%d\n", min);
//
//	return 0;
//}
//找最大值、最小值和对应下标
int main()
{
	int i = 0;
	int n = 0;
	int m = 0;
	int x = -1;
	int score[100];
	int lp = { sizeof(score) / sizeof(score[0]) };
	printf("请输入1到100中任意一个数字，查找数组中是否存在这个数字:");
	for (i = 0;i < 100;i++)
	{
		m++;
		score[i] = m;
	}
	do {
		scanf("%d", &n);
		if (n < 1)
		{
			printf("输入无效,请重新输入：");
		}
	} while (n < 1);
	int first = score[0];
	int end = score[lp - 1];
	while (first <= end)
	{
		int mid = first + (end - first) / 2;
		if (score[mid] < n)
		{
			first = mid + 1;
		}
		else if (score[mid] > n)
		{
			end = mid - 1;
			
		}
		else
		{
			x = mid;
			break;
		}
	}
	if (x!=-1)
	{
		printf("找到了，数字为：%d\n", score[x]);
		printf("下标为：%d\n", x);
	}
	else
	{
		printf("找不到，该数字不在数组范围内");
	}
	return 0;

}
