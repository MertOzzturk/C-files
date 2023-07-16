#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    int number[10],i,j;
    srand(time(NULL));

    for(i=0;i<10;i++)
    {
        number[i]=rand()%101 +10;
        for(j=0;j<i;j++)
        {
            if(number[i]>=number[j]){
                i--;
                continue;

            }
        }
    }
    for(i=0;i<10;i++)
        printf("%2d: %2d\n",i,number[i]);


    return 0;
}
