#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() 
{
	int a = 0;
	int b = 0;
	int r=scanf("%d%d", &a, &b);
	int c = a + b;
	printf("%d\n", c);
	printf("%d\n", r);




	//char lp[12];
	//scanf("%[a-z]", lp);
	//printf("%s\n", lp);
	//printf("______%c_____\n", lp);
	//在scanf中不能使用/n
	//%c不会跳过起首的空格，其他的会，但在前面加一个空格就可以跳过起首的空格
	//scanf运行后会返回/0，并且不能使用换行符
	//%[]遇到不在集合中的字符就会停止读取，遇到空格也会停止读取
	//int x;
	//float y;
	//scanf("%d%f", &x, &y);
	//printf("%d%f\n", x, y);
	//输入-13.56788%
	//scanf()将字符串读入字符数组时，不会检测数组是否超过边界，因此可能会导致缓冲区溢出，造成程序崩溃或其他不可预知的行为。所以应指定最大输入长度，避免缓冲区溢出。


	return 0;
}
	
