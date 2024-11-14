#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r,n,temp,sum=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        sum+=r;
        temp=temp/10;
    }
    printf("%d\n",sum);
    return 0;
}
