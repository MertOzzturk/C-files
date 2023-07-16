#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main3()
{
    int num,digits=0;
    printf("Bir sayý gieiniz");
    scanf(" %d",&num);

    for(;num/10;){
        digits=digits+num%10;
        num=num/10;
    }
    digits=digits+num;
     printf(" %d",digits);


    return 0;
}
