#include <stdio.h>
int main()
{
    int a, b;
    printf("enter the matrix size : ");
    scanf("%d %d", &a, &b);

    int xrr[a][b];
    int sum = 0;
    int i, j;
    printf("enter the element");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            scanf("%d", &xrr[i][j]);
        }
    }
    printf("elements in tthe matrix are\n  ");
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
           // if( i==0||i=xrr[a][b]-1)
            {
                sum += xrr[i][j];
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("%d", sum);
    return 0;
}