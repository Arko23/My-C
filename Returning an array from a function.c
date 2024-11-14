#include <stdio.h>
int *array(int *x, int n);

int main()
{
    int ara[10];
    int n;
    int *p;
    printf("Enter the array size :\n");
    scanf("%d", &n);
    printf("Enter the array elements :\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    p = array(ara, n);

    printf("The returened array is :\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", *(p + i));
    }
}
int *array(int *x, int n)
{
    static int ara[1000];
    for (int i = 0; i < n; i++)
    {
        ara[i] = 2 * x[i];
    }
    return ara;
}