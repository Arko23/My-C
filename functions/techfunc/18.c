#include <stdio.h>

int sum(int ara[], int start, int len);

int main()
{
    int ara[100];
    int n, i, sum;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    sum = s(ara, 0, n);
    printf("Sum of araay : %d", sum);

    return 0;
}

int s(int ara[], int start, int len)
{
    if (start >= len)
        return 0;

    return (ara[start] + sum(ara, start + 1, len));
}