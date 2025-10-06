#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int FUCK(int x, int y)
{
	 int z = 0;
	 z = x + y;
	 return z;





}

int main()
{	int a = 1;
	int b = 2;
	scanf("%d%d", &a,&b);
	int c = FUCK(a, b);
	printf("%d\n", c);





		return 0;
}

