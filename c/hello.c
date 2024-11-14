#include<stdio.h>

int main()
{
    float a,b,c,perimeter,area;

    printf("enter the value of a , b ,c");
    
    scanf("%f,%f,%f",&a,&b,&c);

    if(a * b > c)
    {
        printf("it's a triangle\n");
        printf("The perimeter of this triangle is %f",a+b+c);
    }
    else
    {
        printf("it's not a triangle\n");
        printf("The area of a trapizium is %f", a + b * c/2);
    }
    return 0;
}