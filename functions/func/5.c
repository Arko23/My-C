#include<stdio.h>

void func(int x,int y);

int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    func(a,b);

}
void func(int x, int y)
{
    if(x==y)
    {
        printf("%d is equal to %d",x,y);
    }
    else if(x>y)
    {
        printf("%d is greater than %d",x,y);
    }
    else
    {
        printf("%d is less than %d",x,y);
    }
}
