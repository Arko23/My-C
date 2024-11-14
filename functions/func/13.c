#include <stdio.h>
void swap(int *a, int *b);
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);
    swap(&x, &y);
    printf(" Value in main\n");
    printf("%d \n", x);
    printf("%d \n", y);
    return 0;
}
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    printf(" Value in function\n");
    printf("%d \n", *a);
    printf("%d \n", *b);
}