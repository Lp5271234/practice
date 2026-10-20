#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int j = 0;
	int target = 0;
	printf("请输入一个整数:");
	scanf("%d", &target);
	for (i = 1; i <= 5 ;i++)
	{
		for (j = 1;j <= 5;j++) 
		{
			if (i + j == target)
			{
				goto found;
			}

		}
	\
	}
	printf("没有找到\n");
	return 0;

    found:
	printf("找到了，i=%d,j=%d\n",i,j);
	return 0;
}