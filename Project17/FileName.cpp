#include<stdio.h>
int main() {
    int i, sum = 0;  // 初始化sum变量
    int a[5];
    
    // 修正1：数组索引从0开始
    for(i = 0; i < 5; i++) {
        scanf_s("%d", &a[i]);  // 修正2：正确获取每个元素地址
    }
    
    // 修正3：循环边界调整
    for(i = 0; i < 5; i++) {
        sum += a[i];
    }
    
    printf("总和：%d\n", sum);
    
    // 修正4：添加类型转换确保精度
    float average = (float)sum / 5;  
    printf("平均值：%.2f", average);
    
    return 0;
}



//#include<stdio.h>
// 
//int main()
//{
//	int i, j;
//	for (i = 1; i <= 4; i++)
//	{
//		for (j = 1; j <= 4 - i; j++)
//			printf(" ");
//		for (j = 1; j <= -1 + 2 * i; j++)
//			printf("*");
//		printf("\n");
//	}
//	for (i = 3; i >=1; i--)
//	{
//		for (j = 1; j <=4-i; j++)
//			printf(" ");
//		for (j = 1; j <= -1 + 2 * i; j++)
//			printf("*");
//		printf("\n");
//	}
//	return 0;
//#include<stdio.h>
//int main()
//{
//	char a;
//	scanf_s("%c", &a);
//	if (a >= '0' && a <= '9')
//		printf("number");
//	else if
//		(a >= 'a' && a <= 'z')
//		printf("letter small");
//	else if
//		(a >= 'A' && a <= 'Z')
//		printf("big letter");
//	else if
//		(a == ' ')
//		printf("blank pause");
//	else
//		printf("other iconic");
//		return 0;
////}
//#include<stdio.h>
//int main()
//{
//	int i, j;
//	for (i = 0; i <= 30; i++)
//	{
//		j = 30 - i;
//		if (2 * j + 4 * i == 90)
//		{
//			printf("%d", j);//chicken number
//			break;
//		}
//	}
//	return 0;
//}





