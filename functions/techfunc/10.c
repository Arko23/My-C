#include <stdio.h>

int Perfect(int num);
void f_Perfect(int t1, int t2);

int main()
{
    int t1, t2;

    printf("lower limit to print perfect numbers: ");
    scanf("%d", &t1);
    printf("upper limit to print perfect numbers: ");
    scanf("%d", &t2);

    printf("perfect numbers between %d to %d are: \n", t1, t2);
    f_Perfect(t1, t2);

    return 0;
}

int Perfect(int num)
{
    int i, sum;

    sum = 0;
    for (i = 1; i < num; i++)
    {
        if (num % i == 0)
        {
            sum += i;
        }
    }

    if (sum == num)
        return 1;
    else
        return 0;
}

void f_Perfect(int t1, int t2)
{

    while (t1 <= t2)
    {
        if (Perfect(t1))
        {
            printf("%d ", t1);
        }

        t1++;
    }
}