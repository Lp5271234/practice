#define _CRT_SECURE_NO_WARNINGS
#include <STDIO.H>
int main()
{ 
	int score = 0;
	int count = 0;
	int top_score = 0;
	int lowest_score = 0;
	int total_score = 0;
		scanf("%d", &score);
	while (score != -1)
	{
		
			count++;
			printf("当前人数为：%d\n", count);
		
		
			total_score += score;
			printf("当前总分为：%d\n", total_score);
		
		if (count ==1)
		{
			top_score = score;
			lowest_score = score;
			printf("当前最低分等于最高分为：%d\n", score);
		}
		else 
		{
			if (score > top_score)
			{
				top_score = score;	
			}
			if (score < lowest_score)
			{
				lowest_score = score;
			}
				printf("当前最低分为：%d\n", lowest_score);
				printf("当前最高分为：%d\n", top_score);
		}
		scanf("%d", &score);
	}

	if (count == 0)
		printf("没有输入有效成绩\n");
	else 
	{
		printf("最终人数为：%d\n", count);
		printf("最终分数分为：%d\n", total_score);
		printf("最终最低分为：%d\n", lowest_score);
		printf("最终最高分为：%d\n", top_score);
	}
	return 0;
}