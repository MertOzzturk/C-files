#include <stdio.h>


int main1(){
 float sonuc=0;
 int n,i=1;

 do{
 printf("To calculate an approximate of the number pi, enter n:");
 scanf("%d",&n);

 }while(n<1);

 while(1){
    if(i>=n)
    break;
    if((i%4)==1)
    sonuc+=1.0/i;
     else //if((i%4)==3)
     sonuc-=1.0/i;
     i+=2;
 }
 printf("\nApproximate of pi=%f\n\n",4*sonuc);
 return 0;
}
