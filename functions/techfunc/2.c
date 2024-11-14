#include <stdio.h>
#include <math.h>

int chk_prime(int);
int chk_arm(int);

int main()
{
    int a;
    int count;

    scanf("%d", &a);

    count = chk_prime(a);
    if (count == 1)
        printf("%d is a prime number\n", a);
    else
        printf("%d is not a prime number\n", a);

    count = chk_arm(a);
    if (count == 1)
        printf("%d is an Armstrong number", a);
    else
        printf("%d is not an Armstrong number", a);
    return 0;
}

int chk_prime(int x)
{
    int i, count = 1;

    for (i = 2; i <= x / 2; ++i)
    {

        if (x % i == 0)
        {
            count = 0;
            break;
        }
    }
    return count;
}

int chk_arm(int y)
{
    int n, rem, result = 0, t_n= 0;
    int count;

    t_n = y;

    while (n!= 0)
    {
      n/= 10;
        ++t_n;
    }

    n= y;

    while (n!= 0)
    {
        rem = n % 10;
        result += pow(rem, t_n);
        n /= 10;
    }

    if (result == y)
        count = 1;
    else
        count = 0;

    return count;
}