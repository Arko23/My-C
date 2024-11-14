#include <stdio.h>
int sorting(int x, int *p);
void func(int x, int *p);

int main()
{
    int arr[100], n, i, j, temp;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    sorting(n, arr);
    return 0;
}
int sorting(int x, int *p)
{
    int temp;
    for (int i = 0; i < x; i++)
    {
        for (int j = i + 1; j < x; j++)
        {
            if (p[i] > p[j])
            {
                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }
    func(x, p);
}
void func(int x, int *p)
{
    for (int i = 0; i < x; i++)
    {
        printf("%d  ", p[i]);
    }
}