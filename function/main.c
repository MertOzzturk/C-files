#include <stdio.h>
#include <stdlib.h>

int reverse(int a);

int main()
{
    int a;
    printf("Bir sayı giriniz:  ");
    scanf(" %d",&a);
    printf(" %d",reverse(a));

    return 0;
}

int reverse(int a)
{
    int terssay,onlar,birler,yenisay;
    printf(" %d",a);

    while(a>10)
    {
        onlar=a/10;
        birler=a%10;
        terssay=((birler*10)+(onlar));
        if(terssay>a){

            yenisay=terssay-a;
            printf(" %d",yenisay);
            a=yenisay;
            continue;
        }
        else if(terssay<a)
        {
            yenisay=a-terssay;
            printf(" %d",yenisay);
            a=yenisay;
            continue;


        }
        else
        {
            printf("Cevabınız 0 çıkıyor");
            break;
        }
        return 0;
    }
    return 0;
}
