#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,a=1,b=4,sum=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum+=a;
        a+=b;
    }
    printf("%d",sum);
    return 0;

}
