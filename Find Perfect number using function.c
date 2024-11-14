#include <stdio.h>
int perfect(int n);
int main()
{
    int num1, num2;
    printf("Enter the range :\n");
    scanf("%d %d", &num1, &num2);
    printf("The perfect numbers are :\n");
    for (int i = num1; i <= num2; i++)
    {
        if (perfect(i) == 1)
        {
            printf("%d  ", i);
        }
    }
    return 0;
}
int perfect(int n)
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