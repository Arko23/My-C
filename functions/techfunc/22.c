#include <stdio.h>

int main()
{
    int ara[100], n, max, min;
    int i;

    printf("Enter size : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }

    max = fmax(ara, 0, n);
    min = dmin(ara, 0, n);

    printf("Minimum : %d\n", min);
    printf("Maximum : %d\n", max);

    return 0;
}

int fmax(int ara[], int index, int len)
{
    int max;
    if (index >= len - 2)
    {
        if (ara[index] > ara[index + 1])
            return ara[index];
        else
            return ara[index + 1];
    }

    max = fmax(ara, index + 1, len);

    if (ara[index] > max)
        return ara[index];
    else
        return max;
}

int dmin(int ara[], int index, int len)
{
    int min;

    if (index >= len - 2)
    {
        if (ara[index] < ara[index + 1])
            return ara[index];
        else
            return ara[index + 1];
    }

    min = dmin(ara, index + 1, len);

    if (ara[index] < min)
        return ara[index];
    else
        return min;
}