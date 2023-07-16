#include<stdio.h>
#include<stdlib.h>

int main4()
{
    double disc,tax,totalp,last;
    char teach;

    printf("are u teacher y/n :");
    scanf(" %c",&teach);

    printf("What is your total payment :");
    scanf(" %lf",&totalp);

    disc=totalp*(0.1);
    tax=totalp*(0.05);
    last=totalp-disc-tax;

    if(teach=='y'||teach=='Y'){
        printf("Your total payment is %lf\n ",totalp);
        printf("total discount is %lf\n",disc);
        printf("total tax ix %lf\n",tax);
        printf("lastest payment is %lf\n",last);
    }
    else
            printf("your total payment is %lf \n",totalp);
            printf("your total taax is %lf \n ",tax);
            printf("lastest payment is %lf \n",totalp-tax);


}
