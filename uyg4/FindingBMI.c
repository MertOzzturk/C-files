#include <stdio.h>
#include <stdlib.h>

int main()
{
    double weight,meter,bmi;
    printf("Enter a value of ur weight \n");
    scanf(" %lf",&weight);
    printf("Enter a value of your height \n");
    scanf(" %lf",&meter);
    meter=meter/100;
    bmi=weight/(meter*meter);

    if(bmi<18)
        printf("your bmi is underweight and %lf",bmi);
    else if(bmi<25)
        printf("your bmi is normal and %lf", bmi);
    else if(bmi<35)
        printf("your bmi is overwieght and %lf",bmi);
    else
        printf("your bmi is obese and %lf",bmi);



}
