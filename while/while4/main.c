#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2,n,prime=1;
    scanf("%d",&n);
    if(n==1){
        printf("not prime");
    }
    else{
        while(i<n)
        {
            if(n%i==0){


            prime=0;
            break;
            }

        i++;
        }
        if(prime==1)
        {

            printf("prime");
        }
        else{
            printf("not prime");
        }

    }

    return 0;
}
