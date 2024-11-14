#include<stdio.h>
int fact(int x);
int main()
{
    int n;
    scanf("%d", &n);
    int var=fact(n);
    printf("%d", var);
    return 0;
}
int fact(int x)
{
    int f=1;
    for (int i = 1; i <= x; i++)
    {
        f *= i;
    }
    return f;
}