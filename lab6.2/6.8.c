#include<stdio.h>
#include<stdlib.h>

int main9()
{

    float i,sum,count,avarage;
    count=0;
    while(1)
    {
        while(1)
        {
            printf("Enter a number:\n");
            scanf(" %f",&i);
            if(i!=0){
                sum=sum+i;
                count++;
            }
            else
                  break;
        }
        avarage=sum/count;
        printf("Average is %f\n",avarage);
    }


    return 0;
}
