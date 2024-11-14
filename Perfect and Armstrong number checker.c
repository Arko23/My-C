#include <stdio.h>
#include <math.h>
int perfect_checker(int n);
int armstrong_checker(int n);
int main()
{
    int num;
    scanf("%d", &num);
    if (perfect_checker(num) == 1)
    {
        printf("%d is a perfect number\n", num);
    }
    else
    {
        printf("%d is not perfect number\n", num);
    }
    if (armstrong_checker(num) == 1)
    {
        printf("%d is a armstrong number\n", num);
    }
    else
    {
        printf("%d is not a armstrong number\n", num);
    }
    return 0;
}
int perfect_checker(int n)
{
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
        if (n % i == 0)
        {
            sum += i;
        }
    }
    if (sum == n)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
int armstrong_checker(int n)
{
    int rem, div, new = 0;
    int num = n;
    int num_of_dig = ceil(log10(n));
    while (n != 0)
    {
        div = n / 10;
        rem = n % 10;
        n = div;
        new = new + pow(rem, num_of_dig);
    }
    if (new == num)
    {
        return 1;
    }
    else
    {
        return -1;
    }
}