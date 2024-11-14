#include <stdio.h>
int val(int x, int *p);
int main()
{
    int ara[100], i, n, m;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    m = val(n, ara);
    printf("%d minimum value \n", m);
}
int val(int x, int *p)
{
    int i, j, temp;
    for (i = 0; i < x - 1; i++)
    {
        for (j = 0; j < x - 1 - i; j++)
        {
            if (p[j] > p[j + 1])
            {
                temp = p[j];
                p[j] = p[j + 1];
                p[j + 1] = temp;
            }
        }
    }
    int m;
    m = p[0];
    return m;
}