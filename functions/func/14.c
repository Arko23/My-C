#include <stdio.h>
void func(int *arr, int x);
int main()
{
    int n;
    int ara[1000];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ara[i]);
    }
    func(ara, n);
    return 0;
}
void func(int *arr, int x)
{
    for (int i = 0; i < x; i++)
    {
        if (arr[i] % 2 == 0)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}