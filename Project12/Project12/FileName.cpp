#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	/*int a, b, c;
	int max;
	printf("请输入几个值");
	scanf("%d%d%d", &a, &b, &c);
	
	
	
	
	
	
	if (a > b)
		if (a > c)
			max = a;
		else max = c;
	else
		if (b > c)
			max = b;
		else max = c;
	printf("最大值是%d", max);*/


	/*char grade;
	scanf("%c", &grade);
	switch (grade)
	{
	case 'a':printf("10~20"); break;
	case 'b':printf("20~30"); break;
	case 'c':printf("30~40"); break;
	}*/

	//switch 语句


	/*int i = 1, sum = 0;
	while (i <= 100)
	{
		sum = sum + i;
		i++;
	}
	printf("总和是:%d",sum);*/



	/*int i = 1, sum = 0;
	do
	{
		sum = sum + i;

		i++;

	} while (i <= 100);
	printf("%d\n",sum);*/

	int i = 1, sum = 0;
	for (i = 1; i <= 100; i++)
		sum = sum + i;
	printf("%d", sum);





































	return 0;
}