#include <stdio.h>
#include <stdlib.h>

int main3()
{
    int w,h,result;


    for(h=1;10>=h;h++)
        {
        for(w=1;w<=10;w++)
        {
            result=w*h;
            printf(" %d x %d=%d\n",h,w,result);

        }
        printf(" %d multiples",h);
        printf(" \n");
        }

    return 0;
}

