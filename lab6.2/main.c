#include<stdio.h>
#include<stdlib.h>

int main1()
{

    int limit,c,r;

    printf("Enter a limit value :");
    scanf(" %d",&limit);

    for(c=0; c<=limit; c++)
    {
        for(r=0; r<=c; r++)
        {
            printf("%d",r);
        }
        printf("\n");
    }
    for(r=limit-1; r>=0; r--)
    {
        for(c=0; c<=r; c++)
        {
            printf("%d",c);

        }
        printf("\n");
    }


    return 0;
}
