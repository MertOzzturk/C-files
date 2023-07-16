#include <stdlib.h>
#include <stdio.h>

int main2()
{
    int a,sayi;
    printf("Enter a number :");
    scanf(" %d",&a);
    sayi=a/10;
    if(sayi<1)
        printf("%d is one digit",a);
    else
        printf("%d is two digit",a);




}
