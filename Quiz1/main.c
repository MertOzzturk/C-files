#include <stdio.h>
#include <stdlib.h>

//Mert Öztürk,05220000062

int main1()
{
    int num;

    printf("Enter a number between 0-127 : ");
    scanf(" %d",&num);

    if(num<0 || num>127)
        printf("ERROR!! Please enter a integer between 0-127\n");
    else if(num<65)                               //its represents "?" "*" "&" like that symbols.
        printf("%d represents a/an characters other than letters.\n",num);
    else if(num<90)                          //its represents A B C
        printf("%d represents a/an uppercase letters.\n ",num);
    else if(num<97)
        printf(" %d does not correspond to any letter.\n",num);
    else if(num<122)                          //its represents a b c
        printf("%d represents a/an lowercase letters\n",num);
    else
        printf("%d does not correspond to any letters. \n",num);
    return 0;


}
