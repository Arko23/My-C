#include<stdio.h>

int con(int arr[],int a);
int main()
{
    int arr[100],n,sum=0,i;
    printf("numbers\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    con(arr,n);
    printf("sum in main %d\n",sum);
    return 0;
}

int con(int arr[],int a)
{
    int i,sum=0;
    for(i=0;i<a;i++)
    {
        sum+=arr[i];
    }
    printf("sum in function %d\n",sum);
    return sum;
}