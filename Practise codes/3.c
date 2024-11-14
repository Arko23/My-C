#include<stdio.h>
int main()
{
    int arr[3][3];
    int sum=0,i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("elements of matrix\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d\n",sum);
        
    }
   // printf("%d",arr[i][j]);
    return 0;
}