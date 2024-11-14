#include <stdio.h>
#include <math.h>
void prime(int z);
int isPrime(int n);
int main()
{
    int x;
    scanf("%d", &x);
    prime(x);
    return 0;
}
void prime(int z)
{
    if (z < 3)
    {
        printf("no Prime below it.\n");
    }
    else
    {
        printf("Prime less %d is :\n", z);
        for (int i = 1; i < z; i++)
        {
            if (isPrime(i) == 1)
            {
                printf("%d ", i);
            }
        }
    }
    return;
}
int isPrime(int n)
{
    int flag = 1;
    if (n == 1)
    {
        flag = 0;
    }
    else if (n == 2)
    {
        flag = 1;
    }
    else if (n % 2 == 0)
    {
        flag = 0;
    }
    else
    {
        for (int i = 3; i <= sqrt(n); i += 2)
        {
            if (n % i == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
        return 1;
    else
        return 0;
}