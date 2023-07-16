#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main2()
{
    int i,k,result;
    k=0;
    result=0;

    printf("Bir sayýya kadar giriniz ");
    scanf(" %d",&i);

    while(k<=i)
    {
        result=result+k;
        k=k+1;

    }
    printf(" %d",result);




    return 0;
}
