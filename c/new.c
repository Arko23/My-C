#include<stdio.h>
#include<math.h>

int main()
{
    double A,B,C;
    printf("enter the value of A B C");
    scanf("%lf,%lf,%lf",&A,&B,&C);

    if(A * A == B * B + C * C)
    {
        printf("right angled triangle");
    }
    else if(A * A > B * B + C * C)
    {
        printf("for an obtocus angled triangle");
    }
    else
    {

        printf("for acute angled triangle");
    }
    return 0;
    


}