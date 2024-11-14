#include<stdio.h>

int main () 
{
    float units , bill;
    printf("enter consumed units : ");
    scanf("%f",&units);

    if(units <= 100 && units > 0)
    {
        bill = units * 0.50;
        printf("The electricity bill is : %f Taka",bill);

    }
    else if (units <=200 && units >100)
    {
        bill =100 * 0.50 + (units - 100) * 0.75;
        printf("The electricity bill is : %f Taka",bill);
    }
    else if(units <=350 && units > 200)
    {
        bill =100 * 0.50 + 100 * 0.75 + (units - 200) * 1.25;
        printf("The electricity bill is : %f Taka",bill);
    }
    else if(units <=500 && units >350)
    {
        bill = 100 * 0.50 + 100 * 0.75 + 150 * 1.25 + (units - 350) * 2.00;
        printf("The electricity bill is : %f Taka",bill);
    }
    else if( units > 500)
    {
        bill = 100 * 0.50 + 100 * 0.75 + 150 * 1.25 + 150 * 2.00 + (units - 500) * 3.50;
        printf("The electricity bill is : %f Taka",bill);

    }
    else 
    {
        printf ("invalid consumed units");
    }

    return 0;
}