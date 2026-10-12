#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int age = 0;
	printf("请告诉我你的年龄：");
	     scanf("%d", &age);

	 if(age<0)
		printf("MD,你个傻子，年龄有负数吗？\a\n");
	 else if (age < 18)
		printf("MD,你未成年，赶紧去学习\n");
	else
    {
		if(age==18)
			printf("MD,你刚成年，赶紧去学习\n");
		else
			printf("MD,你已经成年了，赶紧去工作\n");

	}

	return 0;
}