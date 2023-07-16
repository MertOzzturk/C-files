#include <stdlib.h>
#include <stdio.h>

int main3()
{
    int a,sayi;
    printf("Enter a number for ten power ");
    scanf(" %d",&a);
    sayi=a%10;
    if(sayi==0)
        printf(" %d your number is ten power",a);
    else
        printf(" your number its not ten power");



}
