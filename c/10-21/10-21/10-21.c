#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main ()
{
	int guess = 0;
	int count = 0;
	int secret = 47;
	int estimate = 0;
	printf("-------------------------\n");
	printf("---------猜数字游戏------\n");
	printf("---------输入1开始-------\n");
	printf("---------输入0结束-------\n");
	printf("-------------------------\n");
	next:
	scanf("%d", &estimate);
	if (estimate == 1) 
	{
		do
		{
			printf("请输入你猜的数\n");
			scanf("%d", &guess);
			if (guess == -1)
				break;
			count++;
			if (guess < secret)
				printf("小了，乐乐\n");
			else if (guess > secret)
				printf("大了，乐乐\n");
			else
				printf("恭喜你，答对了，你真的很了不起\n");
		} while (secret != guess);
		printf("你一共猜了%d次\n", count);
	}      
	else 
	{
		if (estimate == 0)
		{
			printf("你已退出游戏\n");
			return 0;
		}
		else
			printf("输入错误啊,你个傻子，没看到只能输入0或者1吗？请从新输入，乐乐\n");
		goto next;
	}
	return 0;
}