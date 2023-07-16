#include<stdio.h>
#include<stdlib.h>

int digitNumber(int a);

int main2()
{
    int i,digits;

    while(1){

    printf("Enter a number to know how many digits in there:");
    scanf(" %d",&i);

    digits=digitNumber(i);
    printf(" %d",digits);
    return 0;
}
}


int digitNumber(int a){

int digit;

while(a!=0){

    a=a/10;
    digit++;
}
return digit;
}
