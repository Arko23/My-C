#include <stdio.h>
#include <math.h>

long long Bin(int a);

int main()
{
    int x;
    scanf("%d", &x);
    printf("%d in decimal = %lld in binary", x, bin(x));
    return 0;
}

long long bin(int a)
{
    long long b_n= 0;
    int r, i = 1, flag = 1;

    while (a != 0)
    {
        r = a % 2;
        printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", flag++, a, r, a / 2);
        a /= 2;
        b_n += r* i;
        i *= 10;
    }
    return b_n;
}