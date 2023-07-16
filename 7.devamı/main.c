#include <stdio.h>
#include <stdlib.h>


int nextPrime(int n);
int isPrime(int N);
int main()
{
   int C,c,p;
   printf("Enter count of prime number :");
   scanf(" %d",&C);

   for(c=1, p=2; c<=C; c++, p=nextPrime(p))
        printf(" %d\t %d\n", c, p);

    return 0;
}

int isPrime(int N){

    int n;

    if(N<2)
        return 0;

    for(n=2; n<N; n++){
        if(N%n==0)
            return 0;
    }
    return 1;

}
int nextPrime(int n){

    while( !isPrime(++n) );
    return n;}
