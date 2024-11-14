#include <stdio.h>
#include <math.h>
void getNthPrime(int z);

int main()
{
    int x;
    scanf("%d", &x);
    getNthPrime(x);
    return 0;
}
void getNthPrime(int z)
{
    int flag, count = 0, i;
    for (i = 1; count != z; i++)
    {
        flag = 1;
        if (i == 1)
        {
            flag = 0;
        }
        else if (i == 2)
        {
            flag = 1;
        }
        else if (i % 2 == 0)
        {
            flag = 0;
        }
        else
        {
            for (int j = 3; j <= sqrt(i); j += 2)
            {
                if (i % j == 0)
                {
                    flag = 0;
                    break;
                }
            }
        }
        if (flag == 1)
        {
            count++;
        }
    }
    printf("%d th prime number is %d ", z, i - 1);
}