#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,r,dec=0,i=1,temp,bin=0,r2,j=1;
 scanf("%d",&n);
 temp=n;
 while(temp!=0)
 {
     r=temp%10;
     temp=temp/10;
     dec=dec+(r*i);
     i=i*8;
 }
 printf("%d\n",dec);
 while(dec!=0)
 {

     r2=dec%2;
     dec=dec/2;
     bin=bin+(r*j);
     j=j*10;
 }
 printf("%d\n",j);

}
