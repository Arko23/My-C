#include <stdio.h>

int fibonac(int n)
{
    if ((n == 1) || (n == 0))
    {
        return (n);
    }
    else
    {
        return (fibonac(n - 1) + fibonac(n - 2));
    }
}

int main()
{
    int n, i = 0;
    scanf("%d", &n); 
    while (i < n)
    {
        printf("%d ", fibonac(i));
        i++;
    }
    return 0;
}