#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int charType(char a);
int main5()
{
    int t;
    char c;

    while(1){

        printf("enter a character:");
        scanf(" %c", &c);
        t = charType(c);

        if(t>0)
            printf(" %c is a wovel\n",c);
        else if(t<0)
            printf(" %c is a contansanant\n",c);
        else{
           printf("its not a letter\n");
           break;
        }
    }
    return 0;
}

int charType(char a)
{

    if(isalpha(a))
    {

        switch(a)
        {
        case'a':case'A':
        case'e':case'E':
        case'i':
        case'I':
        case'o':
        case'O':
        case'u':
        case'U':
            return 1;
            default:
                return -1;
            }

    }
else
            return 0;
}
