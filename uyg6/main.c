#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
int main()
{
    char c;
    while(1){
    printf("Enter a characther: \n");
    scanf(" %c",&c);

    if(c=='-')
        break;
    if(isalpha(c)){
    switch(c){
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'I':
    case 'i':
    case 'u':
    case 'U':
    case 'o':
    case 'O':
       printf(" %c is wovel \n",c);
       break;
    default:
        printf("its a constanant \n");
        break;

    }
    }
    else
        printf("its not a letter \n");
    }

return 0;
}
