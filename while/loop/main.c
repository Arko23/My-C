#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,r,a,decimal=0,i=1;
  scanf("%d",&n);
  a=n;
  while(n!=0)
  {
      r=n%10;
      n=n/10;
      decimal=decimal+(r*i);
      i=i*2;
  }
  printf("%d\n",decimal);

    return 0;
}
