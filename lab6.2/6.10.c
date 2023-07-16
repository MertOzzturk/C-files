#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int max (int a,int b);

int main10(){

int N,n,i,largest,smallest,average,sum,N2=0;
srand(time(NULL));
printf("How many people do u wanna get: ");
scanf(" %d",&n);

for(i=0;i<=n;i++){
    N=rand()%46+25;
    printf(" %d",N);
    sum=N+sum;
    largest=max(N,N2);
    continue;
    N2=N;
}
average=sum/n;
printf("\nAverage is %d\n",average);

if(largest=N)
    printf("\nlargest number is %d\n",N);
else
    printf("\nlargest number is %d\n",N2);


return 0;
}

int max (int a,int b){
if(a>b)
    return a;
else
    return b;

}
