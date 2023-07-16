#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Mert Ozturk 05220000062

int main1(){
float A=0,B=0,C=0,D=0,total=0;
char code;

while(1){
    printf("Enter a code of vote A,B,C,D or (display for X and exit):");
    scanf(" %c",&code);

    switch(code)
    {
     case 'A':
        printf("Enter the number vote of A:");
        scanf(" %f",&A);
        total=total+A;
        continue;

     case 'B':
        printf("Enter the number vote of B:");
        scanf(" %f",&B);
        total=total+B;
        continue;


     case 'C':
         printf("Enter the number vote of C:");
         scanf(" %f",&C);
        total=total+C;
        continue;

     case 'D':
        printf("Enter the number vote of D:");
        scanf(" %f",&D);
        total=total+D;
        continue;

     case 'X':{
        printf("RESULT:\n");
        printf("A has %f and %f%%\n",A,(100)*(A/total));
        printf("B has %f and %f%%\n",B,(100)*(B/total));
        printf("C has %f and %f%%\n",C,(100)*(C/total));
        printf("D has %f and %f%%\n",D,(100)*(D/total));
        printf("Total vote %f",total);
        break;
     }
    default:
    printf("ERROR!!Please try again and use only uppercase A,B,C,D or X!\n");
    continue;
    }

break;
}



}
