#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int score = 0;
	int count = 0;
	int sum = 0;
	
	while (1)
	{
		printf("请输入整数：");
		scanf("%d\n", &score);
		if (score == -1)
		{
			break;
		}
		if (score % 2 != 0)
			continue;
		count++;
		sum += score;
		if (count == 5)
			break;
	}
	printf("人数为：%d\n", count);
	printf("总和为：%d\n", sum);
		return 0;
}