#include <stdio.h>
void showmatrix(int a, int b, int ara[a][b]);
void ScalarMultiply(int a, int b, int ara[a][b]);
void inputmatrix();
int main()
{
    inputmatrix();
    return 0;
}
void inputmatrix()
{
    int a, b;
    printf("Enter the row and column size :\n");
    scanf("%d %d", &a, &b);
    int ara[a][b];
    printf("Enter the elements :\n");
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &ara[i][j]);
        }
        printf("\n");
    }
    showmatrix(a, b, ara); 
    return;
}
void showmatrix(int a, int b, int ara[a][b])
{
    for (int i = 0; i < b; i++)
    {
        for (int j = 0; j < a; j++)
        {
            printf("%d  ", ara[i][j]);
        }
        printf("\n");
    }
    ScalarMultiply(a, b, ara);
    return;
}
void ScalarMultiply(int a, int b, int ara[a][b])
{
    int x;
    printf("\nEnter value :\n");
    scanf("%d", &x);
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            ara[i][j] = x * ara[i][j];
        }
    }
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("%d  ", ara[i][j]);
        }
        printf("\n");
    }
    return;
}