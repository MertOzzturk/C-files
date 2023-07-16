#include<stdio.h>
#include<stdlib.h>

int main()
{

int limit,c,r;

printf("Enter a limit value :");
scanf(" %d",&limit);

for(c=0;c<=limit;c++){
    for(r=0;r<=limit;r++)
    {
     printf(" %d",&r);
    }
    printf("\n");
}
return 0;
}
