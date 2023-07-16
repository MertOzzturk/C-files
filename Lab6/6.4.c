#include <stdio.h>
int main5(void)
{
    int w, h, WIDTH,HEIGHT;
    printf("enter width and height:\n");
    scanf("%u %u", &WIDTH, &HEIGHT);
    for(h=1; h<=HEIGHT; h++)
    {
        for(w=1; w<=WIDTH; w++)
        {
            if(h==1 || h==HEIGHT)
                printf("*");
            else if(w==1 || w==WIDTH)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
