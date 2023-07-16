#include<stdio.h>
#include<stdlib.h>

unsigned int daysInYear(unsigned int year);
unsigned int daysInMonth(unsigned int month, unsigned int year);

int main4()
{

    unsigned int d,m,y;

    printf("Enter a year and a month :");
    scanf(" %u %u",&y,&m);

   if(1<=m && m<=12)
       printf("There are %u day(s) in %u/%u.\n", daysInMonth(m, y), m, y);
   else
      printf("%u is not a valid month!\n", m);




    return 0;
}

unsigned int daysInYear(unsigned int year)
{

    if((year%4)==0)
        return 366;
    else
        return 365;


}

unsigned int daysInMonth(unsigned int month, unsigned int year)
{

    switch(month){
    case 1:
case 3:
case 5:
case 7:
case 8:
case 10:
case 12:
    return 31;
   case 2:
{
    if(daysInYear(year)==366)
        return 29;
    else
        return 28;
    }
case 4:
case 6:
case 9 :
case 11:
    return 30;
    }
    return 0;
    }

