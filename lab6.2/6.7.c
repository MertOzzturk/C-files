#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,artan,count,c,k;

    printf("Enter a value : ");
    scanf(" %d",&i);

    artan=2;
    if(i<2)
        printf("There is no submultiplies");
    while(i>2)
    {
        if(i%artan==0)
        {
            count=i/artan;
            printf(" %d times %d,,",artan,count);

        }
        artan++;
        if(artan==i)
            break;

    }
    return 0;
}




