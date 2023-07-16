#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main2()
{
 int i,sum;
 sum=0;

  printf("Welcome to the DigitSumCalculator!\n");
  printf("Please just enter the number=\n");
  scanf("%d",&i);

 if(i>0)
    {
    for(;i/10;){

    sum=sum+i%10;
    i=i/10;

    }
    sum=sum+i;
    printf("Result= %d",sum);
 }
   else
        printf("Enter positive number");
return 0;

}
