#include <stdio.h>

int isprime(int x)
{
    int i, flag = 0;
    for (i = 2; i <= x / 2; i++)
    {
        if (x % i == 0)
            flag = 1;
    }

    if (flag == 1)
        return -1;
    else
        return 1;
}

int main()
{
    int num;
    scanf("%d", &num);

    int result = isprime(num);
    if (result == 1 && num != 1)
        printf("%d is prime\n", num);
    else
        printf("%d is not prime\n", num);
}