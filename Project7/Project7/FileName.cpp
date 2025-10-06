

#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
int chufa(int x, int y)
{
	return x + y;

}
int main()
{
	int a = 1; int b = 3;
	int number1 = chufa(a, b);
	printf("%d\n", number1);

	int c = 0; int d = 0;
	scanf("%d\n", a);
	scanf("%d\n", b);
	int number2 = chufa(c, d);
	printf("%d\n", number2);

	return 0;
}



	