#include <stdio.h>

void rev(int arr[], int x);
int main()
{
    int arr[100], i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    rev(arr, n);
    
}
void rev(int arr[], int x)
{
    int i;
    for (i = x - 1; i >= 0; i--)
    {
        printf("%d\n",arr[i]);
    }
}