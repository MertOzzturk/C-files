#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main1()
{
    int a,b,result;
    char islem;
    printf("Bir sayý giriniz\n");
    scanf(" %d",&a);
    printf("Ýkinci sayýyý giriniz\n");
    scanf(" %d",&b);
    printf("islem seçiniz + - / * % or X for display \n");
    scanf(" %c",&islem);
    switch(islem)
    {

    case '+':{
        result=a+b;
        printf(" %d",result);
        break;
    }
    case '-':
        {
        result=a-b;
        printf(" %d",result);
        break;
    }
    case '*':{
        result=a*b;
        printf(" %d",result);
        break;
    }
    case '/':{
         result=a/b;
        printf(" %d",result);
        break;
    }
    case '%':{
         result=a%b;
        printf(" %d",result);
        break;
    }
    default:
        printf("Please use + - * / % or X");
    }



    return 0;
}
