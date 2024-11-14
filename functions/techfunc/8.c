#include <stdio.h>

int Prime(int n);
void fun_prime(int a, int b);

int main()
{
    int a, b;
    scanf("%d%d", &a, &b);
    fun_Prime(a,b);
    return 0;
}
void fun_prime(int a, int b)
{
    printf("prime numbers between %d to %d are: ", a, b);
    while (a <= b)
    {

        if (Prime(a))
        {
            printf("%d ", a);
        }

        a++;
    }
}

int Prime(int n)
{
    int i;

    for (i = 2; i <= n / 2; i++)
    {

        if (n% i == 0)
        {
            return 0;
        }
    }

    return 1;
}