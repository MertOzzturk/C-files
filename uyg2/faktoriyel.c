#include <stdio.h>
#include <stdlib.h>

int main1()
{
   int i,fac;
   printf("Number");
   scanf(" %d",&i);
   fac=1;
      for(i;i>=1;i--)
       fac=fac*i;
       printf("Factroiel is %d",fac);

    return 0;
}
