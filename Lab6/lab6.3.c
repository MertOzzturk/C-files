#include<stdlib.h>
#include<stdio.h>
#include <time.h>

int main2(){
int k,N,not_prime=1;
srand(time(NULL));
while(1){

    N=rand()%101+100;
    k=2;
    while(k<N){
        if(N%k==0){
            not_prime;
            break;
        }
        k++;
    }
    if(not_prime==1)
            printf("its a prime number");
    else
        printf("its not a prime number");
}
return 0;

}
