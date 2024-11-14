#include<stdio.h>

int main()
{
    int a,b,c,d,e,f,a1,b1,c1,d1,e1,f1,note;
    scanf("%d",&note);

    a=note/500;
    a1=note%500;

    b=a1/100;
    b1=a1%100;

    c=b1/50;
    c1=b1%50;

    d=c1/10;
    d1=c1%10;

    e=d1/5;
    e=d1%5;

    f=e1/1;
    f=e1%1;

    if(a!=0){
        printf("%d note of taka 500\n",a);
    }
    if(b!=0){
        printf("%d note of taka 100\n",b);

    }
    if(c!=0){
        printf("%d note of taka 50\n");

    }
    if(d!=0){
        printf("%d note of taka 10\n");

    }
    if(e!=0){
        printf("%d note of taka 5\n");

    }
    if(f!=0){
        printf("%d note  of taka 1\n");
    }
    return 0;
}