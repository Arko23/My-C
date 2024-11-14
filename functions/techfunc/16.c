#include <stdio.h>

int search_gcd(int a, int b);

int main()
{
    int t1, t2,hcf;

    printf("value to find HCF or GCD: ");
    scanf("%d%d", &t1, &t2);
    hcf =search_gcd(t1, t2);
    printf("GCD of %d and %d = %d",t1, t2, hcf);

    return 0;
}

int search_gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return search_gcd(b, a% b);
    }
}