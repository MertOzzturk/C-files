#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main1()
{
    int a,b,result;
    char islem;
    printf("Bir say� giriniz\n");
    scanf(" %d",&a);
    printf("�kinci say�y� giriniz\n");
    scanf(" %d",&b);
    printf("islem se�iniz + - / * % or X for display \n");
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
