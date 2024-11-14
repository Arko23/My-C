#include <stdio.h>
#include <math.h>

int dec(long long a);

int main()
{
    long long x;
    printf("Binary number: ");
    scanf("%lld", &x);
    dec(x);
    printf("%lld in binary = %d in decimal", x, dec(x));
    return 0;
}

int dec(long long a)
{
    int d_n = 0, i = 0, r;
    while (a!= 0)
    {
        r = a % 10;
        a/= 10;
        d_n += r * pow(2, i);
        ++i;
    }
    return d_n;
}