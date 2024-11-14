#include <stdio.h>

int func(int x);

int main()
{
    int number;
    scanf("%d", &number);
    int var = func(number);
    if (var == 1)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}

int func(int x)
{
    if (x % 2 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}