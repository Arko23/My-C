#include <stdio.h>
int main()
{
    int n;
    unsigned long long fact;

    printf("Enter nber: ");
    scanf("%d", &n);

    fact = Findfact(n);

    printf("fact of %d is %llu", n, fact);

    return 0;
}

unsigned long long Findfact(int n)
{

    if (n == 0)
        return 1;
    else
        return n * Findfact(n - 1);
}