#include <stdio.h>
#include<math.h>
double Power(double c, int d);

int main()
{
    double a,b;
    int x;

    scanf("%lf %d", &a,&b);
    b=Power(a,x);

    printf("%.2lf ^ %d = %f", a,x,b);

    return 0;
}
double findp(double c, int d)
{

    if (d == 0)
        return 1;
    else if (d > 0)
        return c* pow(c, d - 1);
    else
        return 1 / pow(c, -d);
}
