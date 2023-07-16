#include <stdio.h>
#include <stdlib.h>

int main1()
{
    int i,w,h;

    printf("Enter a value of edge:");
    scanf(" %d",&i);

    for(h=1;i>=h;h++)
        {
        for(w=1;w<=h;w++)
        {
            printf("*");

        }
        printf("\n");
    }

    return 0;
}
