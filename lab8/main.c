#include <stdio.h>
#include <stdlib.h>
#include<math.h>
#define N 2

float distance(int cord1[] ,int cord2[]);


int main()
{
 int cord1[N];
 int cord2[N];

 printf("enter a coordinats x and y: \n");
 scanf(" %d %d",&cord1[0],&cord1[1]);
 printf("Enter a second coordinats x2 and y2: \n");
 scanf(" %d %d",&cord2[0],&cord2[1]);

 double dis=distance(cord1,cord2);

 printf("distance between two coordiants is %lf",dis);

    return 0;
}



float distance(int cord1[],int cord2[])
{
double disx,disy,distotal,b,a,c;
disx=cord1[0]-cord2[0];
disx=disx>0 ? disx:-disx;
disy=cord1[1]-cord2[1];
disy=disy>0 ? disy:-disy;

a=disx*disx;
c= disy*disy;
b=a+c;

b=sqrt(b);
return b;





}
