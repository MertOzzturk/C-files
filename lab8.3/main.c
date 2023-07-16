#include <stdio.h>
#include <stdlib.h>
#define N 16

double mutlak(double dizi[]);

int main()
{
    double i,j;
    double dizi1[N];
    while(i<N){
        printf("Enter a value :");
        scanf(" %lf",&dizi1[i]);
        i++;
    }

printf("x\t  IxI");
    for(j=0;j<N;j++){

        printf("%lf %lf",&dizi1[i],mutlak(dizi1[i]));
    }



    return 0;
}

double mutlak(double dizi[])
{
    int i=0;
    while(1)
    {
        if(dizi[i]>0)
        {
            return dizi[i];
        }
        else
            return -dizi[i];
    }
    i++;
}
