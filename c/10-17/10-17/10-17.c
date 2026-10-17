#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int score = 0;
	int invalid_count = 0;
	int valid_count = 0;
	int total_score = 0;
	int pass_count = 0;
	int result = 0;
	printf("请输入成绩：");
	scanf("%d", &score);
	
	while (score != -1)
	{
		if (score < 0 || score>100)
		{
			invalid_count++;
		}
		else
		{
			valid_count++;
			total_score += score;
			if (score >= 60)
			{
				pass_count++;
			}
		}
		printf("请输入成绩(-1结束）：");
		scanf("%d", &score);

	}
	if (valid_count == 0)
		result = -1;
	else
	{
		if (pass_count * 100 >= valid_count * 60)
			result = 1;
		else
			result = 0;

	}
	printf("有效人数为：%d\n", valid_count);
	printf("无效人数为：%d\n", invalid_count);
	printf("及格人数为：%d\n", pass_count);
	printf("总分为：%d\n", total_score);
	printf("result：%d\n", result);
	return 0;
}