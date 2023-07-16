#include <stdio.h>
#include <stdlib.h>

int factroial(int n);

int main()
{
    int a,t;
    while(1)
    {
        printf("Enter a number for functions:");
        scanf(" %d",&a);
        if(a==0)
            break;
        else
        {
            t=factroial(a);
            printf(" %d",t);
        }
        return 0;
    }
}

int factroial(int n)
{
    int son=1;
    while(n!=0)
    {
        son=son*n;
        n--;
    }
    return son;
}
