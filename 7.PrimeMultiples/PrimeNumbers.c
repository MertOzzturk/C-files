#include <stdio.h>
#include<stdlib.h>

int isPrime(int N);
int PrimeNumber(int n);
int nextPrime(int a);
int main()
{

    int a,p,times=0;
    printf("Enter a value:");
    scanf(" %d",&a);

    for(p=2;; p++)
    {
        while(PrimeNumber(p)!=0)
        {
            if(a%p==0)
            {
                a=a/p;
                times++;


                if(a%p!=0)
                {
                    printf(" %d^%d",p,times);
                    times=0;
                    printf("*");
                }


            }

            else
                break;
        }

    }

    return 0;
}

int isPrime(int N)
{

    int n;

    if(N<2)
        return 0;

    for(n=2; n<N; n++)
    {
        if(N%n==0)
            return 0;
    }
    return 1;

}
int PrimeNumber(int n)
{
    while(1)
    {
        if(isPrime(n)==1)
            return n;
        else
            return 0;
    }

}
int nextPrime(int a)
{
    while(1)
    {
        if(PrimeNumber(++a)!=0)
            return ++a;
        else
            return 0;

    }


}


