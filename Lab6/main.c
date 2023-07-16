#include <stdio.h>
#include <ctype.h>

int main4(void)
{
    char c;

    while(1)
    {
        printf("enter a letter:");
        scanf(" %c", &c);
        if(c=='-')
            break;
        if(isalpha(c)!=0)  //veya isalpha(c)!=0
        {
            switch(c)
            {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                printf("%c is vowel.\n", c);
                break;
            default:
                printf("%c is consonant.\n", c);
                break;
            }
        }
        else
            printf("%c is not a letter.\n", c);
    }
    return 0;
}
