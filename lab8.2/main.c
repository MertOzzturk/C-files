#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 10


int main()
{
    int number[N],i,j;
    srand(time(NULL));

    for(i=0; i<N; i++)
    {
        number[i]=rand()%101 + 0;
        for(j=0; j<i; j++)
        {
            if(number[j]<=number[i])
            {
                i--;
                continue;
            }
        }
    }
    for(i=0; i<N; i++)
        printf("%2d: %2d\n",i,number[i]);

    return 0;
}
