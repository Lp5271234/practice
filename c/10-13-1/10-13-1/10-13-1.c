#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int score = 0;
	int attendance = 0;
	int submitted = 0;
	printf("请输入成绩和出勤率和作业提交情况（1表示提交，0表示未提交）：");
	scanf("%d %d %d", &score, &attendance, &submitted);
	int lp =
		     (score >= 0 && score <= 100) && (attendance >= 0 && attendance <= 100) && (submitted == 1 || submitted == 0);
	int op =
	        (score >= 50 && score < 60 && attendance >= 60) || (submitted == 1 && attendance >= 80);
	if (!lp)
	{
		printf("输入无效\n");
	}
	else
	{
		printf("%s\n", op ? "可以参加补考" : "不能参加补考");
	}
	

	return 0;
 }
                      //这是一个判断期末是否要补考的小程序。