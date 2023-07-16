#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Mert �zt�rk 05220000062
//02.06.2023

int function(char word[],char next[]); //fonksiyon tan�mlad�k.

int main()
{
    char word[31]; //bir kelime tan�mlad�k.
    char next[31]; //yeni kelime.
    int points=0; //puan hesab� yapmak i�in tan�mlama.
    printf("Enter a Word: ");
    scanf(" %s",word);

    while(1) // Yeni kelimeyi almak i�in sonsuz d�ng� kuruyoruz.
    {
        printf("Enter a Next Word: ");
        scanf(" %s",next);

        if(function(word,next))
        {
            points = points+5; //puan� artt�r�yoruz.
            printf(" %s\n",next); // yeni kelimeyi tekrardan yazd�r�yoruz.
            strcpy(word,next); // next kelimesini word dosyas�n�n i�ine at�yotuz yani yeni kelimeyi eskiye at�yoruz.
        }
        else
        {
            points=points+5; //puan� artt�r�yoruz.
            printf("Final points : %d\n",points); // Son olarak puan� g�steriyoruz.
            break;
        }

    }
    return 0;
}

int function(char word[],char next[])
{
    int changes;
    int i;

    if (strlen(word)!=strlen(next)) //e�er uzunluklar� e�it de�ilse bitiriyor.
        return 0;

    for (i=0;i<strlen(word);i++) //Bu kodda tek tek kontrol ediyor her bir harf ayn� m� diye
    {
        if (word[i]!=next[i]) // e�er ayn� ise de�i�ikli�i artt�yor.
            changes++;
        if (changes>1) // De�i�iklik 1 den fazla ise fonskiyona 0 return veriyor.
            return 0;
    }

    return 1;
}
