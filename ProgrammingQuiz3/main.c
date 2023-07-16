#include <stdio.h>
#include <stdlib.h>

 //Mert Öztürk 05220000062

float solve(float x[],float y[],int N); // we defined here a function.


int main()
{
    int i;
    int N=10;
    float x[N]= {0.5,0.8,1.2,0.4,-0.1,0.7,1.1,0.9,0.6,0.3}; // defined x function
    float y[N]; //we dont know the how long is the y function is so empty.

    solve(x,y,N); //
    printf("y[] values:\n"); //we print it like title.
    for ( i = 0; i < N; i++) //We create a loop for write the function of y
    {
            printf("%.3f ", y[i]); //We print 0 to array_size of y[].
    }

    return 0;
}



float solve(float x[],float y[],int N)
{
    int a=1,b=6,c=2;  // my student number.
    float T=0.1;
    //N is array size
    float sum=0;  //we calculate sum.
    int i,k; //we defined i and k so we can calculate for loop.


    for(k=0; k<N; k++)
    {

        for(i=0; i<=k; i++)
        {
            sum=sum+x[i]; //we calculate the second part of y[k] sum of x[k].
        }
        if(k>0)
        {
            y[k] = (a * x[k]) + (b * sum * T) + (c * (x[k] - x[k - 1])) / T; //We calculate

        }
        else
        {
            y[k] = (a * x[k]) + (b * sum * T) + c;

        }

    }

}
