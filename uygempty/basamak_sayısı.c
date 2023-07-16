#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main1(){

int num,digits=0;

printf("Bir sayý giriniz \n");
scanf(" %d",&num);

for(;num/10;) {
    digits=num%10+digits;
    num/=10;
}
digits=num+digits;
printf(" %d total number",digits);

}
