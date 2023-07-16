#include<stdio.h>
#include<stdlib.h>

 int main1()
{
     int velocity,p2,p1,t2,t1;
     printf("What is  your ending \n");
     scanf(" %d",&p2);
     printf("what is your starting point \n");
     scanf(" %d",&p1);

    printf("what is ur ending timing");
    scanf(" %d",&t2);
    printf("What is your starting timing");
    scanf(" %d",&t1);

     velocity=(p2-p1) / (t2-t1);
     printf("Velocity is %d",velocity);


 }
