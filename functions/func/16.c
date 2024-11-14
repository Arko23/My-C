#include <stdio.h>
int multiply(int *p, int x);
void load(int *p, int x);

int main()
{
    int a;
    int arr[100];
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    multiply(arr, a);

    return 0;
}
int multiply(int *p, int x)
{
    int arr[100], r = 0;
    for (int i = 0; i < x; i++)
    {
        p[i] *= 2;
        arr[r] = p[i];
        r++;
    }
    load(arr, r);
}
void load(int *p, int x)
{
    for (int i = 0; i < x; i++)
    {
        printf("%d ", p[i]);
    }
}