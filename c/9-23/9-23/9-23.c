#include <stdio.h>

int main() {
	int a = 5;
	int b = ++a;
	printf("a=%d,b=%d\n", a, b);
//前置++表示先+1后使用
	int c = 10;
	int d = c++;
	//后置++表示先使用后+1
	printf("c=%d,d=%d\n", c, d);
	int f = 20;
	f += 10;
	printf("f=%d\n", f);
	int g= 20;
	g -= 10;
	printf("g=%d\n", g);
	//-=,+=,/=.*=.%=
	return 0;
	
}