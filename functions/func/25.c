#include <stdio.h>
int row = 3; 
int col = 5;
void inputmatrix();
void showmatrix(int brr[row][col]);
void scalarmatrix(int srr[row][col]);

int main()
{
    inputmatrix();
    return 0;
}
void inputmatrix()
{
    int arr[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("ara[%d][%d] = ", i, j);
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    showmatrix(arr); 
    return;
}
void showmatrix(int brr[row][col]) 
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ", brr[i][j]);
        }
        printf("\n");
    }
    scalarmatrix(brr);
    return;
}
void scalarmatrix(int srr[row][col])
{
    printf("enter multiplication value :\n");
    int n;
    scanf("%d", &n);
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            srr[i][j] = n * srr[i][j];
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d  ", srr[i][j]);
        }
        printf("\n");
    }
    return;
}