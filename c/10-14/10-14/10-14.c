#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{  
	int  choice = 0;
	int a = 0;
	int b = 0;
	  scanf("%d%d%d", &choice,&a,&b);
	//switch (choice==1|| choice == 2|| choice == 3|| choice == 4|| choice == 5)
	  switch (choice)
	{

         case 1:
			 printf("%d\n", a + b);
			 break;
		 case 2:
			 printf("%d\n", a - b);
			 break;
		 case 3:
			 printf("%d\n", a * b);
			 break;
		 case 4: 
		 {
			 if (b !=0)
				 printf("%d\n", a / b);
			 else

				 printf("除数不能为0\n");

		 }
			 //printf("%d%s", !b ==0 ? a / b && !b == 0 : "除数不能为0");
			
			 break;
		 case 5:
			 printf("%s\n", a == 0 || b == 0 ? "至少一个数为0" : "没有0");
			 break;
		 default:
			 printf("无效选项\n");
			 break;
		
			 
	}
		 
return 0;
}