#include <stdio.h>
int GCD(int x, int y);
int LCM(int a, int b);
int main()
{
    int num1, num2;
    while (2 == scanf("%d %d", &num1, &num2))
    {
        int gcd = GCD(num1, num2);
        int lcm = LCM(num1, num2);
        printf("\nGCD is %d\nLCM is %d\n", gcd, lcm);
    }
    return 0;
}
int GCD(int x, int y)
{
    int r;
    while (x != 0)
    {
        r= y % x;
        y = x;
        x = r;
    }
    return y;
}
int LCM(int a, int b)
{
    int max = 0;
    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }
    while (max % a != 0 || max % b != 0)
    {
        max++;
    }
    return max;
}