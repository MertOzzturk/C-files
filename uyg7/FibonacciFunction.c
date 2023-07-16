#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

int fubonacci(int a)
{
    int first=0,second=1,nextnumber=0,digits=3;

    if(a==1)
        return first;
    else if(a==2)
        return second;
    else
    {
        while(a>=digits)
        {
            nextnumber=first+second;
            first=second;
            second=nextnumber;
            digits++;

        }
        return nextnumber;

    }
}


int main()
{

    int a,i;
    printf("Enter a value how many digits do u wanna see in fubonnaci seq:");
    scanf(" %d",&a);
    if(a>0)
    {
        for(i=1; i<=a; i++)
        {
            printf(" %3d: %6d",i,fubonacci(i));
        }
    }
    else
    {
        printf("Count must be positive.\n");
    }

    return 0;
}


