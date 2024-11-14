#include<stdio.h>

int con(int x);

int main()
{
    int n;
    printf("Total numbers\n");
    scanf("%d",&n);
    int var=con(n);
    printf("sum in main %d\n",var);
    return 0;
}

int con(int x)
{
    int sum=0,i;
    int n1;
    printf("The numbers are =");
    for(i=0;i<x;i++)
    {
       scanf("%d",&n1);
       sum=sum+n1;
    }
    printf("sum in function %d\n",sum);
    return sum;
    
}
