#include <stdio.h>

long long fact(int n);
void st(int a, int z);

int main()
{
    int a, z;
    scanf("%d", &a);
    scanf("%d", &z);
    printf("strong numbers between %d to %d are: \n", a, z);
    st(a, z);
    return 0;
}

void st(int a, int z)
{
    long long sum;
    int n;
    while (a != z)
    {
        sum = 0;
        z = a;

        while (n != 0)
        {
            sum += fact(n % 10);
            n /= 10;
        }

        if (a == sum)
        {
            printf("%d ", a);
        }

        a++;
    }
}

long long fact(int n)
{
    if (n== 0)
        return 1;
    else
        return (n* fact(n - 1));
}