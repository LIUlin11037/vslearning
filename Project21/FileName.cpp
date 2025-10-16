//#include<stdio.h>
//
//unsigned int taowa(unsigned int x)
//{
//    printf("%u\n", x); // 打印当前的数字x
//    if (x == 0) { // 如果x已经减到0了，就停下来（这是停止条件）
//        return 0;
//    }
//    return taowa(x - 1); // 如果还没到0，就继续“套娃”，参数是x-1
//}
//
//int fib(int n)
//{
//    if (n == 0)
//        return 0;
//    else if (n == 1)
//        return 1;
//    else if (n >= 2)
//        return fib(n - 1) + fib(n - 2);
//    else
//        return -1;
//}
//
//
//int main()
//{
//    int h = fib(-2);
////    printf("%d", h);
//{
//	int storage[8];
//	int i, j, k, sum = 0;
//
//	for (i = 0; i <= 7; i++)
//	{
//		scanf_s("%d", &storage[i]);
//		sum += storage[i];
//	}
//
//	int ave;
//	ave = sum / 8;
//
//
//	printf("%d", ave);
//
//
//
//
//
//	return 0;
#include<stdio.h>

int main()
{
	int beach[2][3];
	int i, j,mid;
	for (i = 0; i < 2; i++)
	{
		if (beach[i] <= beach[i + 1])
			mid= beach[i];

	}

















	return 0;
}


