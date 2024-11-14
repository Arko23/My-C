#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,n,a=1,d=2;
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",a);
        a+=d;
        i++;
    }
    return 0;
}
