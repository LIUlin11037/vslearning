#include <stdio.h>
int main()
{int a = 0;

printf("%d\n", a);
int b = 3;
int* h = &b;
printf("%p\n", &a);
*h = 666;
printf("%d\n", b);





return 0;
}

