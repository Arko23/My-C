#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,a=1,b=3,sum=0,n;
    scanf("%d",&n);
    while(i<=n)
    {
        sum+=a*b;
        a*=2;
        b+=3;
        i++;
    }
    printf("%d",sum);

    return 0;
}
