#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	int max;

	printf("���������Ϊa,b,c���θ�ֵ");
	scanf("%d,%d,%d", &a, &b, &c);





	if (a >= b)
	{
		if (a >= c)
			max = a;
		else max = c;
	}
	else
	{
		if (b >= c)
			max = b;
		else max = c;
	}
	printf("���������ֵ�ǣ�%d",max);
	
	






















	return 0;
}