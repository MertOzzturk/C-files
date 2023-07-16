#include <stdio.h>
#include <stdlib.h>
#define pi 3.14

int main()
{
    double radius;
    char selection;
    double volume;
    double circumference;
    double area;

printf("Enter radius \n");
scanf(" %lf" ,&radius);
printf("What is your selection Circumference or Area or Volume?(only use c or a or v) \n");
scanf(" %c",&selection);

if(selection=='C' || selection=='c')
{

circumference=2*pi*radius;
printf("Circumference is %lf \n",circumference);
}
    else if(selection=='a'||selection=='A')
{

area=pi*radius*radius;
printf("Area is %lf \n ",area);
}
    else if(selection=='V' || selection=='v'){
    volume=(4.0/3.0)*pi*radius*radius*radius;
    printf("Volume is %lf",volume);

}
    else
    printf("Please use a or c or v ");
    return 0;

}
