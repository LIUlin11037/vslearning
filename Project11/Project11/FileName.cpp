#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int a, b, c;
	int max;

	printf("请你他妈的为a,b,c依次赋值");
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
	printf("这其中最大值是：%d",max);
	
	






















	return 0;
}