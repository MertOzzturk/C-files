#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main1()
{
 int i,sum;
 sum=0;

  printf("Welcome to the DigitSumCalculator!\n");
  printf("Please just enter the number=\n");
  scanf("%d",&i);

  while(i>0){
    sum=sum+i%10;
    i=i/10;

  }
printf("Sum of digits %d",sum);

}
