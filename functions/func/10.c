#include <stdio.h>

long long int func(int a, int b);
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d to the power %d is %lld", x, y, func(x, y));
    return 0;
}
long long int func(int a, int b)
{
    long long int num = 1;
    for (int i = 1; i <= b; i++)
    {
        num *= a;
    }
    return num;
}