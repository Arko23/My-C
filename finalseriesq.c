#include<stdio.h>
int main()
{
    //toal value of finbonacchi x1=1,x2=2 sum 1+2=3//
    int n,i,a=1,b=2,c=0,x1=1,x2=2,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=x1+x2;
        x1=x2;
        c=x2;
        sum+=a*b*c;
        a*=2;
        b++;
    }
    printf("the sum is : %d\n",sum);
    return 0;
}