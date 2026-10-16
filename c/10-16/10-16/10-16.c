#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int choice = 0;
	do
	{
	  int n = 0;
	  int sum = 0;
	  printf("请输入一个整数：");
	  scanf("%d", &n);
			for (int i=1;i<=n;i++)
			{
				sum += i;	
			}
			printf("1到%d的和为：%d\n", n, sum);
		printf("是否继续？\n0:退出\n1:继续\n");
		scanf("%d", &choice);
	} while (choice == 1);


	return 0;
}

