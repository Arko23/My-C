#include <stdio.h>
void bin_search(int r, int arr[], int lower, int upper);
int main()
{
    int z;
    printf("array's size : ");
    scanf("%d", &z);
    int arr[z];
    printf("\nEnter the array  elements : \n");
    for (int i = 0; i < z; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\nSearch number : ");
    int r;
    scanf("%d", &r);
    bin_search(r, arr, 0, z - 1);
    return 0;
}
void bin_search(int r, int arr[], int lower, int upper)
{
    int mid = (lower + upper) / 2;
    if (lower > upper)
    {
        printf("\n%d not the array.\n", r);
        return;
    }
    if (arr[mid] == r)
    {
        printf("\n%d has founded in index %d.\n", r, mid);
        return;
    }
    if (arr[mid] < r)
    {
        lower = mid + 1;
        bin_search(r, arr, lower, upper);
    }
    if (arr[mid] > r)
    {
        upper = mid - 1;
        bin_search(r, arr, lower, upper);
    }
}