#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,r,temp,rev=0,sum=0;
    scanf("%d",&n);
    temp=n;
    while(temp!=0)
    {
        r=temp%10;
        rev=rev*10+r;
        temp=temp/10;
    }
    printf("%d\n",rev);
    return 0;
}



