#include<stdlib.h>
#include<stdio.h>

int main7()
{

    int a,b;

    printf("Enter a two numbers :");
    scanf(" %d %d",&a,&b);
    printf("a is %d,b is %d\n",a,b);

    if('a'<'b')
    {
        printf("a is now %d,b is now %d",b,a);
    }
    else if('b'<'a')
    {
        a=b;
        b=a;
        printf("a is now %d,b is now %d",b,a);
    }




    return 0;
}
