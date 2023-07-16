#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,max,min;

     printf("3 Tane tam sayý giriniz : ");
     scanf(" %d %d %d", &a, &b, &c);
     if(a<b && a<c)
        printf(" %d is min",a);
     else if(b<c && b<a )
        printf(" %d is min",b);
     else
        printf(" %d is min",c);




}
